/*
 * Queue.c
 *
 *  Created on: Mar 22, 2019
 *      Author: WINNGUYEN
 */
#include "Queue.h"


void createQueue(struct Queue *Q)
{
    (*Q).front = -1;
    (*Q).rear = -1;
}
bool isEmpty(struct Queue Q)
{
    return Q.front == Q.rear;
}
bool isFull(struct Queue Q)
{
    return Q.rear == MAX_QUEUE_SIZE-1;
}
//bool isRemain(Queue);
int enqueue(struct Queue *Q, uint8_t data)
{
    if(isFull(*Q)) return false;
    else
    {
        if( data > 0x7F ) return error;
        else
        {
            (*Q).rear = ((*Q).rear+1)%MAX_QUEUE_SIZE;
            (*Q).item[(*Q).rear] = data;
            return true;
        }
    }
}
int dequeue(struct Queue *Q, uint8_t *data)
{
    if(isEmpty(*Q)) return false;
    else
    {
        (*Q).front = ((*Q).front +1)%MAX_QUEUE_SIZE;
        *data =  (*Q).item[(*Q).front];
        if( *data > 0x7F ) return error;
        else return true;
    }
}
