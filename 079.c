// 3-70 오늘 날짜와 요일을 [2016년 12월 1일, 월요일] 형식으로 나타내세요.

#include<stdio.h>
#include<time.h>
#include<Windows.h>
int main(){
	time_t t;
	struct tm tm;
	char *day[]={"일","월","화","수","목","금","토"};
	t = time(NULL);
	tm = *localtime(&t);
	printf("%d년 %d일 %d일, %s요일\n",tm.tm_year+1900, tm.tm_mon+1, tm.tm_mday,day[tm.tm_wday]);
	
	return 0;
}

