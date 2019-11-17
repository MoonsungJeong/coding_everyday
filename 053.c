// 3-44 다음 자료에 나온 숫자(1~5)의 각 출현 횟수를 출력하세요
// [자료] 1,2,5,2,4,5,1,5,5,3,3,1
// [출력 예] 1:3, 2:1, 3:3, 4:1, 5:2
#include<stdio.h>
int main(){
	int i,n[5]={0};
	int data[] = {1,2,5,2,4,5,1,5,5,3,3,1};

	for(i=0; i<12; i++){
		switch(data[i]){
		case 1:
			n[0]++;
			break;
		case 2:
			n[1]++;
			break;
		case 3:
			n[2]++;
			break;
		case 4:
			n[3]++;
			break;
		case 5:
			n[4]++;
			break;
		}
	}
	printf("1:%d 2:%d 3:%d 4:%d 5:%d\n",n[0],n[1],n[2],n[3],n[4]);
	
	return 0;
}