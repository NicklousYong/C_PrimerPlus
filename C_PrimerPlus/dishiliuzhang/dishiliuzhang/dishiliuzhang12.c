//
//  dishiliuzhang12.c
//  dishiliuzhang
//
//  Created by mingyue on 15/12/1.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>
#include <stdarg.h>
double sum(int,...);

int main(int argc, const char* argv[]){

    double s,t;
    
    s = sum(3, 1.1, 2.5, 13.3);
    t = sum(6, 1.1, 2.1, 13.3, 4.1, 5.1, 6.1);
    
    printf("return value for "
           "sum(3, 1.1, 2.5, 13.3)):              %g\n",s);
    printf("return value for "
           "sum(6, 1.1, 2.1, 13.3, 4.1, 5.1, 6.1):%g\n",t);
    
    
    return 0;
}

double sum(int lim,...){
    va_list ap;
    double tot = 0;
    int i;
    va_start(ap, lim);
    for (i = 0; i < lim; i++) {
        tot += va_arg(ap, double);
    }
    va_end(ap);
    return tot;
    
}







