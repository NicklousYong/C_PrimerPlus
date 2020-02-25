//
//  main.c
//  dijiuzhang
//
//  Created by mingyue on 15/10/26.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>

#define NAME "GIGATHINK,INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40

void starbar(void);

int main(int argc, const char * argv[]) {
    
    starbar();
    printf("%s\n",NAME);
    printf("%s\n",ADDRESS);
    printf("%s\n",PLACE);
    starbar();
    
    return 0;
}

void starbar(void){

    int count;
    for (count = 1; count <= WIDTH; count++) {
        putchar('*');
    }
    putchar('\n');
}
