#include <stdio.h>
#include <tchar.h>
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{
	TCHAR szEXEPath[2048];
	GetModuleFileName ( NULL, szEXEPath, 2048 );
	printf("%s\n",szEXEPath);
	return 0;
}
