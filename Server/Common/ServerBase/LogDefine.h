#ifndef _LOGDEFINE_H_
#define _LOGDEFINE_H_
#include "..\..\Common\Type.h"
#include "..\..\Common\DB_Struct.h"

//��Ʒ��������
enum	ITEM_OP_TYPE
{
	ITEM_OP_UNKNOW					=	0,		//δ֪��Ʒʰȡ
	ITEM_CREATE_FROM_MONSTER		=	10,		//������䣬���ɵ������
	ITEM_CREATE_SCRIPT_TO_BOX		=	20,		//�ɽű��������������һ��������������
	ITEM_PICK_FROM_MONSTER			=	30,		//������Ʒʰȡ,ָ����ɫ���ϵĴ���
	ITEM_PICK_FROM_GROWPOINT		=	31,		//�ɼ�ʰȡ,ָ����ɫ���ϵĴ���
	ITEM_CREATE_FROM_SCRIPT			=	40,		//�ű�������Ʒ
	ITEM_CREATE_FROM_ABILITY_SCRIPT	=	50,		//�������ؽű�����
	ITEM_CREATE_GM					=	60,		//GM����
	ITEM_CREATE_ABILITY_COMPOUD		=	70,		//��ʯ�ϳ�
	ITEM_CREATE_REMOVE_GEM			=	80,		//��ʯж�ص���������
	ITEM_CREATE_FROM_SHOP			=   90,		//�̵�Ĵ���
	ITEM_CREATE_TILED				=	100,	//��������ԭ������Ʒ�ϲ�
	ITEM_CREATE_SPLIT				=   110,	//�з���Ʒʱ��Ʒ�Ĵ���
	ITEM_EXCHANGE_TOOTHER			=   210,	//��Ʒ����,
	ITEM_STALL_BOX_EXCHANGE			=	211,	//̯λ����
	ITEM_PLAYERSHOP_EXCHANGE		=	212,	//����̵�
	ITEM_PLAYERSHOP_UP				=	213,	//����̵��ϼ�
	ITEM_PLAYERSHOP_DOWN			=	214,	//����̵��¼�
	ITEM_SPLIT_BAG_DEST				=	220,	//��Ʒ�������Ŀ��
	ITEM_SPLIT_BAG_SRC				=	221,	//��Ʒ�������Դͷ
	ITEM_SPLIT_BANK_DEST			=	222,	//���в��
	ITEM_SPLIT_BANK_SRC				=	223,	//���в��
	ITEM_TILED_BAG_DEST				=	224,	//������Ʒ�ϲ�Ŀ��
	ITEM_TILED_BAG_SRC				=	225,	//������Ʒ�ϲ�Դͷ
	ITEM_TILED_BANK					=	226,	//������Ʒ�ϲ�


	ITEM_REPAIR						=	310,	//��Ʒ����,
	ITEM_USEGEM_LOST				=	410,	//��ʯ�ϳɶ�ʧ
	ITEM_DISCARD					=	411,	//�����������
	ITEM_GEM_COMPOUND_LOST			=	412,	//��ʯ�ϳɵ���Ʒ����
	ITEM_ABILITY_COMPOUND_LOST		=	413,	//�������Ʒ����
	ITEM_SCRIPT_DELETE				=	414,	//�ӽű�ɾ����Ʒ
	ITEM_CHANGE_HAIRMODEL_LOST		=	415,	//�ı䷢������
	ITEM_DIE_LOST					=	416,	//�����ͷ�
	ITEM_INLAY_LOST					=	417,	//��Ʒ��Ƕ��ʧ
	ITEM_MACHINE_LOST				=	418,	//��е������ʧ
	ITEM_DISCARD_EQUIP				=	419,	//�������������װ���ϵ���Ʒ
	ITEM_DISCARD_BANK				=	420,	//���������������װ��
	ITEM_USE						=	421,	//�������ʹ��
	ITEM_USE_IDENT_LOST				=	425,	//����ʹ������
	ITEM_BOX_RECYCLE				=	500,	//ItemBox����
	
};

//Ǯ�Ҳ�������
enum	MONEY_OP_TYPE
{
	MONEY_OP_UNKNOW						=	0,		//δ֪
	MONEY_BANK_SAVE						=	10,		//���д�
	MONEY_BANK_WITHDRAW					=	20,		//����ȡ
	MONEY_BANK_SAVERMB					=	21,		//
	MONEY_BANK_WITHDRAWRMB				=	22,		//
	MONEY_EXCHANGE_INCOME				=	30,		//���ҽ�������
	MONEY_EXCHANGE_OUTCOME				=	40,		//���ҽ���֧��
	MONEY_EXCHANGE_STALL_INCOME			=	50,		//����ͨ��̯λ��������
	MONEY_EXCHANGE_STALL_OUTCOME		=	60,		//����ͨ��̯λ����֧��
	MONEY_EXCHANGE_STALL_TAX			=	61,		//����ͨ��̯λ˰��֧��
	MONEY_EXCHANGE_PLAYERSHOP_OUTCOME	=	80,		//����ͨ������̵꽻�׻���֧��,Ǯ������̵�
	MONEY_BUY_PLAYERSHOP_OUTCOME		=	81,		//����ͨ����������̵�֧��
	MONEY_CREATE_PLAYERSHOP_OUTCOME		=	82,		//����ͨ����������̵�֧��
	MONEY_PLAYERSHOP_SAVE				=	90,		//����̵��
	MONEY_PLAYERSHOP_WITHDRAW			=	100,	//����̵�ȡ
	MONEY_SHOP_COST						=	110,	//�̵깺��֧��
	MONEY_SHOP_SELL						=	111,	//�̵��������
	MONEY_SHOP_REPAIR					=	120,	//�̵�����֧��
	MONEY_LEARN_ABILITY_COST			=	121,	//ѧϰ�����֧��	
	MONEY_LEARN_XINFA_COST				=	122,	//ѧϰ�����ķ�֧��	
	MONEY_SCRIPT_COST					=	130,	//�ű����ý�Ǯ����
	MONEY_SCRIPT_INCOME					=	131,	//�ű����ý�Ǯ����
	MONEY_DIE_COST						=	132,	//������Ǯ�ͷ�
	MONEY_PET_COST						=	133,	//�����Ǯ����
	MONEY_GM_MODIFY						=	200,	//GM �޸�
	MONEY_SHOP_RMB_COST					=	300,	//Ԫ������


};
//�����������
enum	PET_OP_TYPE
{
	PET_OP_UNKNOW				=	0,		//����δ֪����
	PET_OP_CATCH				=	10,		//���ﲶ׽
	PET_OP_SCRIPT_CREATE		=	11,		//�ű���������
	PET_OP_SCRIPT_DELETE		=	12,		//�ű�ɾ������
	PET_OP_GENERA				=	20,		//���ﷱֳ
	PET_OP_EXCHANGE_OTHER		=	30,		//���ｻ�׻��
	PET_OP_STALL_EXCHANGE_GET	=	40,//��̯���׻��
	PET_OP_PLAYERSHOP_EXCHANGE_GET	=	50,		//����̵꽻�׻��
	PET_OP_PLAYERSHOP_UP		=	51,		//����̵��ϼ�
	PET_OP_PLAYERSHOP_DOWN		=	52,		//����̵��¼�
	PET_OP_GM_CREATE			=	60,		//GM �޸�����
	PET_OP_GM_LOST				=	61,		//GM �޸�����
};

//���ܲ�������
enum	SKILL_OP_TYPE
{
	SKILL_OP_UNKNOW						=	0,		//δ֪���ܲ���
	SKILL_OP_SCRIPT_STUDY				=	10,		//����ѧϰ
	SKILL_OP_LEVELUP					=	20,		//��������
	SKILL_OP_SCRIPT_ABANDON				=	30,		//���ܷ���
	SKILL_OP_SCRIPT_CHANGEMENPAI		=	31,		//�ű�����ChangeMenpai
	SKILL_OP_GM_MODIFY					=	40,		//ͨ��GM���� ѧϰ
	
};

//�ķ���������
//enum	XINFA_OP_TYPE
//{
//	XINFA_OP_UNKNOW						=	0,		//δ֪���ܲ���
//	XINFA_OP_SCRIPT_STUDY				=	10,		//�ķ�ѧϰ
//	XINFA_OP_LEVELUP					=	20,		//�ķ�����
//	XINFA_OP_SCRIPT_ABANDON				=	30,		//�ķ�����
//	XINFA_OP_SCRIPT_CHANGEMENPAI		=	31,		//�ű�����ChangeMenpai
//	XINFA_OP_GM_MODIFY					=	40,		//ͨ��GM���� ѧϰ
//	XINFA_OP_GM_MODIFY_ALL				=	41,		//ͨ��GM����ѧϰ����
//	
//};

//�ķ���������
enum	ABILITY_OP_TYPE
{
	ABILITY_OP_UNKNOW						=	0,		//δ֪���ܲ���
	ABILITY_OP_SCRIPT_STUDY					=	10,		//�����ѧϰ
	ABILITY_OP_LEVELUP						=	20,		//���������
	ABILITY_OP_SCRIPT_ABANDON				=	30,		//����ܷ���
	ABILITY_OP_GM_MODIFY					=	40,		//ͨ��GM���� ѧϰ
	ABILITY_OP_GM_MODIFY_ALL				=	41,		//ͨ��GM����ѧϰ����

};

//�����������
enum	MISSION_OP_TYPE
{
	MISSION_OP_UNKNOW						=	0,	//δ֪�������
	MISSION_OP_ADDMISSION					=	10,	//��������
	MISSION_OP_DELMISSION					=	20,	//ɾ�������п�������ɺ�ɾ����
	MISSION_OP_PARAM						=	30,	//��������仯
	MISSION_OP_DONEFLAG						=	40,	//������ɱ�־�仯
	MISSION_OP_DATA							=	50, //����ȫ�����ݱ仯
};


//Log��ʽ
/*
 *		IOL:World��,Server��,��Ʒ���,��ɫGUID,�Է�GUID,��������,��󱳰�λ��,������,
		���NPC,XPOS,ZPOS,����̵��(��������֮����-1),�;öȣ���Ƕ�׸���
		��������1������1��������������4������4
 */
static CHAR*	g_ItemLogFormat =
				"IOL:%d,%d,%d,%d,%d,%X,%X,%d,%d,%d,%d,%d,%.2f,%.2f,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u";

struct ITEM_LOG_PARAM
{
	_ITEM_GUID		ItemGuid;									//��Ʒ���
	UINT			ItemType;									//��Ʒȫ�ֱ��
	GUID_t			CharGUID;									//������ɫ,��Ʒ������
	GUID_t			TargetGUID;									//Ŀ���ɫ
	ITEM_OP_TYPE	OpType;										//��������
	ITEM_OP_TYPE	SecOpType;									//ת�����
	BYTE			BagPos;										//����λ��
	BYTE			Count;										//�仯����
	SceneID_t		SceneID;									//�������
	INT				NpcType;									//npc ����,����ʱ���������
	FLOAT			XPos;										//�¼�����λ��
	FLOAT			ZPos;										
	INT				ShopGUID;									//����̵��
	BYTE			GemMax;			    						//���ʯ����(��װ����Ҫ)
	_ITEM_ATTR		ItemAttr[MAX_BLUE_ITEM_EXT_ATTR];			//��ɫװ������

	ITEM_LOG_PARAM()
	{
			CleanUp();
	}

	VOID	CleanUp()
	{
		CharGUID	= -1;
		TargetGUID  = -1;
		OpType		= ITEM_OP_UNKNOW;
		SecOpType   = ITEM_OP_UNKNOW;
		BagPos		= -1;
		Count		=  1;
		SceneID		= -1;
		NpcType		= -1;
		XPos		= 0.0f;
		ZPos		= 0.0f;
		ShopGUID	=-1;
		GemMax		= 0;
		for(INT i=0;i<MAX_BLUE_ITEM_EXT_ATTR;i++)
			ItemAttr[i].CleanUp();
	}

	
};

VOID		SaveItemLog(ITEM_LOG_PARAM* pLogParam);

//Log ��ʽ
/*
*
MOL:�����ɫ�������ɫ���������ͣ�����������������xλ��,zλ��
*/

static CHAR*	g_MoneyLogFormat = "MOL:%X,%X,%d,%d,%d,%.2f,%.2f";

struct  MONEY_LOG_PARAM
{
	GUID_t			CharGUID;									//������ɫ,money������
	GUID_t			TargetGUID;									//Ŀ���ɫ
	MONEY_OP_TYPE	OPType;										//��������
	INT				Count;										//����
	SceneID_t		SceneID;									//�������
	FLOAT			XPos;										//�¼�����λ��
	FLOAT			ZPos;

	MONEY_LOG_PARAM()
	{

	}

	VOID	CleanUp()
	{
		CharGUID	= INVALID_ID;									
		TargetGUID	= INVALID_ID;									
		OPType		= MONEY_OP_UNKNOW;										
		Count		=	0;										
		SceneID		=	-1;									
		XPos		=	0.0f;										
		ZPos		=	0.0f;	
	}
};

VOID		SaveMoneyLog(MONEY_LOG_PARAM* pLogParam);

/*
*	POL:�����ɫ�������ɫ���������ͣ�������xλ��,zλ��	,������
*/
static CHAR*	g_PetLogFormat = "POL:%X,%X,%d,%d,%.2f,%.2f,%u,%u,%d";
struct  PET_LOG_PARAM
{
	GUID_t			CharGUID;									//������ɫ,Pet������
	GUID_t			TargetGUID;									//Ŀ���ɫ
	PET_OP_TYPE		OPType;										//��������
	SceneID_t		SceneID;									//�������
	FLOAT			XPos;										//�¼�����λ��
	FLOAT			ZPos;
	PET_GUID_t		PetGUID;									//����GUID
	INT				DataID;										//��������
	
	PET_LOG_PARAM()
	{
		CleanUp();
	}

	VOID	CleanUp()
	{
		CharGUID	= INVALID_ID;									
		TargetGUID	= INVALID_ID;									
		OPType		= PET_OP_UNKNOW;										
		SceneID		=	-1;									
		XPos		=	0.0f;										
		ZPos		=	0.0f;
		PetGUID.m_uHighSection = 0;
		PetGUID.m_uLowSection  = 0;
		DataID		=	-1;
	}
};

VOID		SavePetLog(PET_LOG_PARAM* pLogParam);



/*
*	SOL:�����ɫ���������ͣ�������xλ��,zλ��,���ܱ��
*/
static CHAR*	g_SkillLogFormat = 
"SOL:%X,%d,%d,%.2f,%.2f,%u,%d,%d";

struct SKILL_LOG_PARAM
{
	GUID_t			CharGUID;									//������ɫ,Skill������
	SKILL_OP_TYPE	OPType;										//��������
	SceneID_t		SceneID;									//�������
	FLOAT			XPos;										//�¼�����λ��
	FLOAT			ZPos;
	SkillID_t		SkillID;									//���ܺ�
	INT				Level;										//����
	INT				Count;										//����
	SKILL_LOG_PARAM()
	{
		CleanUp();
	}

	VOID	CleanUp()
	{
		CharGUID	= INVALID_ID;									
		OPType		= SKILL_OP_UNKNOW;										
		SceneID		=	-1;									
		XPos		=	0.0f;										
		ZPos		=	0.0f;
		SkillID		=	-1;
		Level		=	-1;
		Count		=	0;
	}
};

VOID	SaveSkillLog(SKILL_LOG_PARAM* pLogParam);


/*
*	XOL:�����ɫ���������ͣ�������xλ��,zλ��,���ܱ��
*/
//static CHAR*	g_XinFaLogFormat = 
//"XOL:%X,%d,%d,%.2f,%.2f,%u,%d,%d";
//
//struct XINFA_LOG_PARAM
//{
//	GUID_t			CharGUID;									//������ɫ,Skill������
//	XINFA_OP_TYPE	OPType;										//��������
//	SceneID_t		SceneID;									//�������
//	FLOAT			XPos;										//�¼�����λ��
//	FLOAT			ZPos;
//	ID_t			XinFaID_Nouse;									//���ܺ�
//	INT				Level;										//����
//	INT				Count;
//	XINFA_LOG_PARAM()
//	{
//		CleanUp();
//	}
//
//	VOID	CleanUp()
//	{
//		CharGUID	=	INVALID_ID;									
//		OPType		=	XINFA_OP_UNKNOW;										
//		SceneID		=	-1;									
//		XPos		=	0.0f;										
//		ZPos		=	0.0f;
//		XinFaID_Nouse	=	-1;
//		Level		=	-1;
//		Count		=	0;
//	}
//};
//
//VOID	SaveXinFaLog(XINFA_LOG_PARAM* pLogParam);


/*
*	XOL:�����ɫ���������ͣ�������xλ��,zλ��,���ܱ��
*/
static CHAR*	g_AbilityLogFormat = 
"AOL:%X,%d,%d,%.2f,%.2f,%u,%d,%d";

struct ABILITY_LOG_PARAM
{
	GUID_t			CharGUID;									//������ɫ,Skill������
	ABILITY_OP_TYPE	OPType;										//��������
	SceneID_t		SceneID;									//�������
	FLOAT			XPos;										//�¼�����λ��
	FLOAT			ZPos;
	AbilityID_t		AbilityID;									//���ܺ�
	INT				Level;										//����
	INT				Count;
	ABILITY_LOG_PARAM()
	{
		CleanUp();
	}

	VOID	CleanUp()
	{
		CharGUID	=	INVALID_ID;									
		OPType		=	ABILITY_OP_UNKNOW;										
		SceneID		=	-1;									
		XPos		=	0.0f;										
		ZPos		=	0.0f;
		AbilityID		=	-1;
		Level		=	-1;
		Count		=	0;
	}
};

VOID	SaveAbilityLog(ABILITY_LOG_PARAM* pLogParam);

/*
*	MIL:��ɫGUID���������ͣ�������xλ��,zλ�ã������ţ�����ű��������־
*		����0������1������2������3������4������5������6������7��
*		��ɱ�־��������ɱ�־ֵ��ȫ����������������ȫ����������ֵ
*/
static CHAR*	g_MissionLogFormat = 
"MIL:%X,%d,%d,%.2f,%.2f,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%d,%d,%d,%d";

struct MISSION_LOG_PARAM
{
	GUID_t			CharGUID;									//������ɫ,Skill������
	MISSION_OP_TYPE	OPType;										//��������
	SceneID_t		SceneID;									//�������
	FLOAT			XPos;										//�¼�����λ��
	FLOAT			ZPos;
	MissionID_t		idMission;
	ScriptID_t		idScript;
	BYTE			yFlags;
	UINT			aParam[MAX_MISSION_PARAM_NUM];
	INT				nDoneFlagIndex ;
	INT				nDoneFlagValue ;
	INT				nDataIndex ;
	INT				nDataValue ;

	MISSION_LOG_PARAM( )
	{
		CleanUp( ) ;
	};
	VOID CleanUp( )
	{
		CharGUID		=INVALID_ID;				//������ɫ,Skill������
		OPType			=MISSION_OP_UNKNOW;			//��������
		SceneID			=INVALID_ID;				//�������
		XPos			=0.0f;						//�¼�����λ��
		ZPos			=0.0f;
		idMission		=INVALID_ID;
		idScript		=INVALID_ID;
		yFlags			=0;
		memset(aParam,0,sizeof(UINT)*MAX_MISSION_PARAM_NUM);
		nDoneFlagIndex	=INVALID_INDEX ;
		nDoneFlagValue	=0 ;
		nDataIndex		=INVALID_INDEX ;
		nDataValue		=0 ;
	}
};

VOID	SaveMissionLog(MISSION_LOG_PARAM* pLogParam);

#endif