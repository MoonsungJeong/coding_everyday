// 3-58 ���� �� ���� �Է¹��� �Ŀ� ��������(1 2 3...)���� ����ϼ���.
// ��Ʈ �����ϴ� �˰����� ���� ������ �ֽ��ϴ�. ���� ������ nums �迭�� �ִ� ���� �����ϴ� �����Դϴ�.
/*
int I, j, n;
int num[8] = {5, 7, 3, 5, 8, 1, 0, 3, 2, 9};

for(i=1; i<10; i++){
	for(j=0 j< 10-1; j++){
		if(nums[i] < nums[j]){
			n = nums[i];
			nums[i] = nums[j];
			nums[j] = n;
		}
	}
}
*/
#include<stdio.h>

int main(){
	int nums[10];
	int i,j,n;
	for(i=0; i<10; i++){
		printf("[%d] ������ �Է��ϼ���: ",i+1);
		scanf("%d",&nums[i]);
	}
	
	for(i=1; i<10; i++){
		for(j=0; j< 10-1; j++){
			if(nums[i]<nums[j]){
				n = nums[i];
				nums[i] = nums[j];
				nums[j] = n;
			}
		}
	}
	for(i=0;i<10;i++){
		printf("%d ",nums[i]);
	}
	printf("\n");
	return 0;
}

