#include<stdio.h>

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int Partition(int arr[], int low, int high){
    int i = (low-1);
    int pivot = arr[high];

    for (int j = low; j < high ; j++){
        if (arr[j]<= pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
        
    }
    swap(&arr[i+1], &arr[high]);
    return i+1;
}

void QuickSort(int arr[],int low,int high){
    if(low<high){
        int pi = Partition (arr, low, high);
        QuickSort(arr,low,pi-1);
        QuickSort(arr,pi+1,high);

    }
}

void printArray(int array[],int size){
   
    for(int k = 0 ; k<size ; k++){
        printf("%d ", array[k]);
    }
    printf("\n");
}


//main 

int main(){
   
    int toSort[] = {2, 5, 6 ,1, 9, 10, 12, 8};
    int size = sizeof(toSort)/sizeof(toSort[0]);
    QuickSort(toSort,0,size);
    printf("Sorted array in ascending order: ");
    printArray(toSort, size);
}
