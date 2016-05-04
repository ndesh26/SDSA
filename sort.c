#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "sort.h"

#define MAX 1000000

int temp[MAX];

void countSort (int *a, int n, int k) {
    int *count, *place, *temp, i, j;

    count = calloc (k, sizeof (int));
    place = calloc (k, sizeof (int));
    temp = calloc (n, sizeof (int));

    for (i = 0; i < k; i++) count[i] = 0;
    for (i = 0; i < n; i++) count[a[i]]++;
       
    place[0] = count[0];
    
    for (i = 1; i < k; i++) place[i] = place[i-1] + count[i];
    for (i = n-1; i >= 0; i--) {
        temp[place[a[i]]-1] = a[i];
        place[a[i]]--;
    }
    for (i = 0; i < n; i++) a[i] = temp[i];
}

void countSortForRadix (int *a, int n, int k, int p) {
    int *count, *place, *temp, i, j, t = 1;

    count = calloc(k,sizeof(int));
    place = calloc(k,sizeof(int));
    temp = calloc (n, sizeof(int));
    
    for (i = 0; i < k; i++) count[i] = 0;
    for (i = 1; i < p; i++) t = t * 10;
    for (i = 0; i < n; i++) count[(a[i] / t) % 10]++;

    place[0] = count[0];

    for (i = 1; i < k; i++) place[i] = place[i-1] + count[i];
    for (i = n-1; i >= 0; i--) {
        temp[place[(a[i] / t) % 10]-1] = a[i];
        place[(a[i] / t) % 10]--;
    }
    for (i = 0; i < n; i++) a[i] = temp[i];   
}

void radixSort (int *a, int n, int d) {
    int i;

    for (i = 1; i <= d; i++) countSortForRadix (a, n, 10, i);
}

void merge(int *a, int left, int mid, int right){
    int i, m, k, l;
    
    l = left;
    i = left;
    m = mid + 1;
    
    while ((l <= mid) && (m <= right)) {
        if (a[l] <= a[m]) {
            temp[i] = a[l];
            l++; 
        }
        else { 
            temp[i] = a[m]; 
            m++; 
        }
        i++;
    }

    if (l > mid) {
         for (k = m; k <= right; k++) {
             temp[i] = a[k];
             i++;
         }
    }
    
    else {
	for (k = l; k <= mid; k++) {
            temp[i] = a[k];
            i++;
        }
    }

    for (k = left; k <= right; k++) a[k] = temp[k];
}

void mergeSort(int *a, int left, int right) {
    int mid;

    if (left < right) {
	 mid = (left + right) / 2;
         mergeSort (a, left, mid);
         mergeSort (a, mid+1, right);
         merge (a, left, mid, right);
    }
}


