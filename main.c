#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = malloc(sizeof(int));
    *p = 5;
    printf("%d", *p);
    free(p);
    p = NULL;
    free(p);
    return 0;
}
