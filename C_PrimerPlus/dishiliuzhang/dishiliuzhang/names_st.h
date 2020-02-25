//
//  names_st.h
//  dishiliuzhang
//
//  Created by mingyue on 15/11/30.
//  Copyright © 2015年 G. All rights reserved.
//

#ifndef names_st_h
#define names_st_h

#include <stdio.h>

#define SLEN 32

struct names_st{
    char first[SLEN];
    char last[SLEN];
};

typedef struct names_st names;

void get_names(names *);
void show_names(const names *);







#endif /* names_st_h */
