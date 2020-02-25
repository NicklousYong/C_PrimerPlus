//
//  dishiyizhang1.c
//  dishiyizhang
//
//  Created by mingyue on 15/10/29.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>


int main(int argc, const char* argv[]){

    printf("%s, %p, %c\n","We","are",*"space farers");
    
    char * mesg = "Don't be a fool";
    char * copy;
    
    copy = mesg;
    printf("%s\n",copy);
    printf("mesg = %s, &mesg = %p:value = %p\n",mesg,&mesg,mesg);
    printf("copy = %s, &copy = %p:value = %p\n",copy,&copy,copy);
    
    //char * p1 = "Klingon";
    const char * p1 = "Klingon";
    //p1[0] = 'F';
    printf("Klingon");
    printf(":Beware the %s!\n","Klingon");
    
    return 0;
}
