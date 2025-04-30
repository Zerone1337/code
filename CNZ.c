#include<stdio.h>
int abs(int someInteger);
int main(){
    int arr[6]={-4,45,-2,-5,1,-3};
 
    int size=sizeof(arr)/sizeof(arr[0]);
    int closest=arr[0];
    for (int i=1;i<size;i++){
         if (abs(arr[i])<abs(closest)||abs(arr[i])==abs(closest)&&arr[i]>closest)
           {
            closest=arr[i];
          
         }
         printf("\n%d",closest);


    }
    return 0;
}