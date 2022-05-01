#include <stdio.h>

//function to swap values

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//selection sort

void SelectionSort(int array[], int size){
    for(int i = 0 ; i<size-1 ; i++){
        int min_idx = i;
        for(int j=i+1 ; j<size ; j++){

            if(array[j] < array[min_idx])
                min_idx = j;
        }
        swap(&array[min_idx],&array[i]);
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
    SelectionSort(toSort,size);
    printf("Sorted array in ascending order: ");
    printArray(toSort, size);
}

