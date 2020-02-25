//
//  dishiliuzhang2.c
//  dishiliuzhang
//
//  Created by mingyue on 15/11/27.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>

#define PSQR(x) printf("The square of " #x " is %d.\n",((x)*(x)));

int main(int argc, const char* argv[]){
    int y = 5;
    PSQR(y);
    PSQR(2 + 4);
    return 0;
}
