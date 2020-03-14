#include<stdio.h>

int LSearch(int arr[], int len, int target){
	int i;
	for(i=0; i<len; i++){
		if(arr[i] == target)
			return i;
	}
	return -1;
}
int main(){
	int idx;
	int arr[]={3,4,9,6,1};

	idx = LSearch(arr, sizeof(arr)/sizeof(int), 6);
	if(idx == -1)
		printf("Å½»ö ½ÇÆĞ\n");
	else
		printf("Å¸°Ù ÀúÀå ÀÎµ¦½º: %d \n", idx);
	
	idx = LSearch(arr, sizeof(arr)/sizeof(int), 0);
	if(idx == -1)
		printf("Å½»ö ½ÇÆĞ\n");
	else
		printf("Å¸°Ù ÀúÀå ÀÎµ¦½º: %d \n", idx);

	return 0;
}