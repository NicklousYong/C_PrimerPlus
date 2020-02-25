//
//  swap.c
//  fanzhuandanxianglianbiao
//
//  Created by mingyue on 16/4/3.
//  Copyright © 2016年 Gi. All rights reserved.
//

#include <stdio.h>

void strRev(char *s);


int main(int argc, const char * argv[]) {

    int a = 3, b = 5;
    
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    
    printf("a = %d, b = %d\n", a, b);
    

    char str[]= "abcde";
    //char * str = "abcde";//就会报错，strlen不能用这种str做参数
    printf(str);
    printf("\n");
    //printf("strlen(p)1 = %lu", strlen(str));
    strRev(str);
    printf(str);
    printf("\n");
    
    int *c;
    int d = 2;
    c = &d;
    
    c[4] = 5;
    c[8] = 7;
    
    printf("c[4] = %d\n",c[4]);
    printf("c+8 = %d\n",*(c + 8));
    
    int e[3] = {0,1,2};
    int *f = e;
    printf("e+2 = %d\n",*(f+2));
    
    
    int h = 2;
    int const *g = &h;
    int i = 3;
    //*g = &i;//错误
    int k = 5;
    int * const j = &k;
    k = 6;
    printf("*j = %d\n", *j);
    *j = 8;
    *j = &i;
    //j = 7;//错误
    
    
    
    int m = 9;
    int const * const l = &m;
    //*l = 10;//错误
    //l = 11;//错误
    
    
    
    
    
    
    
    
    return 0;
}


void strRev(char *p){

    char temp;
    char * t;
    printf("strlen(p) = %lu\n",strlen(p));
    t = p + strlen(p) -1;
    while (t > p) {
        temp = *p;
        *p = *t;
        *t = temp;
        p++;
        t--;
    }
    
    
}


