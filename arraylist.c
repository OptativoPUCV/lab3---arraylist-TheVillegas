#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "arraylist.h"

//normal array
typedef struct ArrayList {
    void **data;
    int capacity;
    int size;
} ArrayList;

ArrayList *createList(void) {
  ArrayList *Lista =NULL;
  Lista =(ArrayList *) malloc(sizeof(ArrayList));
  if(Lista == NULL) exit(EXIT_FAILURE);
  Lista->data = (void *)calloc(2,sizeof(void));
  Lista->capacity = 2;
  Lista->size = 0;
  return Lista;
  
  
    return NULL;
}

void append(ArrayList * l, void * data){
  //agregar dato al final osea en size
  l->data[l->size] = data;
  l->capacity++;
  
  
}

void push(ArrayList * l, void * data, int i){

}

void* pop(ArrayList * l, int i){
    return NULL;
}

void* get(ArrayList * l, int i){
    return NULL;
}

int get_size(ArrayList * l){
    return l->size;
}

//remove elements
void clean(ArrayList * l){
    
}