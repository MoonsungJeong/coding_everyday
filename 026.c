// 3-17 0���� 100���� ���ڿ��� ¦�� ���� ���Ͽ� ����ϼ���.
// ������ ������ % �̿�
#include<stdio.h>

int main(){
	int i, sum=0;

	for(i=0; i<101; i++){
		if(i%2 == 0){
			sum += i;
		}
	}
	printf("1~100 ¦�� �� = %d\n", sum);
	return 0;
}