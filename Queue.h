/*
 * Queue.h
 *
 *  Created on: Mar 22, 2019
 *      Author: WINNGUYEN
 */

#ifndef QUEUE_H_
#define QUEUE_H_
#include <stdint.h>
#define MAX_QUEUE_SIZE     100
typedef     int     bool;
#define     true    1
#define     false   0
#define     error   -1
typedef uint8_t SIZE_TYPE;
struct Queue
{
    uint8_t item[MAX_QUEUE_SIZE];
    int  rear;
    int front;
};
//typedef struct DEFFAULT_QUEUE Queue;
void createQueue(struct Queue *instance );
bool isEmpty(struct Queue);
bool isFull(struct Queue);
//bool isRemain(Queue);
int enqueue(struct Queue *instance , uint8_t data);
int dequeue(struct Queue *instance, uint8_t *data);





#endif /* QUEUE_H_ */
