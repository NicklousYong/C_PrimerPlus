//
//  dishiliuzhang3.c
//  dishiliuzhang
//
//  Created by mingyue on 15/11/27.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>

#define XNAME(n) x ## n
#define PRINT_XN(n) printf("x" #n " = %d\n",x ## n)

int main(int argc, const char* argv[]){
    int XNAME(1) = 14;
    int XNAME(2) = 20;
    PRINT_XN(1);
    PRINT_XN(2);
    
    
    return 0;
}

