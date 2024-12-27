//
//  dishiyizhang2.c
//  Chapter11
//
//  Created by mingyue on 15/11/2.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>

#define MAX1 81



int main(int argc, const char* argv[]){

    char name[MAX1];
    printf("Hi, what's your name?\n");
    gets(name);
    printf("Nice name,%s.\n",name);//如若不加\n不换行，因为gets()会丢掉输入的换行符
    
    char name1[MAX1];
    char * ptr;
    printf("Hi, what's your name?\n");
    ptr = fgets(name1, MAX1, stdin);
    printf("%s? Ah! %s!\n",name1,ptr);

    return 0;
}
