//
//  bubble_sort.c
//  fanzhuandanxianglianbiao
//
//  Created by mingyue on 16/5/11.
//  Copyright © 2016年 Gi. All rights reserved.
//

#include <stdio.h>

void Bubble_Sort(int *num, int n);
void Print(int *num, int n);

int main(int argc, const char * argv[]) {

    int num[5] = {3,2,4,5,1};
    
    Bubble_Sort(num, 5);
    
    Print(num, 5);

    return 0;
}

void Print(int *num, int n) {

    int i = 0;
    for (i = 0; i < n; i++) {
        printf("%d ",num[i]);
        //puts("\n");
        
    }

}

void Bubble_Sort(int *num, int n) {

    int i,j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i -1; j++) {
            if (num[j] > num[j + 1]) {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
            
        }
    }

}
