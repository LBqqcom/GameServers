// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#include "targetver.h"
#include <stdio.h>
#include <tchar.h>
#include<algorithm>
#include<vector>
#include<iostream>
#include "DBProto.h"
#include "Object.h"
#include <map>
#include <string.h>
#include <xstring>
#include "MD5.h"
#include "YMSocketData.h"
#include "LogicServer.h"
#include "ccEvent.h"
#include "Vo.h"
#include "RoomLogic.h"
#include "CLog.h"

using namespace std;
using namespace protocol;



enum ERR_CODE{
	ERR_OK,//����

	UNKOWN,//δ֪����

	LOGIN_PASS_ERR=100,//�˻����������
	LOGIN_TOKEN=101,//token��ʧЧ

	ROOM_OVER=201,//��������
	ROOM_AREDY_IN ,//�Ѿ��ڷ���
	ROOM_NOT_IN,//���ڷ���
	ROOM_NOT_EXIT,//����Ų�����
	ROOM_HAVE_OVER,//������������
	
	OPERATE_NOT_DISCARD=301,//���������
	OPERATE_NOT_OP,//��û���� �� ����Щ����

	REQUST_NOT_EXIT=401,//��������ݸ�ʽ�д�

	CARD_NOT_ENOUCH=501,//��������
};

/************************************************************************/
/* ��ͷ                                                                 */
/************************************************************************/
typedef struct _Head
{
	char _req[3];//���������к�
	char _stamp;
	char _bodylen[2];//����
	char _cmd[4];//cmd
}Head, *PHead;


static string SERVER_IP = "192.168.50.151";
#define HEADLEN 10
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) 
#include "iconv.h"
#pragma comment(lib,"../Debug/libiconv.lib") 
#pragma comment(lib,"../Debug/libprotobuf.lib")
#pragma comment(lib,"../Debug/libMessagePack.lib")
//#pragma comment(lib,"../Debug/libcrypto.lib")
#pragma comment(lib,"../../../redis/Debug/hiredis.lib")
#endif

//#define sqlhttp "http://192.168.50.151:8080/f137e668f5b5babdd361dcb5966a3fe9"
#define sqlhttp "http://www.lesharecs.com:8080/f137e668f5b5babdd361dcb5966a3fe9"
#define LOGIC_TOKEN "kashdkiuySKJHFKS312skfhksuiie2342"
#define DECKEY "FQ6M1w0GswdKkTuZWcFmM1rU3bDB/CTiw+KrONdCPOg"

#define MAXSTAMP 128
#define KONGGE "^"

#define CHI_DEFINE 0
#define LOGICNAME "lg1"
#define HTTP_KEY "f137e668f5b5babdd361dcb5966a3fe9"