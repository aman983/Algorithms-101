#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Stack Size macro
#define STACK_SIZE 10

/* 
@breif This is a Structure for Stack
     * top -> represents top of the stack initialized as -1 when stack is empty
     * size -> represents size of the stack
     * stack -> array of int elements used to store value
*/
typedef struct {
    int top;
    int size;
    int stack[STACK_SIZE];
}stack_struct;

/*
@breif This is a function to initially create a Stack
@return s pointer to the stack_struct
*/
stack_struct* create_stack(){
    stack_struct* s = malloc(sizeof(stack_struct));    
    s->top = -1;
    s->size = STACK_SIZE;
    return s;
}

/*
@breif This is a function to free the memeory allocated from creating a Stack
@params s -> stack_struct pointer
@return 0
*/
int free_stack(stack_struct *s){
    free(s);
    return 0;
}

/*
@breif This is a function to push an element in the Stack
@params s -> stack_struct pointer
@params val -> value to be pushed on the stack
@return 0 if successful
@return -1 if unsuccessful
*/
int push(stack_struct *s,int val){

    //if top of the stack is less than size of stack then push the element in the stack
    if(s->top < s->size - 1){
        printf("pushing -> %d in stack \n", val);
        s->top += 1;
        s->stack[s->top] = val;
        return 0;
    }
    // return -1 if stack is full
    else{
        printf("stack overflow can not push elements\n");
        return -1;
    }
}

/*
@breif This is a function to check if Stack is empty
@params s -> stack_struct pointer
@return true if stack is empty
@return false if stack is not empty
*/
bool is_empty(stack_struct *s){
    return (s->top == -1) ? true : false;
}

/*
@breif This is a function to check if Stack is full
@params s -> stack_struct pointer
@return true if stack is full
@return false if stack is not full
*/
bool is_full(stack_struct *s){
    return (s->top == s->size-1) ? true : false;
}

/*
@breif This is a function to remove/ pop elements from the Stack 
@params s -> stack_struct pointer
@return ret_val -> popped value from the stack if stack is not empty 
@return -1 if stack is not empty
*/
int pop(stack_struct *s){
    // when stack is not empty then pop the top most element of the stack and decrement the stack top by 1
    if(!is_empty(s)){
        int ret_val = s->stack[s->top];
        s->stack[s->top] = 0;
        s->top--;
        return ret_val;
    }else{
        printf("Stack Underflow: Cannot pop\n");
        return -1;
    }
}

/*
@breif This is a function to peek/get elements from the Stack 
@params s -> stack_struct pointer
@return stack value at current stack top if stack is not empty 
@return 0 if stack is empty
*/
int peek(stack_struct *s){
    if(!is_empty(s)){
        return s->stack[s->top];
    }else{
        printf("\nStack Empty ");
        return 0;
    }
}


int main(void){
    
    stack_struct* stack = create_stack(); //Create a Stack

    for(int i=0 ; i<stack->size; i++){ //fill the stack with the values
        push(stack, i);
    }

    printf("\n Stack view -> ");
    for(int i=0 ; i<stack->size; i++){  // print the values in the stack linearly
        printf("%d ", stack->stack[i]);
    }

    printf("\n Stack poping order -> ");
    while(is_empty(stack) == false){ // pop the value and print them until stack is not empty
        pop(stack);
        printf("%d ",peek(stack));
    }

    free_stack(stack); // lastly and most importantly free the stack as we are using heap memeory
    return 0;
} 
