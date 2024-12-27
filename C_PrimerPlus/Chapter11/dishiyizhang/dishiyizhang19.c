//
//  dishiyizhang19.c
//  Chapter11
//
//  Created by mingyue on 15/11/3.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>


int main(void){

    char note[] = "See you at the snack bar.";
    char * ptr;
    
    ptr = note;
    puts(ptr);
    puts(++ptr);
    note[7] = '\0';
    puts(note);
    puts(++ptr);
    return 0;


}
