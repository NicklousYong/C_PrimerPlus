//
//  main.c
//  dishisanzhang
//
//  Created by mingyue on 15/11/9.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 40



int main(int argc, const char * argv[]) {
    
    FILE* in,* out;
    int ch;
    char name[LEN];
    int count = 0;
    
    //检查命令行参数
    if (argc < 2) {
        fprintf(stderr, "Usage: %s filename\n", argv[0]);
        exit(1);
    }
    
    //实现文件输入
    if ((in = fopen(argv[1], "r"))) {
        fprintf(stderr, "I couldn't open the file \"%s\"\n",argv[1]);
        exit(2);
    }
    
    //实现输出
    while ((ch = getc(in) != EOF)) {
        if (count++ % 3 == 0) {
            putc(ch, out);
        }
    }
    
    //收尾工作
    if (fclose(in) != 0 || fclose(out) != 0) {
        fprintf(stderr, "Error in closing files\n");
    }
    
    
    
    return 0;
}
