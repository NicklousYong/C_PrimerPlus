//
//  dishiliuzhang6.c
//  dishiliuzhang
//
//  Created by mingyue on 15/11/30.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>
void why_me();

int main(int argc, const char * argv[]){
    
    printf("The file is %s.\n",__FILE__);
    printf("The date is %s.\n",__DATE__);
    printf("The time is %s.\n",__TIME__);
    printf("The version is %ld.\n",__STDC_VERSION__);
    printf("This is line %d.\n",__LINE__);
    printf("This function is %s.\n",__func__);
    why_me();
    
    return 0;
}

void why_me(){
    printf("This function is %s.\n",__func__);
    printf("This si line %d.\n",__LINE__);
}
