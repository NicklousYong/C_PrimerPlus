//
//  dishierzhang2.c
//  dishierzhang
//
//  Created by mingyue on 15/11/4.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>

void trystat(void);

int main(int argc, const char* argv[]){

    int count;
    for (count = 1; count <= 3; count++) {
        printf("Here comes iteration %d:\n",count);
        trystat();
    }

    return 0;
}

void trystat(void){

    int fade = 1;
    static int stay = 1;
    
    printf("fade = %d and stay = %d\n",fade++,stay++);

}








