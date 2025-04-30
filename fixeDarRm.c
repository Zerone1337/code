#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[]={5,1,4,43,23,21,5,54};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
             int temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;   
            }
            
        }
    }
    printf("sorted array:");
    for (int x;x<size;x++)
    {
    printf(" %d ",arr[x]);}
    printf("\n");
return 0;}

