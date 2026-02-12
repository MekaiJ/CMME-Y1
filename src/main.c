#include <stdio.h>
#include <stdlib.h>
#include "audioList.h"

int main() {
    Array a;
    initArray(&a, 5);
    insertArray(&a, "str1");
    insertArray(&a, "str2");
    insertArray(&a, "str3");
    insertArray(&a, "str4");
    insertArray(&a, "str5");
    insertArray(&a, "str6");
    insertArray(&a, "str7");
    char *listStr = toString(&a);
    printf("%s\n", listStr);
    free(listStr); // free the memory taken up by the string in toString
}
