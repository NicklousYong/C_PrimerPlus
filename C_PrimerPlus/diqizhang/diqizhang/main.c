//
//  main.c
//  diqizhang
//
//  Created by mingyue on 15/10/23.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    const int FREEZING = 0;
    float temperature;
    int cold_days = 0;
    int all_days = 0;
    
    printf("Enter the list of daily low tempeatures.\n");
    printf("Use Celsius, and enter q to quit.\n");
    
    while (scanf("%f",&temperature) == 1) {
        
        all_days++;
        if (temperature < FREEZING) {
            cold_days++;
        }
        
    }
    
    if (all_days != 0) {
        printf("%d days total:%.1f%% were below freezing.\n",all_days,100.0*(float)cold_days/all_days);
    }
    if (all_days == 0) {
        printf("No data entered!\n");
    }
    
    
    
    
    
    
    return 0;
}
