// SWL_MultiNetComm.h: interface for the CTS_MultiNetComm class.
//
//////////////////////////////////////////////////////////////////////

#ifndef _SWL_MULTI_NET_COMM_H_
#define _SWL_MULTI_NET_COMM_H_

#include "SWL_Public.h"
#include "DDPublic.h"
#include <string.h>
#include <list>

using namespace std;

typedef struct _recv_data_buffer_
{
	long			bufferSize;	//����������
	long			dataSize;	//�����������ݴ�С
	char			*pData;		//�������ݵĻ�����
}RECV_DATA_BUFFER;

//���ݴ����ɹ�����0�����򷵻�-1����ʱ���������״̬
typedef int (*RECVASYN_CALLBACK)(long clientID, void* pParam, RECV_DATA_BUFFER *pDataBuffer);
//����������Դ�ṹ��
typedef struct _net_link_resource_
{
	SWL_socket_t		sock;
	long				deviceID;
	long				bufferMaxLen;		//�����������ݵ�ͨ������ָ̬���������û����С
	RECV_DATA_BUFFER	recvBuffer;			//Ҫ���յ�����
	RECVASYN_CALLBACK	pfRecvCallBack;		//�������ݵĻص�����
	void*				pParam;				//�ص���������
	bool				bBroken;			//�Ƿ��ѶϿ�
}NET_LINK_RESOURCE;

class CSWL_MultiNetCommEx
{
public:
	CSWL_MultiNetCommEx();
	virtual ~CSWL_MultiNetCommEx();

public:
	bool Init();

	void Destroy();
	//�����µ���������
	int AddComm(long deviceID, SWL_socket_t sock);

	//ɾ��ָ��ID����������
	int RemoveComm(long deviceID);

	//ɾ�����е���������
	int RemoveAllConnect();

	int SendData(long deviceID, const void *pBuf, int iLen, bool bBlock);

	//�����Զ��������ݵĻص�����
	int SetAutoRecvCallback(long deviceID, RECVASYN_CALLBACK pfRecvCallBack, void *pParam);

	//����ָ�����ӵĽ��ջ�������С
	void SetRecvBufferLen(long deviceID, long bufferLen);

private:
	int SendBuff(long deviceID, const void *pBuf, int iLen, bool bBlock, long lBlockTime);
	int RecvBuff(long deviceID, void *pBuf, int iLen, bool bBlock, long lBlockTime);
	static PUB_THREAD_RESULT PUB_THREAD_CALL RecvThread(void *pParam);
	void RecvThreadRun();

	bool GetLinkResourceByLinkID(long deviceID, NET_LINK_RESOURCE * &pLinkResource);

	void UpdateRemoveComm();

private:
	list<NET_LINK_RESOURCE *>				m_listNetLink;
	list<NET_LINK_RESOURCE *>				m_tempDelNetLink;
	CPUB_Lock								m_lstLinkLock;
	CPUB_Lock								m_lstLinkLockForCallback;
	
	int										m_maxSockInt;
	bool									m_bSockThreadRun;
	fd_set									m_fdReadSet;
	PUB_thread_t							m_threadId;
};

#endif