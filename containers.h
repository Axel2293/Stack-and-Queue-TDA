#ifndef _CONTAINERS_H_
#define _CONTAINERS_H_

#include <stdbool.h>
#include <stddef.h>

//Generic data pointer
typedef void * DATA;

// ========================== STACK
    //Pointer to the stack container
typedef struct stack * Stack;

//Create the stack and initialize
Stack stackCreate(size_t);
//Returns the quantity of elements in the stack
int stackSize(Stack);
//Returns true if the stack is empty, false if has elements
bool stackisEmpty(Stack);
//Returns the data on the top of the stack
DATA stackTop(Stack);
//LIFO structure to add an alement at the top of the stack
void push(Stack, DATA);
//Deletes the element at the top of the stack and returns the data in it
DATA pop(Stack);
//Deallocates the memory used for the stack, also destroys the data insade the elements
void stackDestroy(Stack);



// =========================== QUEUE
    // Pointer to the queue container
typedef struct queue * Queue;

//Create the queue container
Queue queueCreate(size_t);
//Returns the size_t of the queue
int queueSize(Queue);
//Returns true or false depending if the queue is empty
bool queueEmpty(Queue);
//Destroys the que and all the data in it
void queueDestroy(Queue);
//Adds an element to the end of the queue list
void enqueue(Queue, DATA);
//Returns and removes the first element in the queue
DATA dequeue(Queue);
//Consult the first element of the list
DATA peek(Queue);


#endif /*_CONTAINERS_H_*/