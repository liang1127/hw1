#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
		int theSeason;
	
	printf("�п�J���(1~12)\n");					
	scanf("%d",&theSeason);								
	
	if(theSeason>=3&theSeason<=5)							//�P�_�O�_�O�K�� 
	{
		printf("�K�Ѩ��A!");
	}
	else if(theSeason>=6&theSeason<=8)						//�P�_�O�_�O�L�� 
	{
		printf("�k�H���u�`!");
	}
	else if(theSeason>=9&theSeason<=11)						//�P�_�O�_�O��� 
	{
		printf("���");
	}
	else if (theSeason==12|theSeason==1|theSeason==2)		//�P�_�O�_�O�V��	
	{
		printf("�V��");
		
	}
	else if (theSeason>=13)									//�P�_�O�_�O���T����� 
	{
		printf("��J���~");
	}
	return 0;
}
