// testlibeventSrv.cpp : �������̨Ӧ�ó������ڵ㡣
//

#ifndef __MAIN_H__
#define __MAIN_H__
#include "redis.h"
// �߳�A ����


int main()
{
	
	
	redis rd;
	rd.initial("127.0.0.1", 6379, "qp");

	getchar();
	
	return 0;
}

#endif