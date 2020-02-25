//
//  dishisanzhang2.c
//  dishisanzhang
//
//  Created by mingyue on 15/11/9.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>
#define MAXLINE 20


int main(int argc, const char* argv[]){

    char line[MAXLINE];
    
    while (fgets(line, MAXLINE, stdin) != NULL && line[0] != '\n') {
        
        fputs(line, stdout);
        
    }

    return 0;
}
