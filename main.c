#pragma hdrstop
#pragma argsused

#include <stdio.h>
#include "joueur.h"

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

int _tmain(int argc, _TCHAR* argv[]) 
{
	joueur test;

	testJoueur(&test);


	return 0;
}
