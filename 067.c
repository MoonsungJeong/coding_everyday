// 3-58 정수 열 개를 입력받은 후에 오름차순(1 2 3...)으로 출력하세요.
// 흰트 정렬하는 알고리즘은 여러 가지가 있습니다. 다음 예제는 nums 배열에 있는 값을 정렬하는 예제입니다.
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
		printf("[%d] 정수를 입력하세요: ",i+1);
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

