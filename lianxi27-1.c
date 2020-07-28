#include<stdio.h>
typedef struct Teacher
{
	char name[10];
	int years;
	char id[10];
	char sex;
}Teacher;
int main(int argc,const char*argv[])
{
	Teacher te;
	printf("姓名 年龄 工号 性别\n");
	scanf("%s %d %s %c",te.name,&te.years,te.id,&te.sex);
    FILE* fp=fopen("text.bin","w");
	if(NULL==fp)
	{
		perror("fopen");
	}
    fwrite(&te,sizeof(te),1,fp);

}
