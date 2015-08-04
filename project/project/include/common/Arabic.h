/***********************************************************************
** Copyright (C) Tongwei Video Technology Co.,Ltd. All rights reserved.
** Author       : 
** Date         : 2011-08-12
** Name         : Arabic.h
** Version      : 1.0
** Description  : �������� �Ű����
** Modify Record:
***********************************************************************/
#ifndef _ARABIC_H_
#define _ARABIC_H_


//[0x0620 ~ 0x0652]
const unsigned long ARABIC_MAP[][4] = /* alone, last, first, middle */
{
	{ 0x0000, 0x0000, 0x0000, 0x0000},	/* 0x0620 δʹ�� */
	{ 0x0621, 0x0621, 0x0621, 0x0621},	/* 0x0621 ��ĸ, �������� */
	{ 0xFE81, 0xFE82, 0x0622, 0x0622},	/* 0x0622 ��ĸ, ����Madda����ĸAlef */
	{ 0xFE83, 0xFE84, 0x0623, 0x0623},	/* 0x0623 ��ĸ, ���Ϻ�����������ĸAlef */
	{ 0xFE85, 0xFE86, 0x0624, 0x0624},	/* 0x0624 ��ĸ, ���Ϻ�����������ĸWaw */
	{ 0xFE87, 0xFE88, 0x0625, 0x0625},	/* 0x0625 ��ĸ, ���º�����������ĸAlef */
	{ 0xFE89, 0xFE8A, 0xFE8B, 0xFE8C},	/* 0x0626 ��ĸ, ���Ϻ�����������ĸYeh */
	{ 0xFE8D, 0xFE8E, 0x0627, 0x0627},	/* 0x0627 ��ĸ, Alef */
	{ 0xFE8F, 0xFE90, 0xFE91, 0xFE92},	/* 0x0628 ��ĸ, Beh */
	{ 0xFE93, 0xFE94, 0x0629, 0x0629},	/* 0x0629 ��ĸ, Teh Marbuta */ 
	{ 0xFE95, 0xFE96, 0xFE97, 0xFE98},	/* 0x062A ��ĸ, Teh */ 
	{ 0xFE99, 0xFE9A, 0xFE9B, 0xFE9C},	/* 0x062B ��ĸ, Theh */ 
	{ 0xFE9D, 0xFE9E, 0xFE9F, 0xFEA0},	/* 0x062C ��ĸ, Jeem */ 
	{ 0xFEA1, 0xFEA2, 0xFEA3, 0xFEA4},	/* 0x062D ��ĸ, Hah */ 
	{ 0xFEA5, 0xFEA6, 0xFEA7, 0xFEA8},	/* 0x062E ��ĸ, Khah */ 
	{ 0xFEA9, 0xFEAA, 0x062F, 0x062F},	/* 0x062F ��ĸ, Dal */ 
	{ 0xFEAB, 0xFEAC, 0x0630, 0x0630},	/* 0x0630 ��ĸ, Thal */ 
	{ 0xFEAD, 0xFEAE, 0x0631, 0x0631},	/* 0x0631 ��ĸ, Reh */ 
	{ 0xFEAF, 0xFEB0, 0x0632, 0x0632},	/* 0x0632 ��ĸ, Zain */ 
	{ 0xFEB1, 0xFEB2, 0xFEB3, 0xFEB4},	/* 0x0633 ��ĸ, Seen */ 
	{ 0xFEB5, 0xFEB6, 0xFEB7, 0xFEB8},	/* 0x0634 ��ĸ, Sheen */ 
	{ 0xFEB9, 0xFEBA, 0xFEBB, 0xFEBC},	/* 0x0635 ��ĸ, Sad */ 
	{ 0xFEBD, 0xFEBE, 0xFEBF, 0xFEC0},	/* 0x0636 ��ĸ, Dad */ 
	{ 0xFEC1, 0xFEC2, 0xFEC3, 0xFEC4},	/* 0x0637 ��ĸ, Tah */ 
	{ 0xFEC5, 0xFEC6, 0xFEC7, 0xFEC8},	/* 0x0638 ��ĸ, Zah */ 
	{ 0xFEC9, 0xFECA, 0xFECB, 0xFECC},	/* 0x0639 ��ĸ, Ain */ 
	{ 0xFECD, 0xFECE, 0xFECF, 0xFED0},	/* 0x063A ��ĸ, Ghain */ 
	{ 0x0000, 0x0000, 0x0000, 0x0000},	/* 0x063B δʹ�� */ 
	{ 0x0000, 0x0000, 0x0000, 0x0000},	/* 0x063C δʹ�� */ 
	{ 0x0000, 0x0000, 0x0000, 0x0000},	/* 0x063D δʹ�� */ 
	{ 0x0000, 0x0000, 0x0000, 0x0000},	/* 0x063E δʹ�� */ 
	{ 0x0000, 0x0000, 0x0000, 0x0000},	/* 0x063F δʹ�� */ 
	{ 0x0640, 0x0640, 0x0640, 0x0640},	/* 0x0640 ����, Tatweel */ 
	{ 0xFED1, 0xFED2, 0xFED3, 0xFED4},	/* 0x0641 ��ĸ, Feh */ 
	{ 0xFED5, 0xFED6, 0xFED7, 0xFED8},	/* 0x0642 ��ĸ, Qaf */ 
	{ 0xFED9, 0xFEDA, 0xFEDB, 0xFEDC},	/* 0x0643 ��ĸ, Kaf */ 
	{ 0xFEDD, 0xFEDE, 0xFEDF, 0xFEE0},	/* 0x0644 ��ĸ, Lam */ 
	{ 0xFEE1, 0xFEE2, 0xFEE3, 0xFEE4},	/* 0x0645 ��ĸ, Meem */ 
	{ 0xFEE5, 0xFEE6, 0xFEE7, 0xFEE8},	/* 0x0646 ��ĸ, Noon */ 
	{ 0xFEE9, 0xFEEA, 0xFEEB, 0xFEEC},	/* 0x0647 ��ĸ, Heh */ 
	{ 0xFEED, 0xFEEE, 0x0648, 0x0648},	/* 0x0648 ��ĸ, Waw */ 
	{ 0xFEEF, 0xFEF0, 0x0649, 0x0649},	/* 0x0649 ��ĸ, Alef Maksura */ 
	{ 0xFEF1, 0xFEF2, 0xFEF3, 0xFEF4},	/* 0x064A ��ĸ, Yeh */
	{ 0x064B, 0x064B, 0x064B, 0x064B},	/* 0x064B ����, Fathatan */
	{ 0x064C, 0x064C, 0x064C, 0x064C},	/* 0x064C ����, Dammatan */
	{ 0x064D, 0x064D, 0x064D, 0x064D},	/* 0x064D ����, Kasratan */
	{ 0x064E, 0x064E, 0x064E, 0x064E},	/* 0x064E ����, Fatha */
	{ 0x064F, 0x064F, 0x064F, 0x064F},	/* 0x064F ����, Damma */
	{ 0x0650, 0x0650, 0x0650, 0x0650},	/* 0x0650 ����, Kasra */
	{ 0x0651, 0x0651, 0x0651, 0x0651},	/* 0x0651 ����, Shadda */
	{ 0x0652, 0x0652, 0x0652, 0x0652}	/* 0x0652 ����, Sukun */

	//miss
	//0xFC5E, 0xFC5F, 0xFC60, 0xFC61, 0xFC62,
	//0xFDF2, 0xFEF5, 0xFEF6, 0xFEF7, 0xFEF8,
	//0xFEF9, 0xFEFA, 0xFEFB, 0xFEFC, 
};

const unsigned long ARABIC_MAP_EX[][5] = /* alone, last, first, middle, char */
{
	{ 0xFB56, 0xFB57, 0xFB58, 0xFB59, 0x067E},	/* 0x067E ��ĸ, Peh */
	{ 0xFB7A, 0xFB7B, 0xFB7C, 0xFB7D, 0x0686},	/* 0x0686 ��ĸ, Tcheh */
	{ 0xFB8A, 0xFB8B, 0x0698, 0x0698, 0x0698},	/* 0x0698 ��ĸ, Jeh */
	{ 0xFB8E, 0xFB8F, 0xFB90, 0xFB91, 0x06A9},	/* 0x06A9 ��ĸ, Keheh */
	{ 0xFB92, 0xFB93, 0xFB94, 0xFB95, 0x06AF},	/* 0x06AF ��ĸ, Gaf */
	{ 0xFBA4, 0xFBA5, 0x06C0, 0x06C0, 0x06C0},	/* 0x06C0 ��ĸ, ����Yeh����ĸHeh */
	{ 0xFBFC, 0xFBFD, 0xFBFE, 0xFBFF, 0x06CC}	/* 0x06CC ��ĸ, ��˹��Yeh */
};

//ǰһ���ַ��Ƿ��ڼ���SET1�С�����ڣ�����������ǰ���
const unsigned long ARABIC_SET1[] = 
{
	0x0626, 0x0628, 0x062A, 0x062B, 0x062C, 0x062D, 0x062E, 0x0633,
	0x0634, 0x0635, 0x0636, 0x0637, 0x0638, 0x0639, 0x063A, 0x0641,
	0x0642, 0x0643, 0x0644, 0x0645, 0x0646, 0x0647, 0x064A,	0x067E,
	0x0686, 0x06A9, 0x06AF, 0x06CC
};

//��һ���ַ��Ƿ��ڼ���SET2�С�����ڣ����������Ӻ����
const unsigned long ARABIC_SET2[] =
{
	0x0626, 0x0628, 0x062A, 0x062B, 0x062C, 0x062D, 0x062E, 0x0633,
	0x0634, 0x0635, 0x0636, 0x0637, 0x0638, 0x0639, 0x063A, 0x0641,
	0x0642, 0x0643, 0x0644, 0x0645, 0x0646, 0x0647, 0x064A,	0x067E,
	0x0686, 0x06A9, 0x06AF, 0x06CC,
	0x0622, 0x0623, 0x0624, 0x0625, 0x0627, 0x0629, 0x062F, 0x0630,
	0x0631, 0x0632, 0x0648, 0x0649, 0x0698, 0x06C0
};

// ���ʹ��� 0x644 + [0x622,0x623,0x625,0x627]
const unsigned long ARABIC_JOIN[][2]=
{
	{0xFEF5,0xFEF6},
	{0xFEF7,0xFEF8},
	{0xFEF9,0xFEFA},
	{0xFEFB,0xFEFC}
};


//���������Է�Χ[0x0600 ~ 0x06FF]
inline unsigned long ArabicCharRule(unsigned long ucs_pre_code, unsigned long ucs_cur_code, unsigned long ucs_next_code, bool& bIgnore)
{
	bIgnore = false;

	//���ʹ��� --- ARABIC_JOIN
	//���ַ�����0x644��ͷ,���������0x622,0x623,0x625,0x627,
	//���������ȡ������ַ�����ARABIC_JOIN�� 0 �� 1,
	//���0x644ǰһ���ַ����ڼ���1(ͬ����ļ���1)�м�,��ôȡ����1,����ȡ����0
	if(ucs_cur_code == 0x644)
	{
		unsigned long join_next[4] = {0x622, 0x623, 0x625, 0x627};

		for(long i = 0; i < 4; i++)
		{
			if(ucs_next_code == join_next[i])
			{
				for(int k = 0; k < sizeof(ARABIC_SET1) / sizeof(ARABIC_SET1[0]); k++)
				{
					if(ARABIC_SET1[k] == ucs_pre_code)
					{
						bIgnore = true;
						return ARABIC_JOIN[i][1];
					}
				}

				bIgnore = true;
				return ARABIC_JOIN[i][0];
			}
		}
	}


	//���ι���  ---  ARABIC_MAP
	//���Դʷ�����, �ֳ�alone, last, first, middle,
	//�������ж��Ƿ��Ǵʵ�ǰ��,����,�м�򵥶�һ����,���б���
	const unsigned long* pArbic = NULL;

	if((ucs_cur_code >= 0x0620) && (ucs_cur_code <= 0x0652))
	{
		int index = ucs_cur_code - 0x0620;

		pArbic = reinterpret_cast<const unsigned long*>(ARABIC_MAP) + index * 4;
	}
	else
	{
		for(long i = 0; i < sizeof(ARABIC_MAP_EX) / sizeof(ARABIC_MAP_EX[0]); i++)
		{
			if(ARABIC_MAP_EX[i][4] == ucs_cur_code)
			{
				pArbic = reinterpret_cast<const unsigned long*>(ARABIC_MAP_EX) + i * 5;
			}
		}
	}

	if(pArbic != NULL)
	{
		bool bInSet1 = false, bInSet2 = false;

		//�ж��Ƿ�������ǰ���
		for(int i = 0; i < sizeof(ARABIC_SET1) / sizeof(ARABIC_SET1[0]); i++)
		{
			if(ARABIC_SET1[i] == ucs_pre_code)
			{
				bInSet1 = true;
				break;
			}
		}

		//�ж��Ƿ����Ӻ����
		for(int i = 0; i < sizeof(ARABIC_SET2) / sizeof(ARABIC_SET2[0]); i++)
		{
			if(ARABIC_SET2[i] == ucs_next_code)
			{
				bInSet2 = true;
				break;
			}
		}

		if(bInSet1 && bInSet2)
		{
			//middle
			return pArbic[3];
		}
		else if(!bInSet1 && bInSet2)
		{
			//first
			return pArbic[2];
		}
		else if(!bInSet1 && !bInSet2)
		{
			//alone
			return pArbic[0];
		}
		else if(bInSet1 && !bInSet2)
		{
			//last
			return pArbic[1];
		}
	}
	
	return ucs_cur_code;
}

#endif

//end