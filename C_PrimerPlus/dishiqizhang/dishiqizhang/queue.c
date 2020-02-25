//
//  queue.c
//  dishiqizhang
//
//  Created by mingyue on 15/12/3.
//  Copyright © 2015年 G. All rights reserved.
//

#include "queue.h"
#include <stdlib.h>

static void CopyToNode(Item item, Node * pn);
static void CopyeToItem(Node * pn, Item * pi);

void IntializeQueue(Queue * pq){
    pq->front = pq->rear = NULL;
    pq->items = 0;
}

bool QueueIsFull(const Queue * pq){
    return pq->items == MAXQUEUE;
}

bool QueueIsEmpty(const Queue * pq){
    return pq->items == 0;
}

int QueueItemCount(const Queue * pq){
    return pq->items;
}

bool EnQueue(Item item, Queue * pq){
    Node * pnew;
    if (QueueIsFull(pq)) {
        return false;
    }
    
    pnew = (Node *)malloc(sizeof(Node));
    if (pnew == NULL) {
        fprintf(stderr, "Unable to allocate memory!\n");
        exit(1);
    }
    
    CopyToNode(item, pnew);
    pnew->next = NULL;
    if (QueueIsEmpty(pq)) {
        pq->front = pnew;
    }else{
        pq->rear->next = pnew;
    }
    
    pq->rear = pnew;
    pq->items++;
    return true;
}



bool Dequeue(Item * pitem, Queue * pq){
    Node * pt;
    if (QueueIsEmpty(pq)) {
        return false;
    }
    
    CopyeToItem(pq->front, pitem);
    pt = pq->front;
    pq->front = pq->front->next;
    free(pt);
    pq->items--;
    if (pq->items == 0) {
        pq->rear = NULL;
    }
    
    return true;
}


void EmptyTheQueue(Queue * pq){
    Item dummy;
    while (!QueueIsEmpty(pq)) {
        Dequeue(&dummy, pq);
    }
}



static void CopyToNode(Item item, Node * pn){
    pn->item = item;
}

static void CopyeToItem(Node * pn, Item * pi){
    *pi = pn->item;
}





