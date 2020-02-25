//
//  dishiyizhang21.c
//  dishiyizhang
//
//  Created by mingyue on 15/11/3.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[]){

    int i,times;
    printf("%d\n",argc);
    if (argc < 2 || (times = atoi(argv[1])) < 1) {
        printf("Usage: %s positive-number\n",argv[0]);
    }else{
        for (i = 0; i < times; i++) {
            puts("Hello,good looking!");
        }
    }
    
    return 0;
}
