//
//  dishisanzhang3.c
//  dishisanzhang
//
//  Created by mingyue on 15/11/9.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#define CNTL_Z '032'
#define SLEN 50




int main(int argv, const char* argc[]){

    char file[SLEN];
    char ch;
    FILE * fp;
    long count, last;
    
    puts("Enter the name of the file to be processed: ");
    gets(file);
    
    if ((fp = fopen(file, "rb") == NULL)) {
        printf("reverse can't open %s\n",file);
        exit(1);
    }
    
    fseek(fp, 0L, SEEK_END);
    last = ftell(fp);
    
    for (count = 1L; count <= last; count++) {
        fseek(fp, -count, SEEK_END);
        ch = getc(fp);
        if (ch != CNTL_Z && ch != '\r') {
            putchar(ch);
        }
        if (ch == '\r') {
            putchar(ch);
        }else{
            putchar(ch);
        }
        
    }
    putchar('\n');
    fclose(fp);

    
    return 0;
}
