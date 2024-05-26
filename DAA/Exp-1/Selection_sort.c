#include<stdio.h>

void swap(int *num1, int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp; 
}

void Selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){     
        int k = i;          
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[k]){
                k = j;
            }
            swap(&arr[k],&arr[i]);
        }
    }
}

int main(){
    int arr[] = {7,4,10,8,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Initial array: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    Selection_sort(arr,n);
    printf("\n Sorted array: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
