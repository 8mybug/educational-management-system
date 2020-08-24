#include "derection.h"
#include "game2048.h"
#include "tools.h"
#include<stdio.h>
int t[4]={0};
void add(void)
{
	int j=0,i=0;
	for(i=0;i<3;i++)
	{
		if(t[i]==0)
		{
			for(j=i+1;j<4;j++)
		    {
				if(t[j]!=0)
				break;
		    }
			t[i]=t[j];
			t[j]=0;
		}
	}
	for(i=0;i<3;i++)
	{
		if(t[i]==t[i+1]&&t[i]!=0)
		{
			t[i]*=2;
			t[i+1]=0;
		}
	}
	for(i=0;i<3;i++)
	{
		if(t[i]==0)
		{
			for(j=i+1;j<4;j++)
		    {
				if(t[j]!=0)
				break;
		    }
			t[i]=t[j];
			t[j]=0;
		}
     }
}
void up(void)
{
	int j=0,i=0;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			t[j]=view[j][i];
		}
        add();
	    for(j=0;j<4;j++)
	    {
		   view[j][i]=t[j];
	    }
	}
	debug("%s\n",__func__);
}

void down(void)
{	
	int j=0,i=0;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			t[3-j]=view[j][i];
		}
        add();
	    for(j=0;j<4;j++)
	    {
		   view[j][i]=t[3-j];
	    }
	}
	debug("%s\n",__func__);
}
void left(void)
{
	int j=0,i=0;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			t[j]=view[i][j];
		}
        add();
	    for(j=0;j<4;j++)
	    {
		   view[i][j]=t[j];
	    }
	}
	debug("%s\n",__func__);
}

void right(void)
{
	int j=0,i=0;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			t[3-j]=view[i][j];
		}
        add();
	    for(j=0;j<4;j++)
	    {
		   view[i][j]=t[3-j];
	    }
	}
	debug("%s\n",__func__);
}
