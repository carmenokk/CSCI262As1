// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <cstdio>
#include <cstdlib> // for atoi()
#include <ctime>
#include <fstream>
#include <iostream>
#include <string>

//include platform specific lib
#ifdef WIN32
#include <windows.h>
#include <tchar.h>
#else
#include <sys/types.h>
#include <sys/stat.h>
#endif



// TODO: reference additional headers your program requires here
