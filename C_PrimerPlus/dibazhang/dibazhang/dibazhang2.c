//
//  dibazhang2.c
//  dibazhang
//
//  Created by mingyue on 15/10/24.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


int main(int argc, const char* argv[]){

    int ch;
    FILE* fp;
    char fname[50];
    
    printf("Enter the name of the file:");
    scanf("%s",fname);
    fp = fopen(fname, "r");
    
    if (fp == NULL) {
        printf("Failed to open file.Bye\n");
        exit(1);
    }
    
    while ((ch = getc(fp)) != EOF) {
        putchar(ch);
    }
    
    fclose(fp);
    
    return 0;
}
