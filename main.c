#include <stdio.h>	/* ��w�ƧǪk Bubble Sort */
#define SIZE 10

void bubbleSort(int *  array, int size);			//���V�D�`�Ƹ�ƪ��D�`�ƫ���	
	
int main(void)
{
   int a[10]={1,3,20,37,15,87,13,46,20,16};
   int i,size;
   
   puts("��ƱƧǫe\n");
   
    for(i=0;i<=9;i++)
    {
    	printf("%d ",a[i]);
    }
    bubbleSort( a, 10);
    
	puts("\n��ƱƧǫ�\n");
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

