//
//  main.c
//  dishierzhang
//
//  Created by mingyue on 15/11/4.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int x = 30;
    printf("x in other block:%d\n",x);
    
    {
        int x = 77;
        printf("x in inner block:%d\n",x);
    }
    printf("x in outer block:%d\n",x);
    while (x++ < 33) {
        int x = 100;
        x++;
        printf("x in while loop:%d\n",x);
    }
    printf("x in outer block:%d\n",x);
    return 0;
}
