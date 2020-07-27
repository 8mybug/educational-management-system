#include<stdio.h>
#include<string.h>
union Data
{
	char ch ='m';
	int num;

};
int main(int argc,const char*argv[])
{
	union Data Da;
	printf("%d",Da.num);
}
