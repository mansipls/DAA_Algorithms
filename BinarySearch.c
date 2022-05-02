#include<stdio.h>

int BinarySearch(int arr[], int l,int r, int key){
   int mid = (r-l+1)/2;
   if(arr[mid]==  key){
       return mid;
   }
   else if(arr[mid]> key){
       BinarySearch(arr, l,  mid, key);
   }
   else if(key> arr[mid])
        BinarySearch(arr, mid+1, r, key);

    else
        return 0;
}

int main(){
    int arr[] = {1,3,4,5,6,7,8,9,11,13};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("%d",BinarySearch(arr,0,size, 5));

}