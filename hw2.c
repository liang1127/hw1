#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
		int theSeason;
	
	printf("�п�J���(1~12)\n");
	scanf("%d",&theSeason);
	
	if(theSeason>=3&theSeason<=5)
	{
		printf("�K�Ѩ��A!");
	}
	else if(theSeason>=6&theSeason<=8)
	{
		printf("�k�H���u�`!");
	}
	else if(theSeason>=9&theSeason<=11)
	{
		printf("���");
	}
	else if (theSeason==12|theSeason==1|theSeason==2)
	{
		printf("�V��");
		
	}
	else if (theSeason>=13)
	{
		printf("��J���~");
	}
	return 0;
}
