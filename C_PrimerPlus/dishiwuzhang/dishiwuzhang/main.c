//
//  main.c
//  dishiwuzhang
//
//  Created by mingyue on 15/11/26.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int a = 4;
    int b = ~a;
    printf("b = %d\n",b);
    
    int c = 5;
    int d = a & c;
    printf("d = %d\n",d);
    
    int e = a | c;
    printf("e = %d\n",e);
    
    int f = a ^ c;
    printf("f = %d\n",f);
    
    int g = a << 1;
    printf("g = %d\n",g);
    
    int h = a >> 1;
    printf("h = %d\n",h);

    
    
    return 0;
}
