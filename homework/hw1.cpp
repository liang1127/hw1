#include <iostream>
#include<stdio.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int season;
	
	printf("�п�J���(1~12)\n");
	scanf("%d",&season);
	
	if(season>=3&season<=5)
	{
		printf("�K�Ѩ��A!");
	}
	else if(season>=6&season<=8)
	{
		printf("�k�H���u�`!");
	}
	else if(season>=9&season<=11)
	{
		printf("���");
	}
	else if (season==12|season==1|season==2)
	{
		printf("�V��");
		
	}
	else if (season>=13)
	{
		printf("��J���~");
	}
	return 0;
}
