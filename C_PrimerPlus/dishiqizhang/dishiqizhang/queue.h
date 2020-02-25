//
//  queue.h
//  dishiqizhang
//
//  Created by mingyue on 15/12/3.
//  Copyright © 2015年 G. All rights reserved.
//

#ifndef queue_h
#define queue_h

#include <stdio.h>
#include <stdbool.h>

typedef int Item;

#define MAXQUEUE 10

typedef struct node{
    Item item;
    struct node * next;
}Node;

typedef struct queue{
    Node * front; /*指向队列首的指针*/
    Node * rear; /*指向队列尾的指针*/
    int items;   /*队列中项目的个数*/
}Queue;

/*
 操作：初始化队列
 操作前：pq指向一个队列
 操作后：该队列被初始化为空队列
 */
void IntializeQueue(Queue * pq);

/*
 操作：检查队列是否已满
 操作前：pq指向一个队列
 操作后：该队列被初始化为空队列
 */

bool QueueIsFull(const Queue * pq);

/*
 操作：检查队列是否为空
 操作前：pq指向一个先前已初始化过的队列
 操作后：如果该队列为空，则返回True,否则返回False
 */

bool QueueIsEmpty(const Queue * pq);

/*
 操作：确定队列中项目的个数
 操作前：pq指向一个先前已初始化过的队列
 操作后：返回队列中项目的个数
 */

int QueueItemCount(const Queue * pq);

/*
 操作：向队尾添加项目
 操作前：pq指向一个先前已初始化过的队列，item是要添加到队尾端的项目
 操作后：如果队列未满，item被添加到队列尾部,函数返回True，否则不改变队列，函数返回False
 */

bool EnQueue(Item item, Queue * pq);

/*
 操作：从队列首端删除项目
 操作前：pq指向一个先前已初始化过的队列
 操作后：如果队列非空，队列首端的项目被复制到*pitem,并被从队列中删除，函数返回True,如果这个操作使队列为空，把队列重置为空队列，如果队列初始时为空，不改变队列，函数返回False
 */

bool Dequeue(Item * pitem, Queue * pq);

/*
 操作：清空队列
 操作前：pq指向一个先前已初始化过的队列
 操作后：队列被清空
 */

void EmptyTheQueue(Queue * pq);




#endif /* queue_h */
