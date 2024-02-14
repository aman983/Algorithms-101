#include<stdio.h>
#include<stdlib.h>

typedef struct list{
    char c;
    struct list *next;
}list;


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

void free_list(list *head){
    while(head != NULL){
        list *tmp = head;
        head = head->next;
        free(tmp);
    }
}

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