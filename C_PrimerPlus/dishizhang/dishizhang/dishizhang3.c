//
//  dishizhang3.c
//  dishizhang
//
//  Created by mingyue on 15/10/28.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>

#define SIZE 4


int main(int argc, const char* argv[]){
    
    short dates [SIZE];
    short * pti;
    short index;
    double bills[SIZE];
    double * ptf;
    pti = dates;
    ptf = bills;
    printf("%23s %10s\n","short", "double");
    
    for (index = 0; index < SIZE; index++) {
        printf("points + %d: %10p %10p\n",index,pti + index, ptf + index);
    }
    

    return 0;
}
