// 3-69 현재 시간을 시:분:초 형식(예; 10:09:05)으로 나타내세요

#include<stdio.h>
#include<time.h>
#include<Windows.h>
int main(){
	time_t t;
	struct tm tm;

	while(1){
		system("cls");
		t = time(NULL);
		tm = *localtime(&t);
		printf("\n현재 시간 [%d:%d:%d]\n\n",tm.tm_hour, tm.tm_min, tm.tm_sec);
		Sleep(1000);
	}
	return 0;
}

