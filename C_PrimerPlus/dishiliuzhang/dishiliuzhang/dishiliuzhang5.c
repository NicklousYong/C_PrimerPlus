//
//  dishiliuzhang5.c
//  dishiliuzhang
//
//  Created by mingyue on 15/11/30.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>
#include "names_st.h"
#include "names_st.h"

int main(int argc, const char* argv[]){
    
    names candidate;
    get_names(&candidate);
    printf("Let's welcome ");
    show_names(&candidate);
    printf(" to this program!\n");
    
    return 0;
}
