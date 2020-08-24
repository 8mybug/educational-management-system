#ifndef TOOLS_H
#define TOOLS_H
#include<stdbool.h>
#include<stdio.h>

#ifdef DEBUG
	#define debug(...) printf(__VA_ARGS__)
#else
    #define debug(...) 
#endif

//显示界面
void show_view(void);
//随机产生数
void rand_numb(void);
//检查是否结束
bool is_godie(void);
#endif//TOOLS_H
