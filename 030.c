// 3-21 ���� �ٸ� ���� ���� �Է¹ް�, ũ�Ⱑ �߰��� ���� ����ϼ���. ���� ���� ���� �Է¹����� �ٽ� �Է¹�������.
// swap �Լ��� ����Ҷ��� �����μ��� �ּҿ����� &�� �̿��Ͽ� ������ �ּҸ� �Ѱܾ��մϴ�.
/*
void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
*/

#include<stdio.h>
void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int a=0,b=0,c=0;

	while(a == b | b == c | c == a){
		printf("���� �ٸ� �� ������ �Է��ϼ���(��; 30 50 20 <����>)");
		scanf("%d %d %d", &a,&b,&c);
	}
	if(a > b)
		swap(&a,&b);
	if(a > c)
		swap(&a,&c);
	if(b > c)
		swap(&b,&c);

	printf("%d %d %d���� �߰� �� = %d\n", a,b,c,b);
	return 0;
}