#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int returnSize[10];
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
        returnSize=malloc(sizeof(int)*4);
        for(int i=0;i<numsSize-1;i++){
        	int num = nums[i]+nums[i+1];
        	if(num==target){
            		*returnSize=i;
            		//printf("%d\n",*returnSize);
            		returnSize = returnSize+1;
           		*returnSize = i+1;
            		//printf("%d\n",*returnSize);
        	}
    	}
    	returnSize = returnSize-1;
    	return returnSize;
}

int main(){
	int *ptr;
	int a[10]={10,20,1,23};
	int n=4;
	int target = 30;
	ptr = twoSum(&a[0],n,target,&returnSize[0]);
	printf("%d\n",*ptr);
	ptr++;
	printf("%d\n",*ptr);
	return 0;
}
