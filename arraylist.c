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
  if(l->size == l->capacity)
  {
      l->capacity *=2;
      l->data= (void**)realloc(l->data,l->capacity * sizeof(void**));
  }
  l->data[l->size] = data;
 
  l->size++;
  
  
}

void push(ArrayList * l, void * data, int i){
  if(i>l->size) return;
  if(l->size == l->capacity)
  {
    l->capacity *=2;
    l->data= (void**)realloc(l->data,l->capacity * sizeof(void**));
  }
  for(int k = l->size ; k > i ; k--)
    {
      l->data[k] = l->data[k-1];
    }
  l->data[i] = data;
  l->size++;

}

void* pop(ArrayList * l, int i){
    return NULL;
}

void* get(ArrayList * l, int i){
  if(i >= l->size) return NULL;
  if(i < 0){
    i = i + l->size;
  }
    return l->data[i];
}

int get_size(ArrayList * l){
    return l->size;
}

//remove elements
void clean(ArrayList * l){
    
}
