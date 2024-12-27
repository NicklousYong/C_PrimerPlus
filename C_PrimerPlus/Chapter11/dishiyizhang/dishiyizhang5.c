//
//  dishiyizhang5.c
//  Chapter11
//
//  Created by mingyue on 15/11/2.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>


int main(int argc, const char* argv[]){

    char line[8];
//    while (gets(line)) {//不存储输入的换行符
//        puts(line);//自动添加换行符
//        //fputs(line, stdout);//不自动添加换行符
//    }
    
    while (fgets(line, 81, stdin)) {//存储输入的换行符
        fputs(line, stdout);
        //puts(line);
    }
    
    return 0;
}
