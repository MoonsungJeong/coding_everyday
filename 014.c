// 3-5 0~100 ������ ������ �ټ� �� �Է¹ް�, ���� ���� ������ ����ϼ���.
#include<stdio.h>

int main(){
	int a[5] = {-1,-1,-1,-1,-1};
	int i=0;
	int max=0;

	while(a[i] < 0 || a[i] > 100){
		printf("(%d) ������ ������ �Է��ϼ���(0~100): ",i+1);
		scanf("%d", &a[i]);
		if(!(a[i] < 0 || a[i] > 100)){
			if(a[i] >= max) max = a[i];
			i++;
			if(i==5) break;
		}else{
			a[i] = -1;
		}
		
	}
	printf("�ִ� ������ %d���Դϴ�.\n", max);

	return 0;
}