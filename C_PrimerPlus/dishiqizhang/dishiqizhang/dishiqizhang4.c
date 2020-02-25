//
//  dishiqizhang4.c
//  dishiqizhang
//
//  Created by mingyue on 15/12/3.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>
#include "queue.h"

int main(int argc, const char * argv[]){

    Queue line;
    Item temp;
    char ch;
    
    IntializeQueue(&line);
    puts("Testing the Queue interface.Type a to add a value, ");
    puts("type d to delete a value, and type q to quit. ");
    while ((ch = getchar()) != 'q') {
        if (ch != 'a' && ch != 'd') {
            continue;
        }
        if (ch == 'a') {
            printf("Integer to add: ");
            scanf("%d", &temp);
            if (!QueueIsFull(&line)) {
                printf("Putting %d into queue\n", temp);
                EnQueue(temp, &line);
            }else{
                puts("Queue is full!");
            }
        }else{
            if (QueueIsEmpty(&line)) {
                puts("Nothing to delete!");
            }else{
                printf("temp = %d\n",temp);
                Dequeue(&temp, &line);
                printf("Removing %d from queue\n",temp);
            }
        }
        printf("%d items in queue\n",QueueItemCount(&line));
        puts("Type a to add, d to delete, q to quit: ");
    }
    EmptyTheQueue(&line);
    puts("Bye!");
    
    
    return 0;
}
