//
//  dishiyizhang22.c
//  Chapter11
//
//  Created by mingyue on 15/11/3.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>
#include <string.h>

char* Strcpy(char *s1,const char* s2){
    while (*s1++ = *s2++);
    return s1;
}


int main(){
    
    char str[20] = {0};
    //str[0] = 'A';
    printf("%s\n",str);
    char *str3 = "abcdef";
    //    str3[0]='A';
    
        char *ps = str3;
    //str = str3;
    
    // strcpy(str, str3);
    Strcpy(str, str3);
    printf("%s\n",str3);
    printf("%s\n",str);
    return 0;
    
}
