#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Dynamic array to hold all filepath strings of an album directory
typedef struct {
  char **array;
  size_t used;
  size_t size;
} Array;

void initArray(Array *a, size_t initialSize) {
  a->array = malloc(initialSize * sizeof(char *));
  a->used = 0;
  a->size = initialSize;
}

void insertArray(Array *a, char *filepath) {
  if (a->used == a->size) {
    a->size *= 2;
    a->array = realloc(a->array, a->size * sizeof(char *));
  }
  a->array[a->used++] = strdup(filepath); // copy the entire filepath string
}

void freeArray(Array *a) {
  if (a->array != NULL) {
    for (size_t i = 0; i < a->used; i++) {
      free(a->array[i]); 
    }
    free(a->array);
  }
  a->array = NULL;
  a->used = a->size = 0;
}

char *toString(Array *a) {
  char *str = malloc(4086 * sizeof(char));
  str[0] = '\0';
  for (size_t i = 0; i < a->used; i++) {
    if(i > 0) {
      strcat(str, ", ");
    }
    strcat(str, a->array[i]);
  }
  return str;
}