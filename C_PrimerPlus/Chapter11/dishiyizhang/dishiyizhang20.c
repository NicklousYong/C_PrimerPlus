//
//  dishiyizhang20.c
//  Chapter11
//
//  Created by mingyue on 15/11/3.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>


int main(int argc, char* argv[]){

    int count;
    printf("The command line has %d arguments:\n",argc - 1);
    
    for (count = 0; count <= argc; count++) {
        printf("%d:%s\n",count,argv[count]);
    }
    printf("\n");
    return 0;
}
