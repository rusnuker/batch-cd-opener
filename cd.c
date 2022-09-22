#include <windows.h>

// won't work with GCC
#pragma comment( lib, "winmm" ) 

int main (int argc, char const *argv[]) {
	if(!lstrcmp(argv[1], "open"))
		return mciSendString("set cdaudio door open", 0, 0, 0);
	else if(!lstrcmp(argv[1], "close"))
		return mciSendString("set cdaudio door closed", 0, 0, 0);
	return 1;
}
