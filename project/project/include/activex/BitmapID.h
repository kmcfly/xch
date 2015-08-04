#ifndef BITMAP_ID_H
#define BITMAP_ID_H
#include <map>
#include "gui.h"

namespace GUI
{
	//位图ID
	enum BITMAP_ID
	{
		//@公共 ui_common
		//Button
		BMP_BUTTON_NORMAL,
		BMP_BUTTON_NORMAL_FOCUS,
		BMP_BUTTON_DLG_EXIT,
		BMP_BUTTON_DLG_EXIT_F,
		BMP_BUTTON_DLG_FLEX_L,
		BMP_BUTTON_DLG_FLEX_L_F,
		BMP_BUTTON_DLG_FLEX_R,
		BMP_BUTTON_DLG_FLEX_R_F,
		BMP_BUTTON_DLG_OK,
		BMP_BUTTON_DLG_OK_F,
		BMP_BUTTON_MINI_MAP,
		BMP_BUTTON_MINI_MAP_F,

		BMP_BTN_TOP,
		BMP_BTN_TOP_FOCUS,
		BMP_BTN_UP,
		BMP_BTN_UP_FOCUS,
		BMP_BTN_DOWN,
		BMP_BTN_DOWN_FOCUS,
		BMP_BTN_BOTTOM,
		BMP_BTN_BOTTOM_FOCUS,

		//Check Ctrl
		BMP_CHECKCTRL,
		BMP_CHECKCTRL_FOCUS,
		BMP_CHECKCTRL_DISABLE,
		BMP_CHECKCTRL_CHECK,
		BMP_CHECKCTRL_CHECK_FOCUS,
		BMP_CHECKCTRL_CHECK_DISABLE,

		//Radio Ctrl
		BMP_RADIOCTRL,
		BMP_RADIOCTRL_FOCUS,
		BMP_RADIOCTRL_DISABLE,
		BMP_RADIOCTRL_CHECK,
		BMP_RADIOCTRL_CHECK_FOCUS,
		BMP_RADIOCTRL_CHECK_DISABLE,
		//Tab Button
		BMP_TABBUTTON,
		BMP_TABBUTTON_FOCUS,
		BMP_TABBUTTON_DISABLE,
		BMP_TABBUTTON_CHECK,
		BMP_TABBUTTON_CHECK_FOCUS,
		BMP_TABBUTTON_CHECK_DISABLE,

		//SliderCtrl
		BMP_SLIDER_BOX,
		BMP_SLIDER_BOX_FOUCS,
		BMP_SLIDER_BOX_DISABLE,
		BMP_SLIDER_BOX_V,
		BMP_SLIDER_BOX_V_FOUCS,
		BMP_SLIDER_BOX_V_DISABLE,
		BMP_SLIDER_BK,

		//ScrollCtrl
		////水平
		BMP_SCROLL_BTN,
		BMP_SCROLL_BTN_FOCUS,
		BMP_SCROLL_BTN_DISABLE,
		BMP_SCROLL_BTN_LEFT,
		BMP_SCROLL_BTN_LEFT_FOCUS,
		BMP_SCROLL_BTN_LEFT_DISABLE,
		BMP_SCROLL_BTN_RIGHT,
		BMP_SCROLL_BTN_RIGHT_FOCUS,
		BMP_SCROLL_BTN_RIGHT_DISABLE,
		////竖直
		BMP_SCROLL_BTN_V,
		BMP_SCROLL_BTN_V_FOCUS,
		BMP_SCROLL_BTN_V_DISABLE,
		BMP_SCROLL_BTN_TOP,
		BMP_SCROLL_BTN_TOP_FOCUS,
		BMP_SCROLL_BTN_TOP_DISABLE,
		BMP_SCROLL_BTN_BOTTOM,
		BMP_SCROLL_BTN_BOTTOM_FOCUS,
		BMP_SCROLL_BTN_BOTTOM_DISABLE,

		//Combo
		BMP_COMBO_BTN_LEFT,
		BMP_COMBO_BTN_LEFT_FOCUS,
		BMP_COMBO_BTN_LEFT_DISABLE,
		BMP_COMBO_BTN_RIGHT,
		BMP_COMBO_BTN_RIGHT_FOCUS,
		BMP_COMBO_BTN_RIGHT_DISABLE,
		BMP_COMBO_BTN_DOWN,
		BMP_COMBO_BTN_DOWN_FOCUS,
		BMP_COMBO_BTN_DOWN_DISABLE,

		//Progress
		BMP_PROGRESS_1,
		BMP_PROGRESS_2,
		BMP_PROGRESS_DISABLE,

		//ListCtrl
		BMP_LIST_HEADER,
		//ListCtrlEx
		BMP_LISTEX_BTN_LEFT,
		BMP_LISTEX_BTN_LEFT_FOCUS,
		BMP_LISTEX_BTN_LEFT_DISABLE,
		BMP_LISTEX_BTN_LEFTMOST,
		BMP_LISTEX_BTN_LEFTMOST_FOCUS,
		BMP_LISTEX_BTN_LEFTMOST_DISABLE,
		BMP_LISTEX_BTN_RIGHT,
		BMP_LISTEX_BTN_RIGHT_FOCUS,
		BMP_LISTEX_BTN_RIGHT_DISABLE,
		BMP_LISTEX_BTN_RIGHTMOST,
		BMP_LISTEX_BTN_RIGHTMOST_FOCUS,
		BMP_LISTEX_BTN_RIGHTMOST_DISABLE,

		//日历
		BMP_DATE_BTN_CALENDAR,
		BMP_DATE_BTN_CALENDAR_FOCUS,
		BMP_DATE_BTN_CALENDAR_DISABLE,

		//Icon 默认图标
		BMP_ERROR,
		BMP_WARNING,
		BMP_QUESTION,
		BMP_ICON_INFO,
		BMP_LIVE_AUDIO,
		BMP_LIVE_MOTION,
		BMP_LIVE_PTZ,
		BMP_WAITTING,
		BMP_LIVE_MOTION_BIG,
		BMP_LOCK,
		BMP_LIVE_SNAP_TIP,
		BMP_LIVE_SNAP_TIP_FAIL,

		BMP_SAVE,
		BMP_SAVE_FOCUS,
		BMP_ALL,
		BMP_ALL_FOCUS,
		BMP_CUSTOM,
		BMP_CUSTOM_FOCUS,
		BMP_CLEAR,
		BMP_CLEAR_FOCUS,
		BMP_GOTO,
		BMP_GOTO_FOCUS,

		BMP_EDIT,
		BMP_EDIT_FOCUS,
		BMP_ERASE,
		BMP_ERASE_FOCUS,

		//检索地方的几个分割按钮和播放按钮
		BMP_BTN_SEARCH_1X1,
		BMP_BTN_SEARCH_1X1_F,
		BMP_BTN_SEARCH_1X1_N,
		BMP_BTN_SEARCH_1X1_SEL,
		BMP_BTN_SEARCH_2X2,
		BMP_BTN_SEARCH_2X2_F,
		BMP_BTN_SEARCH_2X2_N,
		BMP_BTN_SEARCH_2X2_SEL,
		BMP_BTN_SEARCH_2X3,
		BMP_BTN_SEARCH_2X3_F,
		BMP_BTN_SEARCH_2X3_N,
		BMP_BTN_SEARCH_2X3_SEL,
		BMP_BTN_SEARCH_3X3,
		BMP_BTN_SEARCH_3X3_F,
		BMP_BTN_SEARCH_3X3_N,
		BMP_BTN_SEARCH_3X3_SEL,
		BMP_BTN_SEARCH_4X4,
		BMP_BTN_SEARCH_4X4_F,
		BMP_BTN_SEARCH_4X4_N,
		BMP_BTN_SEARCH_4X4_SEL,
		BMP_BTN_SEARCH_PLAY,
		BMP_BTN_SEARCH_PLAY_F,
		BMP_BTN_ARROW_LEFT,
		BMP_BTN_ARROW_LEFT_F,
		//回放按钮
		BMP_BTN_PLAY,
		BMP_BTN_PLAY_FOCUS,
		BMP_BTN_PLAY_DISABLE,
		BMP_BTN_PAUSE,
		BMP_BTN_PAUSE_FOCUS,
		BMP_BTN_PAUSE_DISABLE,
		BMP_BTN_STOP,
		BMP_BTN_STOP_FOCUS,
		BMP_BTN_STOP_DISABLE,
		BMP_BTN_NEXT_FRAME,
		BMP_BTN_NEXT_FRAME_FOCUS,
		BMP_BTN_NEXT_FRAME_DISABLE,
		BMP_BTN_FAST_FORWARD,
		BMP_BTN_FAST_FORWARD_FOCUS,
		BMP_BTN_FAST_FORWARD_DISABLE,
		BMP_BTN_REWARD,
		BMP_BTN_REWARD_FOCUS,
		BMP_BTN_REWARD_DISABLE,
		BMP_BTN_ZOOM,
		BMP_BTN_ZOOM_FOCUS,
		BMP_BTN_ZOOM_DISABLE,
		BMP_BTN_NEXT_SECTION,
		BMP_BTN_NEXT_SECTION_FOCUS,
		BMP_BTN_PREV_SECTION,
		BMP_BTN_PREV_SECTION_FOCUS,
		BMP_BTN_SET_COLOR,
		BMP_BTN_SET_COLOR_F,
		BMP_BTN_SET_COLOR_N,
		BMP_BTN_SNAP,
		BMP_BTN_SNAP_F,
		BMP_BTN_SNAP_N,
		BMP_BTN_CUTSTART,
		BMP_BTN_CUTSTART_F,
		BMP_BTN_CUTSTART_N,
		BMP_BTN_CUTEND,
		BMP_BTN_CUTEND_F,
		BMP_BTN_CUTEND_N,
		BMP_BTN_BACKUPCOPY,
		BMP_BTN_BACKUPCOPY_F,
		BMP_BTN_BACKUPCOPY_N,
		BMP_BTN_POPSPLIT,
		BMP_BTN_POPSPLIT_F,
		BMP_BTN_POPSPLIT_N,
		//
		BMP_BTN_PLAY_BG,
		BMP_BTN_PLAY_1X1,
		BMP_BTN_PLAY_1X1_F,
		BMP_BTN_PLAY_1X1_N,
		BMP_BTN_PLAY_2X2,
		BMP_BTN_PLAY_2X2_F,
		BMP_BTN_PLAY_2X2_N,
		BMP_BTN_PLAY_2X3,
		BMP_BTN_PLAY_2X3_F,
		BMP_BTN_PLAY_2X3_N,
		BMP_BTN_PLAY_3X3,
		BMP_BTN_PLAY_3X3_F,
		BMP_BTN_PLAY_3X3_N,
		BMP_BTN_PLAY_4X4,
		BMP_BTN_PLAY_4X4_F,
		BMP_BTN_PLAY_4X4_N,
		BMP_BTN_PLAY_1A5,
		BMP_BTN_PLAY_1A5_F,
		BMP_BTN_PLAY_1A5_N,
		BMP_BTN_PLAY_1A7,
		BMP_BTN_PLAY_1A7_F,
		BMP_BTN_PLAY_1A7_N,
		BMP_BTN_PLAY_1A12,
		BMP_BTN_PLAY_1A12_F,
		BMP_BTN_PLAY_1A12_N,
		BMP_BTN_PLAY_LIVE,
		BMP_BTN_PLAY_LIVE_F,
		BMP_BTN_PLAY_LIVE_N,

		BMP_BTN_PLAY_TRIANGLE,
		BMP_BTN_PLAY_TRIANGLE_F,

		BMP_BTN_PLAY_AUDIO,
		BMP_BTN_PLAY_AUDIO_F,
		BMP_BTN_PLAY_AUDIO_N,
		BMP_BTN_PLAY_AUDIO_M,
		BMP_BTN_PLAY_AUDIO_M_F,
		//
		BMP_BTN_PLAY_HIDE,
		BMP_BTN_PLAY_HIDE_FOCUS,
		BMP_BTN_PLAY_MOVE,
		BMP_BTN_PLAY_MOVE_FOCUS,

		BMP_BTN_EXIT2,
		BMP_BTN_EXIT2_FOCUS,
		BMP_BTN_EXIT3,
		BMP_BTN_EXIT3_FOCUS,
		BMP_BTN_EXIT4,
		BMP_BTN_EXIT4_FOCUS,

		BMP_BTN_ADD,
		BMP_BTN_ADD_FOCUS,
		BMP_BTN_DEC,
		BMP_BTN_DEC_FOCUS,
		BMP_BTN_MODIFY,
		BMP_BTN_MODIFY_FOCUS,
		BMP_BTN_DELETE,
		BMP_BTN_DELETE_FOCUS,

		//云台控制相关部分
		BMP_PTZ_CTRL_BK,
		BMP_PTZ_UP,
		BMP_PTZ_UP_F,
		BMP_PTZ_UP_RIGHT,
		BMP_PTZ_UP_RIGHT_F,
		BMP_PTZ_RIGHT,
		BMP_PTZ_RIGHT_F,
		BMP_PTZ_DOWN_RIGHT,
		BMP_PTZ_DOWN_RIGHT_F,
		BMP_PTZ_DOWN,
		BMP_PTZ_DOWN_F,
		BMP_PTZ_DOWN_LEFT,
		BMP_PTZ_DOWN_LEFT_F,
		BMP_PTZ_LEFT,
		BMP_PTZ_LEFT_F,
		BMP_PTZ_UP_LEFT,
		BMP_PTZ_UP_LEFT_F,
		BMP_PTZ_STOP,
		BMP_PTZ_STOP_F,
		BMP_PTZ_LAMP_ON,
		BMP_PTZ_LAMP_ON_F,
		BMP_PTZ_LAMP_OFF,
		BMP_PTZ_LAMP_OFF_F,
		BMP_PTZ_BRUSH_ON,
		BMP_PTZ_BRUSH_ON_F,
		BMP_PTZ_BRUSH_OFF,
		BMP_PTZ_BRUSH_OFF_F,


		//一些连接的ICON
		BMP_ICON_EXIT,				//Exit or Cancel
		BMP_ICON_CONFIG_RESET,
		BMP_ICON_CONFIG_MAN,		//import / export
		BMP_ICON_CONFIG_BLACKLIST,	//blacklist

		//Dialog
		////保存在内存中
		BMP_MEM_DLG_LARGE,//大对话框
		BMP_MEM_DLG_NORMAL,//一般对话框
		BMP_MEM_DLG_SMALL,//小对话框
		//Dialog
		BMP_DLG_BASE,
		BMP_DLG_CHILD_BASE,

#if defined(__DVR_LOGO__) || defined(__ENVIRONMENT_WIN32__)
		//logo
		BMP_ICON_LOGO,
		BMP_ICON_LOGO_TRANS,
#endif

#ifdef __DVR_MENU__
		//@弹出菜单 ui_menu
		BMP_MENU_BG,
		BMP_MENU_SEPARATOR,
		BMP_MENU_ITEM_BG_F,
		BMP_MENU_ITEM_ARROW,
		BMP_MENU_ITEM_ARROW_F,
		BMP_MENU_ITEM_SINGLE,
		BMP_MENU_ITEM_SINGLE_F,
		BMP_MENU_ITEM_MULTI,
		BMP_MENU_ITEM_MULTI_F,
		BMP_MENU_ITEM_DWELL,
		BMP_MENU_ITEM_DWELL_F,
		BMP_MENU_ITEM_DWELL_NO,
		BMP_MENU_ITEM_DWELL_NO_F,
		BMP_MENU_ITEM_ZOOM,
		BMP_MENU_ITEM_ZOOM_F,
		BMP_MENU_ITEM_AUDIO,
		BMP_MENU_ITEM_AUDIO_F,
		BMP_MENU_ITEM_AUDIO_NO,
		BMP_MENU_ITEM_AUDIO_NO_F,
		BMP_MENU_ITEM_PTZ,
		BMP_MENU_ITEM_PTZ_F,
		BMP_MENU_ITEM_REC,
		BMP_MENU_ITEM_REC_F,
		BMP_MENU_ITEM_PLAYBACK,
		BMP_MENU_ITEM_PLAYBACK_F,
		BMP_MENU_ITEM_MAIN,
		BMP_MENU_ITEM_MAIN_F,
		BMP_MENU_ITEM_2X2,
		BMP_MENU_ITEM_2X2_F,
		BMP_MENU_ITEM_2X3,
		BMP_MENU_ITEM_2X3_F,
		BMP_MENU_ITEM_1A5,
		BMP_MENU_ITEM_1A5_F,
		BMP_MENU_ITEM_1A7,
		BMP_MENU_ITEM_1A7_F,
		BMP_MENU_ITEM_3X3,
		BMP_MENU_ITEM_3X3_F,
		BMP_MENU_ITEM_1A12,
		BMP_MENU_ITEM_1A12_F,
		BMP_MENU_ITEM_SET_COLOR,
		BMP_MENU_ITEM_SET_COLOR_F,
		BMP_MENU_ITEM_SNAP,
		BMP_MENU_ITEM_SNAP_F,
		BMP_MENU_ITEM_PIP,
		BMP_MENU_ITEM_PIP_F,

		BMP_MENU_MULTI_5X5,
		BMP_MENU_MULTI_5X5_F,
		BMP_MENU_MULTI_6X6,
		BMP_MENU_MULTI_6X6_F,
		BMP_MENU_MULTI_UNREGULAR,
		BMP_MENU_MULTI_UNREGULAR_F,
		BMP_MENU_ITEM_SET_CAM_PARA,
		BMP_MENU_ITEM_SET_CAM_PARA_F,
#else
		//@工具条 ui_toolbar
		BMP_DLG_TOOLBAR,

		BMP_BTN_TOOL_BK,
		BMP_BTN_TOOL_MENU,
		BMP_BTN_TOOL_MENU_F,
		BMP_BTN_TOOL_6X6,
		BMP_BTN_TOOL_6X6_F,
		BMP_BTN_TOOL_5X5,
		BMP_BTN_TOOL_5X5_F,
		BMP_BTN_TOOL_4X4,
		BMP_BTN_TOOL_4X4_F,
		BMP_BTN_TOOL_1A12,
		BMP_BTN_TOOL_1A12_F,
		BMP_BTN_TOOL_3X3,
		BMP_BTN_TOOL_3X3_F,
		BMP_BTN_TOOL_1A7,
		BMP_BTN_TOOL_1A7_F,
		BMP_BTN_TOOL_1A5,
		BMP_BTN_TOOL_1A5_F,
		BMP_BTN_TOOL_2X3,
		BMP_BTN_TOOL_2X3_F,
		BMP_BTN_TOOL_2X2,
		BMP_BTN_TOOL_2X2_F,
		BMP_BTN_TOOL_1X1,
		BMP_BTN_TOOL_1X1_F,
		BMP_BTN_TOOL_TRIANGLE_UP,
		BMP_BTN_TOOL_TRIANGLE_UP_F,
		BMP_BTN_TOOL_TRIANGLE_DOWN,
		BMP_BTN_TOOL_TRIANGLE_DOWN_F,

		BMP_BTN_TOOL_DWELL,
		BMP_BTN_TOOL_DWELL_F,
		BMP_BTN_TOOL_DWELL_NO,
		BMP_BTN_TOOL_DWELL_NO_F,
		BMP_BTN_TOOL_AUDIO,
		BMP_BTN_TOOL_AUDIO_F,
		BMP_BTN_TOOL_AUDIO_MUTE,
		BMP_BTN_TOOL_AUDIO_MUTE_F,
		BMP_BTN_TOOL_PTZ,
		BMP_BTN_TOOL_PTZ_F,
		BMP_BTN_TOOL_REC,
		BMP_BTN_TOOL_REC_F,
		BMP_BTN_TOOL_ARM,
		BMP_BTN_TOOL_ARM_F,
		BMP_BTN_TOOL_HIDE,
		BMP_BTN_TOOL_HIDE_F,
		BMP_BTN_TOOL_PLAY,
		BMP_BTN_TOOL_PLAY_F,
		BMP_BTN_TOOL_ZOOM,
		BMP_BTN_TOOL_ZOOM_F,
		BMP_BTN_TOOL_SET_COLOR,
		BMP_BTN_TOOL_SET_COLOR_F,
		BMP_BTN_TOOL_SNAP,
		BMP_BTN_TOOL_SNAP_F,
		BMP_BTN_TOOL_EDIT,
		BMP_BTN_TOOL_EDIT_F,
		BMP_BTN_TOOL_PIP,
		BMP_BTN_TOOL_PIP_F,
		BMP_BTN_TOOL_WINEDIT,
		BMP_BTN_TOOL_WINEDIT_F,
		BMP_BTN_TOOL_SYSINFO,
		BMP_BTN_TOOL_SYSINFO_F,
		BMP_BTN_TOOL_SET_CAM_PARA,
		BMP_BTN_TOOL_SET_CAM_PARA_F,
#endif

#ifdef __DVR_ANCHOR__
		//Anchor方式相关 ui_anchor
		BMP_ANCHOR_BK,
		BMP_ANCHOR_BK_F,
		BMP_ANCHOR_CONFIG,
		BMP_ANCHOR_CONFIG_F,
		BMP_ANCHOR_SEARCH,
		BMP_ANCHOR_SEARCH_F,
		BMP_ANCHOR_BACKUP,
		BMP_ANCHOR_BACKUP_F,
		BMP_ANCHOR_INFO,
		BMP_ANCHOR_INFO_F,
		BMP_ANCHOR_MANUAL,
		BMP_ANCHOR_MANUAL_F,
		BMP_ANCHOR_DISK,
		BMP_ANCHOR_DISK_F,
		BMP_ANCHOR_UPGRADE,
		BMP_ANCHOR_UPGRADE_F,
		BMP_ANCHOR_LOGOFF,
		BMP_ANCHOR_LOGOFF_F,
		BMP_ANCHOR_SHUTDOWN,
		BMP_ANCHOR_SHUTDOWN_F,

		BMP_ANCHOR_EXIT,
		BMP_ANCHOR_EXIT_F,
		BMP_ANCHOR_BASIC,
		BMP_ANCHOR_BASIC_F,
		BMP_ANCHOR_SYSTEM,
		BMP_ANCHOR_SYSTEM_F,
		BMP_ANCHOR_DATE_TIME,
		BMP_ANCHOR_DATE_TIME_F,
		BMP_ANCHOR_DST,
		BMP_ANCHOR_DST_F,
		BMP_ANCHOR_LIVE,
		BMP_ANCHOR_LIVE_F,
		BMP_ANCHOR_MAIN_MONITOR,
		BMP_ANCHOR_MAIN_MONITOR_F,
		BMP_ANCHOR_SPOT,
		BMP_ANCHOR_SPOT_F,
		BMP_ANCHOR_MASK,
		BMP_ANCHOR_MASK_F,
		BMP_ANCHOR_RECORD,
		BMP_ANCHOR_RECORD_F,
		BMP_ANCHOR_BITRATE,
		BMP_ANCHOR_BITRATE_F,
		BMP_ANCHOR_TIME,
		BMP_ANCHOR_TIME_F,
		BMP_ANCHOR_STAMP,
		BMP_ANCHOR_STAMP_F,
		BMP_ANCHOR_RECYCLE_RECORD,
		BMP_ANCHOR_RECYCLE_RECORD_F,
		BMP_ANCHOR_SNAP,
		BMP_ANCHOR_SNAP_F,
		BMP_ANCHOR_SCHEDULE,
		BMP_ANCHOR_SCHEDULE_F,
		BMP_ANCHOR_MOTION,
		BMP_ANCHOR_MOTION_F,
		BMP_ANCHOR_SENSOR,
		BMP_ANCHOR_SENSOR_F,
		BMP_ANCHOR_ALARM,
		BMP_ANCHOR_ALARM_F,
		BMP_ANCHOR_VIDEO_LOSS,
		BMP_ANCHOR_VIDEO_LOSS_F,
		BMP_ANCHOR_OTHER_ALARM,
		BMP_ANCHOR_OTHER_ALARM_F,
		BMP_ANCHOR_ALARM_OUT,
		BMP_ANCHOR_ALARM_OUT_F,
		BMP_ANCHOR_ALARM_HANDLING,
		BMP_ANCHOR_ALARM_HANDLING_F,
		BMP_ANCHOR_BUZZER,
		BMP_ANCHOR_BUZZER_F,
		BMP_ANCHOR_NETWORK,
		BMP_ANCHOR_NETWORK_F,
		BMP_ANCHOR_SUB_STREAM,
		BMP_ANCHOR_SUB_STREAM_F,
		BMP_ANCHOR_EMAIL,
		BMP_ANCHOR_EMAIL_F,
		BMP_ANCHOR_FTP,
		BMP_ANCHOR_FTP_F,
		BMP_ANCHOR_NET_SERVER,
		BMP_ANCHOR_NET_SERVER_F,
		BMP_ANCHOR_OTHER_SETTING,
		BMP_ANCHOR_OTHER_SETTING_F,
		BMP_ANCHOR_USER,
		BMP_ANCHOR_USER_F,
		BMP_ANCHOR_PTZ,
		BMP_ANCHOR_PTZ_F,
		BMP_ANCHOR_SERIAL_PORT,
		BMP_ANCHOR_SERIAL_PORT_F,
		BMP_ANCHOR_PTZ_ADVANCED,
		BMP_ANCHOR_PTZ_ADVANCED_F,
		BMP_ANCHOR_ADVANCED,
		BMP_ANCHOR_ADVANCED_F,
		BMP_ANCHOR_RESET,
		BMP_ANCHOR_RESET_F,
		BMP_ANCHOR_IMPORT_EXPORT,
		BMP_ANCHOR_IMPORT_EXPORT_F,
		BMP_ANCHOR_BLACKLIST,
		BMP_ANCHOR_BLACKLIST_F,

		BMP_ANCHOR_INFORMATION,
		BMP_ANCHOR_INFORMATION_F,
		BMP_ANCHOR_EVENT,
		BMP_ANCHOR_EVENT_F,
		BMP_ANCHOR_LOG,
		BMP_ANCHOR_LOG_F,
		BMP_ANCHOR_ONLINE_USERS,
		BMP_ANCHOR_ONLINE_USERS_F,

		BMP_ANCHOR_NET_DEVICE,
		BMP_ANCHOR_NET_DEVICE_F,

		BMP_ANCHOR_ROI,
		BMP_ANCHOR_ROI_F,
		BMP_ANCHOR_CAM_PARA,
		BMP_ANCHOR_CAM_PARA_F,
		
#else
		//图标
		BMP_CONFIG,
		BMP_CONFIG_FOCUS,
		BMP_SEARCH,
		BMP_SEARCH_FOCUS,
		BMP_BACKUP,
		BMP_BACKUP_FOCUS,
		BMP_INFO,
		BMP_INFO_FOCUS,
		BMP_MANUAL_ALARM,
		BMP_MANUAL_ALARM_FOCUS,
		BMP_DISK,
		BMP_DISK_FOCUS,
		BMP_RESOURCES,
		BMP_RESOURCES_FOCUS,
		BMP_DEVICE,
		BMP_DEVICE_FOCUS,
		BMP_LOGOFF,
		BMP_LOGOFF_FOCUS,
		BMP_SHUTDOWN,
		BMP_SHUTDOWN_FOCUS,

		BMP_BASIC_CONFIG,
		BMP_BASIC_CONFIG_FOCUS,
		BMP_LIVE,
		BMP_LIVE_FOCUS,
		BMP_RECORD,
		BMP_RECORD_FOCUS,
		BMP_SCHEDULE,
		BMP_SCHEDULE_FOCUS,
		BMP_ALARM,
		BMP_ALARM_FOCUS,
		BMP_NETWORK,
		BMP_NETWORK_FOCUS,
		BMP_USER,
		BMP_USER_FOCUS,
		BMP_PTZ,
		BMP_PTZ_FOCUS,
		BMP_ADVANCE,
		BMP_ADVANCE_FOCUS,

		BMP_SENSOR,
		BMP_SENSOR_FOCUS,
		BMP_MOTION,
		BMP_MOTION_FOCUS,
		BMP_VIDEO_LOSS,
		BMP_VIDEO_LOSS_FOCUS,
		BMP_OTHER_ALARM,
		BMP_OTHER_ALARM_FOCUS,
		BMP_ALARM_OUT,
		BMP_ALARM_OUT_FOCUS,

		BMP_SYSTEM,
		BMP_SYSTEM_FOCUS,
		BMP_EVENT,
		BMP_EVENT_FOCUS,
		BMP_LOG,
		BMP_LOG_FOCUS,
		BMP_ONLINE_USER,
		BMP_ONLINE_USER_FOCUS,
		BMP_REC_INFO,
		BMP_REC_INFO_FOCUS,
#ifdef __SUPPORT_SNAPD1__
		BMP_PEN,
		BMP_PEN_FOCUS,
#endif
#endif

#ifdef __SUPPORT_SHOW_QRCODE__
		BMP_QRCODE,
		BMP_QRCODE_FOCUS,
#endif
#ifdef __SUPPORT_APP_INFO_QRCODE__
		BMP_APP_INFO_QRCODE,
		BMP_APP_INFO_QRCODE_FOCUS,
#endif
		//位图数目
		BMP_COUNT,

		//以下定义仅为补全,通过编译,在对应代码中并不使用
		BMP_INVALID_BELOW = 0xF000,

#if !defined(__DVR_LOGO__) && !defined(__ENVIRONMENT_WIN32__)
		//logo
		BMP_ICON_LOGO,
		BMP_ICON_LOGO_TRANS,
#endif

#ifndef __DVR_MENU__
		//@弹出菜单 ui_menu
		BMP_MENU_BG,
		BMP_MENU_SEPARATOR,
		BMP_MENU_ITEM_BG_F,
		BMP_MENU_ITEM_ARROW,
		BMP_MENU_ITEM_ARROW_F,
		BMP_MENU_ITEM_SINGLE,
		BMP_MENU_ITEM_SINGLE_F,
		BMP_MENU_ITEM_MULTI,
		BMP_MENU_ITEM_MULTI_F,
		BMP_MENU_ITEM_DWELL,
		BMP_MENU_ITEM_DWELL_F,
		BMP_MENU_ITEM_DWELL_NO,
		BMP_MENU_ITEM_DWELL_NO_F,
		BMP_MENU_ITEM_ZOOM,
		BMP_MENU_ITEM_ZOOM_F,
		BMP_MENU_ITEM_AUDIO,
		BMP_MENU_ITEM_AUDIO_F,
		BMP_MENU_ITEM_AUDIO_NO,
		BMP_MENU_ITEM_AUDIO_NO_F,
		BMP_MENU_ITEM_PTZ,
		BMP_MENU_ITEM_PTZ_F,
		BMP_MENU_ITEM_REC,
		BMP_MENU_ITEM_REC_F,
		BMP_MENU_ITEM_PLAYBACK,
		BMP_MENU_ITEM_PLAYBACK_F,
		BMP_MENU_ITEM_MAIN,
		BMP_MENU_ITEM_MAIN_F,
		BMP_MENU_ITEM_2X2,
		BMP_MENU_ITEM_2X2_F,
		BMP_MENU_ITEM_2X3,
		BMP_MENU_ITEM_2X3_F,
		BMP_MENU_ITEM_1A5,
		BMP_MENU_ITEM_1A5_F,
		BMP_MENU_ITEM_1A7,
		BMP_MENU_ITEM_1A7_F,
		BMP_MENU_ITEM_3X3,
		BMP_MENU_ITEM_3X3_F,
		BMP_MENU_ITEM_1A12,
		BMP_MENU_ITEM_1A12_F,
		BMP_MENU_ITEM_SET_COLOR,
		BMP_MENU_ITEM_SET_COLOR_F,
		BMP_MENU_ITEM_SNAP,
		BMP_MENU_ITEM_SNAP_F,
		BMP_MENU_ITEM_PIP,
		BMP_MENU_ITEM_PIP_F,

		BMP_MENU_MULTI_5X5,
		BMP_MENU_MULTI_5X5_F,
		BMP_MENU_MULTI_6X6,
		BMP_MENU_MULTI_6X6_F,
		BMP_MENU_MULTI_UNREGULAR,
		BMP_MENU_MULTI_UNREGULAR_F,

		BMP_MENU_ITEM_SET_CAM_PARA,
		BMP_MENU_ITEM_SET_CAM_PARA_F,
#else
		//@工具条 ui_toolbar

		BMP_DLG_TOOLBAR,

		BMP_BTN_TOOL_BK,
		BMP_BTN_TOOL_MENU,
		BMP_BTN_TOOL_MENU_F,
		BMP_BTN_TOOL_6X6,
		BMP_BTN_TOOL_6X6_F,
		BMP_BTN_TOOL_5X5,
		BMP_BTN_TOOL_5X5_F,
		BMP_BTN_TOOL_4X4,
		BMP_BTN_TOOL_4X4_F,
		BMP_BTN_TOOL_1A12,
		BMP_BTN_TOOL_1A12_F,
		BMP_BTN_TOOL_3X3,
		BMP_BTN_TOOL_3X3_F,
		BMP_BTN_TOOL_1A7,
		BMP_BTN_TOOL_1A7_F,
		BMP_BTN_TOOL_1A5,
		BMP_BTN_TOOL_1A5_F,
		BMP_BTN_TOOL_2X3,
		BMP_BTN_TOOL_2X3_F,
		BMP_BTN_TOOL_2X2,
		BMP_BTN_TOOL_2X2_F,
		BMP_BTN_TOOL_1X1,
		BMP_BTN_TOOL_1X1_F,
		BMP_BTN_TOOL_TRIANGLE_UP,
		BMP_BTN_TOOL_TRIANGLE_UP_F,
		BMP_BTN_TOOL_TRIANGLE_DOWN,
		BMP_BTN_TOOL_TRIANGLE_DOWN_F,

		BMP_BTN_TOOL_DWELL,
		BMP_BTN_TOOL_DWELL_F,
		BMP_BTN_TOOL_DWELL_NO,
		BMP_BTN_TOOL_DWELL_NO_F,
		BMP_BTN_TOOL_AUDIO,
		BMP_BTN_TOOL_AUDIO_F,
		BMP_BTN_TOOL_AUDIO_MUTE,
		BMP_BTN_TOOL_AUDIO_MUTE_F,
		BMP_BTN_TOOL_PTZ,
		BMP_BTN_TOOL_PTZ_F,
		BMP_BTN_TOOL_REC,
		BMP_BTN_TOOL_REC_F,
		BMP_BTN_TOOL_ARM,
		BMP_BTN_TOOL_ARM_F,
		BMP_BTN_TOOL_PLAY,
		BMP_BTN_TOOL_PLAY_F,
		BMP_BTN_TOOL_ZOOM,
		BMP_BTN_TOOL_ZOOM_F,
		BMP_BTN_TOOL_SET_COLOR,
		BMP_BTN_TOOL_SET_COLOR_F,
		BMP_BTN_TOOL_SNAP,
		BMP_BTN_TOOL_SNAP_F,
		BMP_BTN_TOOL_EDIT,
		BMP_BTN_TOOL_EDIT_F,
		BMP_BTN_TOOL_PIP,
		BMP_BTN_TOOL_PIP_F,
		BMP_BTN_TOOL_WINEDIT,
		BMP_BTN_TOOL_WINEDIT_F,
		BMP_BTN_TOOL_SYSINFO,
		BMP_BTN_TOOL_SYSINFO_F,
		BMP_BTN_TOOL_SET_CAM_PARA,
		BMP_BTN_TOOL_SET_CAM_PARA_F,
#endif

#ifndef __DVR_ANCHOR__
		//Anchor方式相关
		BMP_ANCHOR_BK,
		BMP_ANCHOR_BK_F,
		BMP_ANCHOR_CONFIG,
		BMP_ANCHOR_CONFIG_F,
		BMP_ANCHOR_SEARCH,
		BMP_ANCHOR_SEARCH_F,
		BMP_ANCHOR_BACKUP,
		BMP_ANCHOR_BACKUP_F,
		BMP_ANCHOR_INFO,
		BMP_ANCHOR_INFO_F,
		BMP_ANCHOR_MANUAL,
		BMP_ANCHOR_MANUAL_F,
		BMP_ANCHOR_DISK,
		BMP_ANCHOR_DISK_F,
		BMP_ANCHOR_UPGRADE,
		BMP_ANCHOR_UPGRADE_F,
		BMP_ANCHOR_LOGOFF,
		BMP_ANCHOR_LOGOFF_F,
		BMP_ANCHOR_SHUTDOWN,
		BMP_ANCHOR_SHUTDOWN_F,

		BMP_ANCHOR_EXIT,
		BMP_ANCHOR_EXIT_F,
		BMP_ANCHOR_BASIC,
		BMP_ANCHOR_BASIC_F,
		BMP_ANCHOR_SYSTEM,
		BMP_ANCHOR_SYSTEM_F,
		BMP_ANCHOR_DATE_TIME,
		BMP_ANCHOR_DATE_TIME_F,
		BMP_ANCHOR_DST,
		BMP_ANCHOR_DST_F,
		BMP_ANCHOR_LIVE,
		BMP_ANCHOR_LIVE_F,
		BMP_ANCHOR_MAIN_MONITOR,
		BMP_ANCHOR_MAIN_MONITOR_F,
		BMP_ANCHOR_SPOT,
		BMP_ANCHOR_SPOT_F,
		BMP_ANCHOR_MASK,
		BMP_ANCHOR_MASK_F,
		BMP_ANCHOR_RECORD,
		BMP_ANCHOR_RECORD_F,
		BMP_ANCHOR_BITRATE,
		BMP_ANCHOR_BITRATE_F,
		BMP_ANCHOR_TIME,
		BMP_ANCHOR_TIME_F,
		BMP_ANCHOR_STAMP,
		BMP_ANCHOR_STAMP_F,
		BMP_ANCHOR_RECYCLE_RECORD,
		BMP_ANCHOR_RECYCLE_RECORD_F,
		BMP_ANCHOR_SNAP,
		BMP_ANCHOR_SNAP_F,
		BMP_ANCHOR_SCHEDULE,
		BMP_ANCHOR_SCHEDULE_F,
		BMP_ANCHOR_MOTION,
		BMP_ANCHOR_MOTION_F,
		BMP_ANCHOR_SENSOR,
		BMP_ANCHOR_SENSOR_F,
		BMP_ANCHOR_ALARM,
		BMP_ANCHOR_ALARM_F,
		BMP_ANCHOR_VIDEO_LOSS,
		BMP_ANCHOR_VIDEO_LOSS_F,
		BMP_ANCHOR_OTHER_ALARM,
		BMP_ANCHOR_OTHER_ALARM_F,
		BMP_ANCHOR_ALARM_OUT,
		BMP_ANCHOR_ALARM_OUT_F,
		BMP_ANCHOR_ALARM_HANDLING,
		BMP_ANCHOR_ALARM_HANDLING_F,
		BMP_ANCHOR_BUZZER,
		BMP_ANCHOR_BUZZER_F,
		BMP_ANCHOR_NETWORK,
		BMP_ANCHOR_NETWORK_F,
		BMP_ANCHOR_SUB_STREAM,
		BMP_ANCHOR_SUB_STREAM_F,
		BMP_ANCHOR_EMAIL,
		BMP_ANCHOR_EMAIL_F,
		BMP_ANCHOR_FTP,
		BMP_ANCHOR_FTP_F,
		BMP_ANCHOR_NET_SERVER,
		BMP_ANCHOR_NET_SERVER_F,
		BMP_ANCHOR_OTHER_SETTING,
		BMP_ANCHOR_OTHER_SETTING_F,
		BMP_ANCHOR_USER,
		BMP_ANCHOR_USER_F,
		BMP_ANCHOR_PTZ,
		BMP_ANCHOR_PTZ_F,
		BMP_ANCHOR_SERIAL_PORT,
		BMP_ANCHOR_SERIAL_PORT_F,
		BMP_ANCHOR_PTZ_ADVANCED,
		BMP_ANCHOR_PTZ_ADVANCED_F,
		BMP_ANCHOR_ADVANCED,
		BMP_ANCHOR_ADVANCED_F,
		BMP_ANCHOR_RESET,
		BMP_ANCHOR_RESET_F,
		BMP_ANCHOR_IMPORT_EXPORT,
		BMP_ANCHOR_IMPORT_EXPORT_F,
		BMP_ANCHOR_BLACKLIST,
		BMP_ANCHOR_BLACKLIST_F,

		BMP_ANCHOR_INFORMATION,
		BMP_ANCHOR_INFORMATION_F,
		BMP_ANCHOR_EVENT,
		BMP_ANCHOR_EVENT_F,
		BMP_ANCHOR_LOG,
		BMP_ANCHOR_LOG_F,
		BMP_ANCHOR_ONLINE_USERS,
		BMP_ANCHOR_ONLINE_USERS_F,
		BMP_ANCHOR_NET_DEVICE,
		BMP_ANCHOR_NET_DEVICE_F,
		BMP_ANCHOR_ROI,
		BMP_ANCHOR_ROI_F,
		BMP_ANCHOR_CAM_PARA,
		BMP_ANCHOR_CAM_PARA_F,
		
#else
		//图标
		BMP_CONFIG,
		BMP_CONFIG_FOCUS,
		BMP_SEARCH,
		BMP_SEARCH_FOCUS,
		BMP_BACKUP,
		BMP_BACKUP_FOCUS,
		BMP_INFO,
		BMP_INFO_FOCUS,
		BMP_MANUAL_ALARM,
		BMP_MANUAL_ALARM_FOCUS,
		BMP_DISK,
		BMP_DISK_FOCUS,
		BMP_RESOURCES,
		BMP_RESOURCES_FOCUS,
		BMP_DEVICE,
		BMP_DEVICE_FOCUS,
		BMP_LOGOFF,
		BMP_LOGOFF_FOCUS,
		BMP_SHUTDOWN,
		BMP_SHUTDOWN_FOCUS,

		BMP_BASIC_CONFIG,
		BMP_BASIC_CONFIG_FOCUS,
		BMP_LIVE,
		BMP_LIVE_FOCUS,
		BMP_RECORD,
		BMP_RECORD_FOCUS,
		BMP_SCHEDULE,
		BMP_SCHEDULE_FOCUS,
		BMP_ALARM,
		BMP_ALARM_FOCUS,
		BMP_NETWORK,
		BMP_NETWORK_FOCUS,
		BMP_USER,
		BMP_USER_FOCUS,
		BMP_PTZ,
		BMP_PTZ_FOCUS,
		BMP_ADVANCE,
		BMP_ADVANCE_FOCUS,

		BMP_SENSOR,
		BMP_SENSOR_FOCUS,
		BMP_MOTION,
		BMP_MOTION_FOCUS,
		BMP_VIDEO_LOSS,
		BMP_VIDEO_LOSS_FOCUS,
		BMP_OTHER_ALARM,
		BMP_OTHER_ALARM_FOCUS,
		BMP_ALARM_OUT,
		BMP_ALARM_OUT_FOCUS,

		BMP_SYSTEM,
		BMP_SYSTEM_FOCUS,
		BMP_EVENT,
		BMP_EVENT_FOCUS,
		BMP_LOG,
		BMP_LOG_FOCUS,
		BMP_ONLINE_USER,
		BMP_ONLINE_USER_FOCUS,
		BMP_REC_INFO,
		BMP_REC_INFO_FOCUS,

#ifdef  __SUPPORT_SNAPD1__
		BMP_PEN,
		BMP_PEN_FOCUS,
#endif
#endif

		BMP_INVALID = -1//无效
	};

	typedef std::map<BITMAP_ID, std::string> BITMAP_FILE;

	void MapBitmapFile(BITMAP_FILE& bitmapFile);
}

#endif

