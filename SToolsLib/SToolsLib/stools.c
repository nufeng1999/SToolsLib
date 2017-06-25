#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <WinBase.h>
#include <io.h>
#include "msscript_h.h"
#include "stools.h"
#define send(fp,msg, dly) fprintf(fp, msg); fflush(fp); Sleep(dly); fflush(fp); 
int __cdecl ping(char const* address) {
	int ret = 0;
	FILE *file;
	char *pdest;
	char line[_LINE_LENGTH];
	char command[256];
	memset(command,0,256);
	sprintf_s(command,256,"ping %s", address);
	file=_popen(command,"r");
	if (NULL != file)
	{
		while (fgets(line, _LINE_LENGTH, file) != NULL)
		{
			//判断时候包含 TTL 字符串
			if (ret != 1) {
				pdest = strstr(line, "TTL");
				if (pdest != NULL)
					ret = 1;
			}
			printf("%s\n", line);
		}
	}
	else
	{
		return ret;
	}
	_pclose(file);
	return ret;
}
int __cdecl telnet(char const* address, long port) {
	int ret = 0;
	FILE *file;
//	FILE *outfile;
	char line[_LINE_LENGTH];
	char* outputfilename = "output.txt";
	char command[256];

	//执行 telnet 命令
	memset(command, 0, 256);
	sprintf_s(command, 256, "start /MIN telnet %s %d", address, port);
	printf("%s\r\n", command);
	system(command);
	//统计telnet 进程
	Sleep(500);
	memset(command, 0, 256);
	sprintf_s(command, 256, "tasklist.exe | find /i /c \"telnet\"");
	printf("%s\r\n", command);
	file = _popen(command, "r");
	if (NULL != file)
	{
		Sleep(150);
		//fopen_s(&outfile, outputfilename, "r");
		while (fgets(line, _LINE_LENGTH, file) != NULL)
		{
			printf("finded %s\n", line);
			//判断是否  >0
			if (ret != 1) {
				char *stopstring;
				long count = strtol(line, &stopstring, 10);
				if (count > 0) {
					ret = 1;
					//强行关闭已经连接的Telnet
					system("Taskkill /IM  telnet.exe /F");
				}

			}
			Sleep(150);
		}
	}
	else
	{
		return ret;
	}
	_pclose(file);

	printf("command %s\r\n", command);
	return ret;
}
int __cdecl telnet2(char const* address, long port) {
	int ret = 0;
	FILE *file;
	//FILE *outfile;
	char line[_LINE_LENGTH];
	char* outputfilename = "output.txt";
	char command[256];

	//执行 telnet 命令
	/*memset(command, 0, 256);
	sprintf_s(command, 256, "start /MIN telnet %s %d", address, port);
	printf("%s\r\n", command);
	system(command);*/
	//统计telnet 进程
	//Sleep(500);
	memset(command, 0, 256);
	sprintf_s(command, 256, "telnet %s %d", address, port);
	printf("%s\r\n", command);
	file = _popen(command, "r");
	if (NULL != file)
	{		
		Sleep(150);		
		//fopen_s(&outfile, outputfilename, "r");
		while (fgets(line, _LINE_LENGTH, file) != NULL)
		{
			printf("finded %s\n", line);
			//判断是否  >0
			//if (ret != 1) {
			//	char *stopstring;
			//	long count = strtol(line, &stopstring, 10);
			//	if (count > 0) {
			//		ret = 1;
			//		//强行关闭已经连接的Telnet
			//		system("Taskkill /IM  telnet.exe /F");
			//	}
			//		
			//}
			Sleep(150);
		}
	}
	else
	{
		return ret;
	}
	_pclose(file);

	printf("command %s\r\n", command);
	return ret;
}
int __cdecl existfile(char const* filename) {
	int ret = 0;

	return ret;
}
int __cdecl system2(char const* _Command, char* outputbuffer, size_t size) {
	int ret = 0;
	FILE *file;
	char line[_LINE_LENGTH];
	if(_Command==NULL)return ret;
	file = _popen(_Command, "r");
	if (NULL != file)
	{
		while (fgets(line, _LINE_LENGTH, file) != NULL)
		{
			if (outputbuffer != NULL) {
				ret=strcat_s(outputbuffer, size,line);
			}
			printf("%s\n", line);
		}
	}
	else
	{
		return ret;
	}
	_pclose(file);
	if(outputbuffer!=NULL)
		printf("%s\n", outputbuffer);

	return ret;
}
int __cdecl test() {
	IScriptControl *pScript;
	BSTR Language = SysAllocString(L"VBScript");
	BSTR Code = SysAllocString(L"MsgBox \"Hello world\"");
	HRESULT hr;
	printf("OK\n");
	CoInitialize(NULL);
	hr = CoCreateInstance(&CLSID_ScriptControl, NULL, CLSCTX_INPROC_SERVER, &IID_IScriptControl, &pScript);
	if (FAILED(hr))
	{
		MessageBox(NULL, TEXT("Error"), TEXT(""), MB_OK);
		return 1;
	}
	printf("OK1\n");
	hr = pScript->lpVtbl->put_Language(pScript, Language);
	hr = pScript->lpVtbl->ExecuteStatement(pScript, Code);
	printf("OK2\n");
	hr = pScript->lpVtbl->Release(pScript);
	SysFreeString(Language);
	SysFreeString(Code);
	CoUninitialize();
	printf("OK3\n");
	return 0;
}