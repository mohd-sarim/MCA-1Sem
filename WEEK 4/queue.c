#include<stdio.h>
#define MAX 100

int queue[MAX];
int front = -1, rear = -1;
 
 void enqueue(int value){
 	if(rear == MAX-1){
 		printf("queue is overflow!\n");
 		return;
	 }
	 if(front==-1)
	    front = 0;
	    
	    queue[++rear] = value;
	    printf("%d element is inserted in the queue",value);
	    
 }
