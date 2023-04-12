#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
void music() {
	mciSendString(L"open music/Midnight_City.mp3", 0, 0, 0);
	mciSendString(L"play music/Midnight_City.mp3 repeat", 0, 0, 0);
	//system("pause");
}
