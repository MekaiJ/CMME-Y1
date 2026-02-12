#pragma once

typedef struct {
  char **array;
  size_t used;
  size_t size;
} Array;

void initArray(Array *a, size_t initialSize);
void insertArray(Array *a, char *filepath);
void freeArray(Array *a);
char *toString(Array *a);


