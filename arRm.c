#include<stdio.h>
int main(){ 

 int arr[]={5,1,51,4,61,3};
 int size=sizeof(arr)/sizeof(arr[0]);
for (int i=0 ; i<size ; i++)
 {
    for(int j=1 ; j<size ; j++){
    
    if (arr[i]<arr[j]){
       arr[i]=arr[j];
    
    } 

}
printf(" %d ",arr[i]);

}



return 0;
}