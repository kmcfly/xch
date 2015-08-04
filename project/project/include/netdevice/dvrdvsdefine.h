/***********************************************************************
** Copyright (C) Tongwei Video Technology Co.,Ltd. All rights reserved.
** Author       : YSW
** Date         : 2010-11-17
** Name         : dvrdvsdefine.h
** Version      : 1.0
** Description  :	描述DVR/DVS相关的一些基本特性
** Modify Record:
				1:创建
***********************************************************************/

/***********************************************************************
							功能树
***********************************************************************
设备基本信息/参数设置
	|
	|——设备序列号、固件版本号、固件版本编译日期、内核版本号、硬件版本号
	|
	|——视频制式、设备ID、设备名称
	|
	|——设备界面语言、启用密码保护、屏幕保护、VGA参数设置
	|
现场预览
	|
	|——本地预览、远程预览、通道隐藏、画面分割、画面轮询
	|
	|——通道名称、录像状态、报警状态（传感器报警、网络地址冲突、硬盘错误、磁盘满）、系统时间
	|
	|——电子缩放、画中画
	|
	|——现场声音、音量调节、静音控制
	|
预览视频/参数设置
	|
	|——色彩调节、分时间片使用不同色彩方案
	|
	|——字符叠加：通道名称、时间戳、自定义信息
	|
	|——区域遮挡
	|
视音频记录/参数设置
	|
	|——编码参数：分辨率、帧率、编码类型、画质、码流限定
	|
	|——报警录像：警前录像时间、警后录像时间、不同的编码参数设定
	|
	|——录制开关：视频开关、音频开关、音视频绑定关系
	|
	|——数据过期时间、冗余录制、分组录制（一组录制到一个物理磁盘）、是否循环覆盖
	|
	|——录像计划：定时录像、传感器报警录像、移动侦测报警录像、视频遮挡报警录像
	|
	|——手动录像、远程控制手动录像
	|
抓图/参数设置
	|
	|——图片尺寸、图片质量、抓取间隔、抓取数目
	|
	|——手动抓图、图片检索、图片查看（显示）
	|
报警处理/参数设置
	|
	|——报警类型：传感器报警、移动侦测报警、视频遮挡报警、视频丢失报警、智能分析报警
	|
	|——侦测计划、侦测时延、传感器设备类型、传感器设备名称、移动侦测区域及灵敏度
	|
	|——报警输出：继电器报警、声音报警（蜂鸣器）、大画面警示、发送邮件、上报中心
	|
	|——报警记录：触发录像（指定通道）、记录日志（报警开始、报警结束）
	|
	|——报警联动：云台预置点、云台巡航线、云台轨迹
	|
	|——邮件报警：通道信息、报警类型、附带图片（指定通道、图片数目及时间间隔）
	|
报警输出/参数设置
	|
	|——继电器报警：开关、响应时间表、响应时延、报警器名称
	|
	|——蜂鸣器报警：开关、响应时间表、响应时延
	|
	|——手动报警、远程手动报警
	|
历史视频检索/回放/备份
	|
	|——按时间搜索：数据分布图、区分不同录像类型
	|
	|——按事件搜索：事件列表、可过滤事件类型
	|
	|——按文件搜索：文件列表（不分割录像段）、锁定/删除文件
	|
	|——按图片搜索：图片显示、锁定/删除图片、图片备份（另存为）
	|
	|——开启回放：指定开始时间回放（指定一组通道）、指定事件回放、指定文件回放
	|
	|——回放控制：暂停、快进、快退、单帧播放、重新定位、退出回放、抓图保存（硬盘）、选择区段用于备份
	|
	|——手动备份：按照开始时间，结束时间备份、指定文件备份、剪辑备份、DVR和AVI两种文件格式、组合备份（多个通道备份到一个文件）
	|
	|——自动备份：指定时间，备份条件备份到外界存储器、备份到网络服务器
	|
网络/参数设置
	|
	|——网络地址设定：静态地址、动态地址、PPPoE
	|
	|——端口设定：HTTP端口、数据端口、报警端口、其他
	|
	|——多播地址设定
	|
	|——DDNS设定：客户定制需求、上报周期设定等
	|
	|——网络子码流的编码参数设置：分辨率、帧率、编码方式、画质、码流限定、是否自适应（画质或者流畅性）
	|
	|——网络连接设定：用户注册数限定、视频通道数限定、是否开放主码流、黑白名单
	|
	|——查看网络状态、现场提示网络状态（正常连接，无连接、冲突）、查看在线用户、推出在线用户
	|
邮件功能/配置
	|
	|——报警时发送邮件、一段时间内组合邮件、邮件可指定是否带附件、指定时间发生邮件、手动发送邮件
	|
	|——
	|
FTP设置
	|
	|——
	|
云台控制/参数设置
	|
	|——串口参数设置、预置点设定、巡航线设定、轨迹设置
	|
	|——云台控制：八个方向、停止、光圈、焦点、缩放、速率（128）、灯光、雨刷、自动线扫
	|
	|——控制方式：鼠标三维控制、鼠标通过对话框控制、前面板、遥控器、专业键盘、远程控制
	|
	|——协议：
	|
配置管理
	|
	|——本地配置、远程配置、配置导出/配置导入、恢复出厂配置
	|
磁盘管理/健康检查
	|
	|——格式化磁盘、清除数据、设定磁盘分组、设定磁盘属性（只读、读写、冗余、备份）
	|
	|——
	|
系统维护
	|
	|——固件升级、设备健康检查、远程升级、FTP升级
	|
用户管理/权限设定
	|
	|
	|
日志记录/检索/导出
	|
	|——

***********************************************************************
							功能树
***********************************************************************/
#ifndef __DVR_DVS_DEFINE_H__
#define __DVR_DVS_DEFINE_H__
#include "dvrdvstypedef.h"

//记录时间的结构体
typedef struct _dd_time_
{
	unsigned char	second;
	unsigned char	minute;
	unsigned char	hour;
	unsigned char	wday;
	unsigned char	mday;
	unsigned char	month;
	unsigned short	year;
}DD_TIME, *LP_DD_TIME;

//记录年月日的结构体
typedef struct _dd_date_
{
	unsigned char  mday;
	unsigned char  month;
	unsigned short year;
}DD_DATE, *LP_DD_DATE;

typedef struct _dd_frame_info_
{
	unsigned long		frameType;
	unsigned long		length;

	unsigned long		keyFrame;	//0 不是关键帧

	unsigned short      width;
	unsigned short      height;

	unsigned char      *pData;

	unsigned short		deviceIndex;
	unsigned short      channel;

	unsigned long       bufIndex;
	unsigned long		frameIndex;		//帧索引

	unsigned long		frameAttrib;
	unsigned long		streamID;

	LONGLONG			time;			//在帧绝对时间，年月日时分秒毫秒，在改变设备时间时会变化
	LONGLONG			relativeTime;	//相对时间，在改变设备时间时不会变化，是个连续的时间

	DD_TIME				localTime;		//设备当地时间，后期填写
}DD_FRAME_INFO, *LP_DD_FRAME_INFO;

typedef struct _dd_log_info_
{
	unsigned long	majorType;		//主类型
	unsigned long	minorType;		//子类型

	unsigned long	time;			//该日志发生时间

	unsigned long	IP;				//产生该日志时用户IP
	char			name [36];		//该日志对应地用户名称

	DD_TIME			localTime;		//设备当地时间，后期填写

	unsigned long	infoLen;
	char			info[1024];
}DD_LOG_INFO, *LP_DD_LOG_INFO;

typedef struct _dd_record_log_
{
	unsigned char	bLocked;		//0表示未锁定，1表示锁定
	unsigned char	bUnofficial;	//0表示正式记录，1表示非正式记录（即修改时间后的重叠记录）
	unsigned char	enableCard;		//是否使用卡号
	unsigned char	recv1;			//保留字节

	unsigned short	diskIndex;		//磁盘序号
	unsigned short	fileIndex;		//文件序号
	unsigned short	logIndex;		//子序号
	unsigned short	recv2;			//保留字节

	unsigned short	deviceID;		//设备序号
	unsigned short	cameraID;		//摄像头序号
	
	unsigned long	channel;		//虚拟通道号
	unsigned long	type;			//录像类型
	
	unsigned long	size;			//该段录像数据长度

	DD_TIME			startTime;		//起始时间
	DD_TIME			endTime;		//结束时间

	char			cardNo[32];		//卡号
}DD_RECORD_LOG, *LP_DD_RECORD_LOG;

typedef struct _dd_cruise_point_info
{
	unsigned long			presetIndex;
	unsigned long			dwellSpeed;
	unsigned long			dwellTime;
}DD_CRUISE_POINT_INFO;

#ifndef NEED_VIDEO_ENCODE_INFO
#define NEED_VIDEO_ENCODE_INFO
typedef struct _chn_video_encode_info_
{
	unsigned int	channel;					//通道号
	unsigned long	iLength;					//视频参数数据长度
	unsigned char	*pVideoEncodeInfo;			//当前的编码信息地址
	unsigned char	bValid;						//是否可以修改
	unsigned char	reserver[7];				//保留
}CHN_VIDEO_ENCODE_INFO, *PCHN_VIDEO_ENCODE_INFO;


typedef struct _chn_video_encode_info_detail_
{
	unsigned int	stream;					//0:主码流 1:子码流
	unsigned char	resolution[12];			//获取时表示当前分辨率字符串，设置时表示需要设置的分辨率字符串，举例：352*288。要有结束符
	unsigned long	lBitRateStream[20];		//获取时表示当前编码码率数组，设置时，只有lBitStream[0]有效，适用于CBR
	unsigned int	rate;					//获取时表示为当前分辨率的帧率最大值，设置时表示需要设置的帧率
	unsigned int	encodeType;				//获取时表示当前分辨率的编码类型1：定码流；2变码流 3：定码流/变码流都支持
	//设置时表示当前分辨率的编码类型1：定码流；2变码流
	unsigned int	quality;				//获取时表示当前编码质量的分类数量，设置时为范围内的一个固定值，适用于VBR
	unsigned char	bCrrentUse;				//获取时表示当前是否为当前使用，设置时这里无意义
	unsigned char	reserver[3];
}CHN_VIDEO_ENCODE_INFO_DETAIL, *PCHN_VIDEO_ENCODE_INFO_DETAIL;
#endif

#endif //__DVR_DVS_DEFINE_H__
