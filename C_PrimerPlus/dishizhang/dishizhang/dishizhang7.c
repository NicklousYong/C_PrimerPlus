//
//  dishizhang7.c
//  dishizhang
//
//  Created by mingyue on 15/10/28.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>

int data[2] = {100, 200};
int moredata[2] = {300, 400};


int main(int argc, const char* argv[]){

    int * p1,*p2,*p3;
    p1 = p2 = data;
    p3 = moredata;
    printf("    *p1 = %d,    *p2 = %d,    *p3 = %d\n",*p1,*p2,*p3);
    printf("    *p1++ = %d,    *++p2 = %d,    (*p3)++ = %d\n",*p1++,*++p2,(*p3)++);
    printf("    *p1 = %d,    *p2 = %d,    *p3 = %d\n",*p1,*p2,*p3);
    

    return 0;
}
