#pragma once
#ifndef LIB_H
#define LIB_H
#define _LINE_LENGTH 300
extern int __cdecl ping(char* address);
extern int __cdecl telnet(char* address,long port);
extern int __cdecl existfile(char* filename);

#endif