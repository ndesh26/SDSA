#include <stdio.h>

#include "sort.h"

int main() {
    int a[] = {142, 245, 125, 425, 249, 148, 112, 545, 2122, 4124};
    int i;
    radixSort(a, 10, 4);
    for(i = 0; i < 10; i++) printf("%d ",a[i]);
    printf("\n");
    return 0;
}
