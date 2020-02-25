//
//  dijiuzhang1.c
//  dijiuzhang
//
//  Created by mingyue on 15/10/27.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>

void up_and_down(int);

int main(int argc, const char* argv[]){

    up_and_down(1);
    
    return 0;
}


void up_and_down(int n){

    printf("Level %d:n location %p\n",n,&n);
    if (n < 4) {
        up_and_down(n + 1);
    }
    printf("Level %d: n location %p\n",n, &n);
}
