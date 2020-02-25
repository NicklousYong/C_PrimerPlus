//
//  diwuzhang.c
//  clianxi
//
//  Created by mingyue on 15/10/21.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>

#define ADJUST 7.64
#define SCALE 0.325

#define SQUARES 64
#define CROP 1E15

#define SEC_PER_MIN 60
#define MAX1 100

void pound(int n);

int main(int argc, const char * argv[]) {

    double shoe,foot;
    
    printf("Shoe size(men's)  foot length\n");
    shoe = 3.0;
    while (shoe < 18.5) {
        
        foot = SCALE*shoe + ADJUST;
        printf("%10.1f %15.2f inches\n",shoe,foot);
        shoe = shoe + 1.0;
        
    }
    
    printf("If the shoe fits,wear it.\n");
    
    double current,total;
    int count = 1;
    
    printf("square grains total ");
    printf("fraction of \n");
    printf("    added    grain    ");
    printf("US total \n");
    total = current = 1.0;
    printf("%4d %13.2e %12.2e %12.2e\n",count,current,total,total/CROP);
    
    while (count < SQUARES) {
        count = count + 1;
        current = 2.0 * current;
        total = total + current;
        printf("%4d %13.2e %12.2e %12.2e\n",count,current,total,total/CROP);
        
    }
    
    printf("That's all.\n");
    
    int n = 0;
    size_t intsize;
    intsize = sizeof(int);
    printf("n = %d, n has %zd bytes: all ints have %zd bytes.\n",n,sizeof(n),intsize);
    
    
    int sec,min,left;
    printf("Convert seconds to minutes and seconds!\n");
    printf("Enter the number of seconds (<=0 to quit):");
    scanf("%d",&sec);
    
    while (sec > 0) {
        min = sec / SEC_PER_MIN;
        left = sec % SEC_PER_MIN;
        printf("%d seconds is %d minutes,%d seconds.\n",sec,min,left);
        printf("Enter next value (<=0 to quit):\n");
        scanf("%d",&sec);
    }
    
    printf("Done!\n");
    
    
    int ultra = 0,super = 0;
    while (super < 5) {
        super ++;
        ++ ultra;
        printf("super = %d,ultra = %d\n",super,ultra);
    }
    
    shoe = 3.0;
    while (shoe < 18.5) {
        foot = SCALE * shoe + ADJUST;
        printf("%10.1f %20.2f inches\n",shoe,foot);
        ++shoe;
    }
    
    shoe = 2.0;
    while (++shoe < 18.5) {
        foot = SCALE * shoe + ADJUST;
        printf("%10.1f %20.2f inches\n",shoe,foot);
    }
    
    int a = 1,b = 1;
    int aplus,plusb;
    aplus = a ++;
    plusb = ++b;
    printf("a    aplus    b    plusb\n");
    printf("%d  %5d  %5d  %5d\n",a,aplus,b,plusb);
    
    int count1 = MAX1 + 1;
    while (--count1 > 0) {
        
        printf("%d bottles of spring water on the wall."
               "%d bottles of spring water!\n",count1,count1);
        printf("Take one down and pass it around.\n");
        printf("%d bottles of spring water!\n\n",count1 - 1);
        
    }
    
    int num = 1;
    while (num < 21) {
        printf("%4d %6d\n",num,num * num);
        num = num + 1;
    }
    
    num = 1;
    while (num < 21) {
        printf("%10d %10d\n",num,num*num++);
    }
    
    int guests = 0;
    while (guests++ < 10) {
        printf("%d \n",guests);
    }
    
    int times = 5;
    char ch = '!';
    float f = 6.0;
    pound(times);
    pound(ch);
    pound((int)f);

    return 0;
}

void pound(int n){
    
    while (n-- > 0)
        printf("#");
        printf("\n");
    
    
}








