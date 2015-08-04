/***********************************************************************
** Copyright (C) Tongwei Video Technology Co.,Ltd. All rights reserved.
** Author       : ZXX
** Date         : 2013-11-26
** Name         : WzdNewNatSelectDevDlg.cpp
** Version      : 1.0
** Description  : 穿透向导设备选择页面对话框
** Modify Record:
***********************************************************************/

#include "WzdNewNatSelectDevDlg.h"

CWzdNewNatSelectDevDlg::CWzdNewNatSelectDevDlg()
{
	m_devSelectIndex = DEV_MOBILE;
}

CWzdNewNatSelectDevDlg::~CWzdNewNatSelectDevDlg()
{

}

void CWzdNewNatSelectDevDlg::SetWzdInfo(NAT_WIZARD_INFO* pWzdInfo)
{
	m_pWzdInfo = pWzdInfo;
}

void CWzdNewNatSelectDevDlg::ShowWzdData(bool bRefresh)
{
	if(1 == m_pWzdInfo->ShowWzd)
	{
		m_checkCtrl.SetCheck(true,false);
	}
	else
	{
		m_checkCtrl.SetCheck(false,false);
	}
}

void CWzdNewNatSelectDevDlg::GetWzdData(bool bNext)
{

}
void CWzdNewNatSelectDevDlg::OnLeavePage()
{

}

void CWzdNewNatSelectDevDlg::SetTipInfo(const std::string& str)
{
	m_richTextCtrl.SetText(str, false);
}

void CWzdNewNatSelectDevDlg::SetDevSelectIndex(int devIndex)
{
	m_devSelectIndex = devIndex;
}

int	 CWzdNewNatSelectDevDlg::GetDevSelectIndex()
{
	return m_devSelectIndex;
}

void CWzdNewNatSelectDevDlg::OnInitial()
{
	unsigned long x = m_length[DLG_OFFSET_SUB_LEFT];
	unsigned long y = m_length[DLG_OFFSET_SUB_TOP];

	unsigned long cx = m_rect.Width() -  2 * x;
	unsigned long cy = (m_rect.Height() - 2 * y)/2+15;
	unsigned long height = m_rect.Height() - 2 * y -m_length[CHECK_HEIGHT];
	m_richTextCtrl.Create(GetRandWndID(), x, y, cx, cy, this);
	

	y = y+cy+cy/2 - 3*(m_length[RADIO_HEIGHT]+2);
	m_rdDevMobile.Create(GetRandWndID(),x + m_length[BTN_WIDTH],y,3*m_length[BTN_WIDTH],m_length[RADIO_HEIGHT],this,0,1,&m_rdGroup);
	y += m_length[RADIO_HEIGHT]+5;

	m_rdDevPc.Create(GetRandWndID(),x + m_length[BTN_WIDTH],y,3*m_length[BTN_WIDTH],m_length[RADIO_HEIGHT],this,0,3,&m_rdGroup);
	m_rdGroup.AddRadio(&m_rdDevMobile);

	m_rdGroup.AddRadio(&m_rdDevPc);

	// m_rdDevMobile.SetCaption("Mobile Setup",false,false);
	m_rdDevMobile.SetCaption(m_pStrTable->String(E_STR_ID_US02_NEW_WZD_SELECT_DEV_00), false, false);
	m_rdDevMobile.SetData(DEV_MOBILE);
	// m_rdDevPc.SetCaption("Computer Setup",false,false);
	m_rdDevPc.SetCaption(m_pStrTable->String(E_STR_ID_US02_NEW_WZD_SELECT_DEV_01), false, false);
	m_rdDevPc.SetData(DEV_PC);
	switch(m_devSelectIndex)
	{
	case DEV_MOBILE:
		{
			m_rdDevMobile.SetCheck(true,false);
		}
		break;
	case DEV_PC:
		{
			m_rdDevPc.SetCheck(true,false);
		}
	default:
		{
			//assert(false);
			m_rdDevMobile.SetCheck(true,false);
		}
		break;
	}

	x = m_length[DLG_OFFSET_SUB_LEFT];
	y = m_length[DLG_OFFSET_SUB_TOP]+height;
	cx = m_rect.Width() -  2 * x;
	cy = m_length[CHECK_HEIGHT];
	m_checkCtrl.Create(GetRandWndID(),x,y,cx,cy,this,0,4);
	m_checkCtrl.SetCaption(m_pStrTable->String(E_STR_ID_US02_WZD_OPENAGAIN),false,false);
}

void  CWzdNewNatSelectDevDlg::OnDestroy()
{

}

void CWzdNewNatSelectDevDlg::InitCtrlInfo()
{

}



BEGIN_MSG_MAP(CWzdNewNatSelectDevDlg, CWzdNatPageDlg)
	ON_MSG(m_checkCtrl.GetID(), KEY_VIRTUAL_ENTER, OnCheck)

	ON_MSG(m_rdDevMobile.GetID(),KEY_VIRTUAL_ENTER,OnClickRadioCtrl)
	ON_MSG(m_rdDevPc.GetID(),KEY_VIRTUAL_ENTER,OnClickRadioCtrl)
END_MSG_MAP()

unsigned long CWzdNewNatSelectDevDlg::OnClickRadioCtrl()
{
	GUI::CRadioCtrl* pRadioCtrl = m_rdGroup.GetCheckRadio();
	DEV_SELECT_INDEX click_dev= static_cast<DEV_SELECT_INDEX>(pRadioCtrl->GetData());

	switch(click_dev)
	{
	case DEV_MOBILE:
		{
			m_devSelectIndex = DEV_MOBILE;
			m_rdDevMobile.SetCheck(true,false);
		}
		break;

	case DEV_PC:
		{
			m_devSelectIndex = DEV_PC;
			m_rdDevPc.SetCheck(true,false);
		}
		break;
	default:
		{
			assert(false);
			m_devSelectIndex = DEV_MOBILE;
			m_rdDevMobile.SetCheck(true,false);
		}
		break;
	}
	return KEY_VIRTUAL_MSG_CONTINUE;
}

unsigned long  CWzdNewNatSelectDevDlg::OnCheck()
{
	if(m_checkCtrl.IsCheck())
	{
		m_pWzdInfo->ShowWzd = 1;
	}
	else
	{
		m_pWzdInfo->ShowWzd = 0;
	}
	return KEY_VIRTUAL_STOP;
}

