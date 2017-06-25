#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <WinBase.h>
#include <io.h>
#include "msscript_h.h"
#include "ScriptLib.h"

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

	hr = pScript->lpVtbl->put_Language(pScript, Language);
	hr = pScript->lpVtbl->ExecuteStatement(pScript, Code);


	hr = pScript->lpVtbl->Release(pScript);

	SysFreeString(Language);
	SysFreeString(Code);
	CoUninitialize();
	return 0;
}