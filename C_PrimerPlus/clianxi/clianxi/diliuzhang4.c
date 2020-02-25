//
//  diliuzhang4.c
//  clianxi
//
//  Created by mingyue on 15/10/22.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>

double power(double n, int p);

int main(int argc, const char* arg[]){

    double x, xpow;
    int exp;
    
    printf("Enter a number and positive integer power");
    printf(" to which\nthe number will be raised. Enter q");
    printf(" to quit.\n");
    
    while (scanf("%lf %d",&x,&exp) == 2) {
        xpow = power(x, exp);
        printf("%.3g to the power %d is %.5g\n",x,exp,xpow);
        printf("Enter next pair of numbers or q to quit.\n");
    }
    
    printf("Hope you enjoyed this power trip -- bye!\n");

    return 0;
}

double power(double n,int p){

    double pow = 1;
    int i;
    
    for (i = 0; i <= p; i++) {
        pow *= n;
    }
    return pow;
}










