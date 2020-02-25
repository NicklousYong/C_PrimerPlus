//
//  dishiliuzhang4.c
//  dishiliuzhang
//
//  Created by mingyue on 15/11/30.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>
#include <math.h>

#define PR(X,...) printf("Message" #X ":"__VA_ARGS__)

int main(int argv, const char* argc[]){
    
    double x = 48;
    double y;
    
    y = sqrt(x);
    PR(1,"x = %g\n",x);
    PR(2,"x = %.2f, y = %.4f\n",x,y);
    

    return 0;
}

