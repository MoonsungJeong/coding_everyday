// 3-69 ���� �ð��� ��:��:�� ����(��; 10:09:05)���� ��Ÿ������

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
		printf("\n���� �ð� [%d:%d:%d]\n\n",tm.tm_hour, tm.tm_min, tm.tm_sec);
		Sleep(1000);
	}
	return 0;
}

