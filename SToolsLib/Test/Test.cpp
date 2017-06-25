// Test.cpp : 定义控制台应用程序的入口点。
//
#include <io.h>
#include <stdlib.h>
#include <stdio.h>

#include "stools.h"
int main()
{
	char* batcmd = "ipconfig & pause & dir & pause & for /d %a in (c:\\*.*) do @echo %a";
	char* batcmd2 = "telnet 127.0.0.1 11 & pause & telnet 127.0.0.1 11 & pause & telnet 127.0.0.1 135";
	int ret = 0;
	//ret=ping("127.0.0.1");
	//printf("ping 127.0.0.1  :%d\r\n",ret);
	//ret = telnet2("127.0.0.1", 11);
	//printf("telnet 127.0.0.1 135 :%d\r\n", ret);
	//int old;
	//FILE *DataFile;
	//if (fopen_s(&DataFile, "data", "w+") != 0)
	//{
	//	puts("Can't open file 'data'\n");
	//	exit(1);
	//}

	//old = _dup(1);

	//if (-1 == _dup2(_fileno(DataFile), 1))
	//{
	//	perror("Can't _dup2 stdout");
	//	exit(1);
	//}

	//ret = system("telnet 127.0.0.1 11");
	//ret = system("telnet 127.0.0.1 11");
	//ret = system("telnet 127.0.0.1 11");
	ret = telnet("telnet 127.0.0.1",11);
	//fflush(stdout);
	//fclose(DataFile);
	//_dup2(old, 1);
	//_flushall();
	//system("type data");
	test();
    return 0;
}
