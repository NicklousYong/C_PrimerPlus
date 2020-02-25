//
//  dishisanzhang1.c
//  dishisanzhang
//
//  Created by mingyue on 15/11/9.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#define MAX1 40


int main(int argc, const char* argv[]){

    FILE* fp;
    char words[MAX1];
    
    if ((fp = fopen("words", "a+")) == NULL) {
        fprintf(stdout, "Can't open \"words\" file.\n");
        exit(1);
    }
    
    puts("Enter words to add to the file: press the enter");
    puts("key at the beginning of a line to terminate.");
    while (gets(words) != NULL && words[0] != '\0') {
        fprintf(fp, "%s ",words);
    }
    puts("File contents:");
    rewind(fp);// 回到文件起始处
    while (fscanf(fp, "%s",words) == 1) {
        puts(words);
    }
    if (fclose(fp) != 0) {
        fprintf(stderr, "Error closing file\n");
    }

    return 0;
}
