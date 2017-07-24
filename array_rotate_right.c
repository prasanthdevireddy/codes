#include<stdio.h>

void array_rotate_right(int array[]);
int main(){

	int array[10];
	int i,k;

	printf("Enter the array Elements\n");
	for(i=0;i<10;i++){
	//printf("Enter the array elements\n");
	scanf("%d\n",&array[i]);
	}
   
   //     array_rotate_right(array);
	
	/*for(k=0;k<=10;k++)
		array[k+1] = array[k];
		printf("rotated values are %d\n", array[k+1]);
	}
	/*for(j=0;j<10;j++){
	printf("rotated array is %d\n", array[j]);
	}*/


void array_rotate_right(int array []){

	int k,l;

	for(k=0;k<=10;k++){
		array[k+1] = array[k];
		printf("value of K is %d,%d\n", array[k],array[k+1]);
	}
}
		 
