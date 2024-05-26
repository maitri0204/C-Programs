#include<stdio.h>

void Insertion_sort(int arr[], int n){
    for(int i=0;i<n;i++){
        int pivot = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] > pivot){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = pivot;
    }
}

int main(){
    int arr[] = {5,4,10,1,6,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Initial array: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    Insertion_sort(arr,n);
    printf("\n Sorted array: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}