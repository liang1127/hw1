#include <stdio.h>	/* 氣泡排序法 Bubble Sort */
#define SIZE 10

void bubbleSort(int *  array, int size);			//指向非常數資料的非常數指標	
	
int main(void)
{
   int a[10]={1,3,20,37,15,87,13,46,20,16};
   int i,size;
   
   puts("資料排序前\n");
   
    for(i=0;i<=9;i++)
    {
    	printf("%d ",a[i]);
    }
    bubbleSort( a, 10);
    
	puts("\n資料排序後\n");
	for(i=0;i<=9;i++)
	{
		printf("%d ",a[i]);
	}
}

void swap(int *element1Ptr,int *element2Ptr)
{
	int hold= *element1Ptr;
	*element1Ptr=*element2Ptr;
	*element2Ptr=hold;
}

