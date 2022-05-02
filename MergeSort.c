
#include<stdio.h>

void printArray(int arr[],int size){
    for(int n=0; n< size; n++){
        printf("%d ", arr[n]);
    }
    printf("\n");
}

void Merge(int arr[],int l, int mid, int r){
    int n1 = mid-l+1;
    int n2 = r - mid;

    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
    L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
    M[j] = arr[mid + 1 + j];

    int i,j,k;
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  // When we run out of elements in either L or M,
  // pick up the remaining elements and put in A[p..r]
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int l, int r) {
  if (l < r) {

    // m is the point where the array is divided into two subarrays
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    // Merge the sorted subarrays
    Merge(arr, l, m, r);
  }
}
int main() {
  int arr[] = {2, 5, 6 ,1, 9, 10, 12, 8};
  int size = sizeof(arr) / sizeof(arr[0]);

  mergeSort(arr, 0, size - 1);

  printf("Sorted array: \n");
  printArray(arr, size);
}