// Test.cpp : 定义控制台应用程序的入口点。
//
#include <stdio.h>
#include <stdlib.h>
#include "stools.h"
int main()
{
	int ret = 0;
	//ret=ping("127.0.0.1");
	//printf("ping 127.0.0.1  :%d\r\n",ret);
	ret = telnet("127.0.0.1", 11);
	printf("telnet 127.0.0.1 135 :%d\r\n", ret);
    return 0;
}

