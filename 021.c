// 3-12 1���� 20������ log X ��� ���� �� ������ ����ϼ���.
// #include<math.h> �ʿ�, log �Լ��� ����Ͽ� ���մϴ�.

#include<stdio.h>
#include<math.h>

int main(){
	int i;

	for(i=1; i<=20; i++){
		printf(" LOG(%d) = %f \n",i,log((double)i));
	}
	
	return 0;
}