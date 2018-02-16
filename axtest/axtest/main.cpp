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

	// DLLのロード
	HMODULE hModule = LoadLibrary("ax.dll");
	if (hModule == NULL){
		printf("%s", "DLLのロードに失敗しました。");
		return 0;
	}
		
	// 関数のアドレス取得
	FUNC lpFunc = (FUNC)GetProcAddress(hModule, "Echo");
	if (lpFunc == NULL){
		printf("%s", "関数のアドレス取得に失敗しました。");
		FreeLibrary(hModule);
		return 0;
	}
	// 関数の呼び出し
	(*lpFunc)("Hello,World!\n");

	// DLLの解放
	FreeLibrary(hModule);

	
	return 0;
}