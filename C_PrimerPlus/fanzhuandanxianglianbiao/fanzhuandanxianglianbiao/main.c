//
//  main.c
//  fanzhuandanxianglianbiao
//
//  Created by mingyue on 16/2/27.
//  Copyright © 2016年 Gi. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct list{
    int no;
    struct list *pNext;
}list;

list * listinit(int count){
    list * pHead;
    list * pList;
    int no = 0;
    pHead = malloc(sizeof(list));
    pHead->no = no;
    pList = pHead;
    while (count--) {
        pList->pNext = malloc(sizeof(list));
        pList = pList->pNext;
        pList->no = ++no;
    }
    
    pList->pNext = NULL;
    return pHead;
}

void listrelease(list *pHead){
    list * pList = pHead;
    list * pNext;
    while (pList != NULL) {
        pNext = pList->pNext;
        free(pList);
        pList = pNext;
    }
}

list * listreverse(list *pHead){
    list * pList = pHead;
    list * paPre = NULL;
    list * paNext = NULL;
    do {
        paNext = pList->pNext;
        pList->pNext = paPre;
        paPre = pList;
        pList = paNext;
    } while (pList != NULL);
    return paPre;
}

list * listreverse1(list * pHead){
    list * p1, * p2, * p3;
    if (pHead == NULL) {
        return pHead;
    }
    p1 = pHead;
    p2 = p1->pNext;
    while (p2) {
        p3 = p2->pNext;
        p2->pNext = p1;
        p1 = p2;
        p2 = p3;
    }
    pHead->pNext = NULL;
    pHead = p1;
    return pHead;
    
}

list * listreverse2(list * pHead){
    list *p, *q;
    p = pHead->pNext;
    while (p->pNext != NULL) {
        q = p->pNext;
        p->pNext = q->pNext;
        q->pNext = pHead->pNext;
        pHead->pNext = q;
    }
    p->pNext = pHead;
    pHead = p->pNext->pNext;
    p->pNext->pNext = NULL;
    return pHead;
}

void listshow(list *pHead){
    list * pList = pHead;
    while (pList != NULL) {
        printf("list = %d\n",pList->no);
        pList = pList->pNext;
    }
}





int main(int argc, const char * argv[]) {
    
    list *pHead = listinit(10);
    printf("before reverse:\n");
    listshow(pHead);
    
    //pHead = listreverse(pHead);
    //pHead = listreverse1(pHead);
    pHead = listreverse2(pHead);
    printf("after reverse:\n");
    listshow(pHead);
    
    listreverse(pHead);
    
    
    return 0;
}
