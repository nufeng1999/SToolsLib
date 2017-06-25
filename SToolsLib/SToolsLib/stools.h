#pragma once
#ifndef STOOLSLIB_H
#define STOOLSLIB_H
#define _LINE_LENGTH 300
extern int __cdecl ping(char const* address);
extern int __cdecl telnet(char const* address,long port);
extern int __cdecl telnet2(char const* address, long port);
extern int __cdecl existfile(char const* filename);
extern int __cdecl system2(char const* _Command, char* outputbuffer, size_t size  );
extern int __cdecl test();
#endif