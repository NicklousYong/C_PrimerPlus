//
//  dishiliuzhang10.c
//  dishiliuzhang
//
//  Created by mingyue on 15/12/1.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <assert.h>

int main(int argc, const char * argv[]){

    double x, y, z;
    puts("Enter a pair of numbers(0 0 to quit):");
    while (scanf("%1lf%1lf",&x, &y) == 2 && (x != 0 || y != 0)) {
        z = x * x - y * y;
        assert(z >= 0);
//        if (z < 0) {
//            puts("z less than 0");
//            abort();
//        }
        printf("answer is %f\n",sqrt(z));
        puts("Next pair of numbers:");
    }
    puts("Done");
    return 0;
}
