// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#include "targetver.h"
#include <stdio.h>
#include <tchar.h>
#include <algorithm>
#include <vector>
#include <iostream>
#include <stdlib.h>    
#include <string.h>     //for strcat
#include <xstring>
#include <evhttp.h>
#include <signal.h>
#include <map>
#include "DBProto.h"

#define CC_REPEAT_FOREVER (UINT_MAX -1)
#define kRepeatForever CC_REPEAT_FOREVER
// TODO: �ڴ˴����ó�����Ҫ������ͷ�ļ�

#if defined(__GNUC__) && ((__GNUC__ >= 4) || ((__GNUC__ == 3) && (__GNUC_MINOR__ >= 1)))
#define CC_DEPRECATED_ATTRIBUTE __attribute__((deprecated))
#elif _MSC_VER >= 1400 //vs 2005 or higher
#define CC_DEPRECATED_ATTRIBUTE __declspec(deprecated) 
#else
#define CC_DEPRECATED_ATTRIBUTE
#endif 

#define CC_UNUSED_PARAM(unusedparam) (void)unusedparam


#define SQLSERVER_IP "192.168.50.151"
#define HTTP_H "http://"
#define SQL_FIND_USERINFO HTTP_H+SQLSERVER_IP

#define DBUSER "qpserver"
#define DBPASSWD "3.1415926qp"
#define DBIP "192.168.50.151"
#define DBNAME "majiang"
#define MJ_TABLENAME_USER "userinfo"
#define DBPORT 3306

#pragma comment(lib,"../MYSQLServer/Debug/libprotobuf.lib") 
#pragma comment(lib,"../MYSQLServer/Debug/libprotoc.lib") 

using namespace protocol;
using namespace std;