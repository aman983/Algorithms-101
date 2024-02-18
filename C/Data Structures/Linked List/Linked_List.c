#include<stdio.h>
#include<stdlib.h>


/*
Pictorial Representation of linked list
  _______         _______         _______         ______
 |       |       |       |       |       |       |      |
 | Node 1|  -->  | Node 2|  -->  | Node 3|  -->  | NULL | 
 |_______|       |_______|       |_______|       |______|
*/

/* 
@breif This is a Structure for Linked list
     * stores a char value -> 1 byte / 8 bits
     * next is a struct pointer used to point to next element in list
*/
typedef struct list{
    char c;
    struct list *next;
}list;


/*
@breif This is a function to initially create a linked list of provided lenght
@params length -> The number of elements to be created in linked list
@return head pointer of Linked List 
*/
list *create_list(int length){
    list *head = NULL;
    list *tail = NULL;

    for(int i=0; i<length; i++){
        list *new_node = malloc(sizeof(list));
        new_node->next = NULL;
        if(head == NULL){
            head = new_node;
            tail = new_node;
        }else{
            //set previos tail next ptr to next node
            tail->next = new_node;

            //set the old tail node to new node
            tail = new_node;
        }
    }
    return head;
}


/*
@breif This is a function used to free the memory allocated to the created linked list
      * Traverse list until the next pointer reached NUll and free the previous
@params head -> head pointer of the linked lisr
@return Void
*/
void free_list(list *head){
    while(head != NULL){
        list *tmp = head;
        head = head->next;
        free(tmp);
    }
}


/*
@breif This is a function to initially create a linked list of provided lenght
@params head -> head pointer of the linked list
@params index -> index at which data to be written
@params data -> character data that needs to be written
@return void
*/
void push_data(list *head, int index, char data){
    list *temp = head;
    if(temp == NULL){
        printf("Empty list");
    }
    for(int i=0; i< index && temp != NULL; i++){
            temp = temp->next;
    }

    if(temp == NULL){
        printf("index out of bounds");
        return;
    }
    temp->c = data;
}


int main(){

    
    list *l = create_list(10);
    list *temp = l;

    push_data(l, 2, 'A');
    push_data(l, 3, 'B');
    push_data(l, 1, 'C');
    while(temp != NULL) {
        printf("%c ", temp->c);
        temp = temp->next;
    }
    free_list(l);
    return 0;
}
