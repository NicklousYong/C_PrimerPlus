//
//  dishierzhang5.c
//  dishierzhang
//
//  Created by mingyue on 15/11/5.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>

int y = 0;
extern int count;
static int total = 0;
void accumulate(int k);

void accumulate(int k){
    static int x = 0;
    static int subtotal = 0;
    if (k <= 0) {
        printf("loop cycle:%d\n",count);
        printf("subtotal:%d:total:%d\n",subtotal,total);
        subtotal = 0;
    }else{
        subtotal += k;
        total += k;
    }
    x++;
    printf("x = %d\n",x);
    printf("y = %d\n",y);

}
