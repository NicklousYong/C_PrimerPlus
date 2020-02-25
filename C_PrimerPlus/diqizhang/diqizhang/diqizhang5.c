//
//  diqizhang5.c
//  diqizhang
//
//  Created by mingyue on 15/10/23.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define STOP '|'

int main(int argc,const char* argv[]){

    char c;
    char prev;
    long n_chars = 0L;
    int n_lines = 0;
    int n_words = 0;
    int p_lines = 0;
    bool inword = false;
    
    printf("Enter text to be analyzed(| to terminate):\n");
    prev = '\n';
    
    while ((c = getchar()) != STOP) {
        
        n_chars++;
        if (c == '\n') {
            n_lines++;
        }
        if (!isspace(c) && !inword) {
            inword = true;
            n_words++;
            
        }
        if (isspace(c) && inword) {
            inword = false;
        }
        
        prev = c;
    }
    
    if (prev != '\n') {
        p_lines = 1;
    }
    
    printf("characters = %ld,words = %d,lines = %d,",n_chars,n_words,n_lines);
    printf("partial lines = %d\n",p_lines);
    
    return 0;
}
