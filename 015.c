// 3-6 0~100 ������ ������ �ټ� �� �Է¹ް� ���� ū ���� ���� ���� ���� ����ϼ���.

#include<stdio.h>

int main(){
	int a[5] = {-1,-1,-1,-1,-1};
	int i=0;
	int max=0,min = 100;

	for(i=0; i<5; i++){
		while(a[i] < 0 || a[i] > 100){
			printf("(%d) ���� ���ڸ� �Է��ϼ���(0~100): ",i+1);
			scanf("%d", &a[i]);
		}
		if(a[i] > max)
			max = a[i];
		if(a[i] < min)
			min = a[i];
	}
	printf("���� ū �� = %d, ���� ���� �� = %d\n",max,min);


	return 0;
}