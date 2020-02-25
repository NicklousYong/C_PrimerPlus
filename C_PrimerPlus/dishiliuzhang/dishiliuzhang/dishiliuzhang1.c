//
//  dishiliuzhang1.c
//  dishiliuzhang
//
//  Created by mingyue on 15/11/27.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>

#define SQUARE(x) x*x
#define PR(x) printf("This result is %d.\n",x)

int main(int argc, const char* argv[]){
    
    int x = 4;
    int z;
    
    printf("x = %d\n",x);
    z = SQUARE(x);
    printf("Evaluating SQUARE(x): ");
    PR(z);
    z = SQUARE(2);
    printf("Evaluating SQUARE(2): ");
    PR(z);
    printf("Evaluating SQUARE(x+2): ");
    PR(SQUARE(x+2));
    printf("Evaluating 100/SQUARE(2): ");
    PR(100/SQUARE(2));
    printf("x is %d.\n",x);
    printf("Evaluating SQUARE(++x): ");
    PR(SQUARE(++x));
    printf("After incrementing, x is %x.\n", x);
    
    
    return 0;
}
