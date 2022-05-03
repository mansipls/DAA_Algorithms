#include <stdio.h>

void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void BubbleSort(int array[], int size){
    
    for(int i = 0; i<size;i++){
        for(int j = i+1;j<=size;j++){
            if(array[j] < array[i]){
                swap(&array[i], &array[j]);
            }
        }
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

    BubbleSort(toSort,size);
    printf("Sorted array in ascending order: ");
    printArray(toSort, size);
}