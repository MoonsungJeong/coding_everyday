// 3-70 ���� ��¥�� ������ [2016�� 12�� 1��, ������] �������� ��Ÿ������.

#include<stdio.h>
#include<time.h>
#include<Windows.h>
int main(){
	time_t t;
	struct tm tm;
	char *day[]={"��","��","ȭ","��","��","��","��"};
	t = time(NULL);
	tm = *localtime(&t);
	printf("%d�� %d�� %d��, %s����\n",tm.tm_year+1900, tm.tm_mon+1, tm.tm_mday,day[tm.tm_wday]);
	
	return 0;
}

