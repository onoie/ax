//#include <stdio.h>
//void Echo(char* msg){
//	printf(msg);
//}
//int main(){
//	printf("Hello,World!\n");
//  Echo("EchoTest\n");
//	return 0;
//}
#include <stdio.h>
#include <Windows.h>

typedef int(*FUNC)(char *);

int main(){

	//printf("Hello,World!\n");
	//MessageBox(NULL, "ok", "title", MB_OK);

	// DLL�̃��[�h
	HMODULE hModule = LoadLibrary("ax.dll");
	if (hModule == NULL){
		printf("%s", "DLL�̃��[�h�Ɏ��s���܂����B");
		return 0;
	}
		
	// �֐��̃A�h���X�擾
	FUNC lpFunc = (FUNC)GetProcAddress(hModule, "Echo");
	if (lpFunc == NULL){
		printf("%s", "�֐��̃A�h���X�擾�Ɏ��s���܂����B");
		FreeLibrary(hModule);
		return 0;
	}
	// �֐��̌Ăяo��
	(*lpFunc)("Hello,World!\n");

	// DLL�̉��
	FreeLibrary(hModule);

	
	return 0;
}