//
//  names_st.c
//  dishiliuzhang
//
//  Created by mingyue on 15/11/30.
//  Copyright © 2015年 G. All rights reserved.
//

#include "names_st.h"

void get_names(names * pn){
 
    int i;
    //char x[SLEN];
    printf("Please enter your first name:");
    //fgets(x, SLEN, stdin);
    //fputs(x, stdout);
    fgets(pn->first, SLEN, stdin);
    i = 0;
    while (pn->first[i] != '\n' && pn->first[i] != '\0') {
        i++;
    }
    if (pn->first[i] == '\n') {
        pn->first[i] = '\0';
    }else{
        while (getchar() != '\n') {
            continue;
        }
    }

    printf("Please enter your last name:");
    fgets(pn->last, SLEN, stdin);
    i = 0;
    while (pn->last[i] != '\n' && pn->last[i] != '\0') {
        i++;
    }
    if (pn->last[i] == '\n') {
        pn->last[i] = '\0';
    }else{
        while (getchar() != '\n') {
            continue;
        }
    }
    
}
void show_names(const names * pn){
    printf("%s %s",pn->first,pn->last);
}














