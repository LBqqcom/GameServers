// testlibeventSrv.cpp : �������̨Ӧ�ó������ڵ㡣
//

#ifndef __SERVER_H__
#define __SERVER_H__
#include "stdafx.h"
#include "LibEvent.h"
#include "HttpLogic.h"
#include "RoomInfo.h"
#include "RoomLogicInfo.h"

int _tmain(int argc, _TCHAR* argv[])
{
	RoomInfo::getIns();
	RoomLogicInfo::getIns();
	HttpLogic::getIns()->requestManagerData();
	getchar();
	return 0;
}

#endif