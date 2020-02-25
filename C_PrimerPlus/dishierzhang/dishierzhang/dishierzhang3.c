//
//  dishierzhang3.c
//  dishierzhang
//
//  Created by mingyue on 15/11/4.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>

//extern int tern;

int units = 0;
void critic(void);

int main(int argc, const char* argv[]){

    extern int units;
    
    printf("How many pounds to a firkin of butter?\n");
    scanf("%d",&units);
    while (units != 56) {
        critic();
    }
    printf("You must have looked it up!\n");
    

    return 0;
}

void critic(void){

    printf("No luck, chummy. Try again.\n");
    scanf("%d", &units);

}




