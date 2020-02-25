//
//  diqizhang1.c
//  diqizhang
//
//  Created by mingyue on 15/10/23.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>

#define SPACE ' '

int main(int argc,const char* argv[]){
    
    char ch;
    while (ch != '\n') {
        if (ch == SPACE) {
            putchar(ch);
        }else{
            putchar(ch + 1);
        }
        
        ch = getchar();
    }
    putchar(ch);
    
    char ch1;
    while ((ch1 = getchar()) != '\n') {
        if (isalpha(ch1)) {
            putchar(ch1 + 1);
        }else{
            putchar(ch1);
        }
    }
    
    putchar(ch1);
    
    return 0;
}
