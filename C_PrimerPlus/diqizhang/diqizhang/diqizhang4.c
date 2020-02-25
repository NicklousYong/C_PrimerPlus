//
//  diqizhang4.c
//  diqizhang
//
//  Created by mingyue on 15/10/23.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>
#define PERIOD '.'

int main(int argc,const char* argv[]){
    

    int ch;
    int charcount = 0;
    
    while ((ch = getchar()) != PERIOD) {
        if (ch != '"' && ch != '\'') {
            charcount++;
        }
    }
    
    printf("There are %d non-quote characters.\n",charcount);
    
    return 0;
}
