#include"tools.h"
#include"game2048.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#define WIN 32
//显示界面
//int move=0;
void show_view(void)
{	
	system("clear");
	printf("********2048********\n");
	for(int i=0;i<=3;i++)
	{
		printf(" －－－－－－－－－－\n");
		for(int j=0;j<=3;j++)
		{
			if(view[i][j]==0)
			{
				printf("|    ");
			}
			else
			{
			    printf("|%4d",view[i][j]);
			}
		}
		printf("|\n");
	}
	printf("－－－－－－－－－－\n");	
	//printf("步数:%d\n",move);
	debug("%s\n",__func__);
}
//随机产生数
void rand_numb(void)
{
	int i,j;
	srand(time(NULL));
	do
	{
        i=rand()%4;
     	j=rand()%4;
	}while(view[i][j]!=0);
	view[i][j]=2;
//	move++;
	debug("%s\n",__func__);
}
//检查是否结束
bool is_godie(void)
{
	int i,j;
	for( i=0;i<4;i++)
	{
		for( j=0;j<4;j++)
		{
			if(view[i][j]==WIN)
			{
				return  true;
			}
		}
	}
	return false;
	//debug("%s\n",__func__);
}
