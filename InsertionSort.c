#include<stdio.h>

void InsertionSort(int array[], int size){
     for (int step = 1; step< size; step++){
        int key = array[step];
        int j = step - 1;

        while(key < array[j] && j >=0){
            array[j+1] = array[j];
            --j;
        }
        array[j+1] = key;
     }
}



void printArray(int array[], int size){
    printf("The sorted array is: ");
    for(int k = 0; k<size ;k++ ){
        printf("%d ", array[k]);
    }
    printf("\n");
}


int main(){
    int toSort[] = {2, 5, 6 ,1, 9, 10, 12, 8};
    int size = sizeof(toSort)/sizeof(toSort[0]);

    InsertionSort(toSort,size);
    printf("Sorted array in ascending order: ");
    printArray(toSort, size);
}