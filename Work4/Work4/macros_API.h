#pragma once
#ifdef WORK4_EXPORTS
#define DLL_API __declspec(dllexport)
#else 
#define DLL_API __declspec(dllimport)
#endif