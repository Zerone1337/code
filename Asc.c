#include<stdio.h>

void splitarray(int* arr[],int size,int A[],int *size1,int A1[],int *size2,int index){
   // int item;
   *size1=index;
   *size2=size-index;
    for (int i=0;i< *size1;i++){
        int size=sizeof(*arr)/sizeof(arr[0]);
       arr[i]=&A[i];
        int I();
        }
        for(int i=0;i<*size2;i++){
            arr[i]=&A1[i];
        int I1();//I1 for inscending the A1 array
       
        }}
      
        //I for inscending the A1 array
        int I(int size1,int *A[]){
            int i=0;
                
                 for (int i=0;i<size1;i++){  int *item;
                 for (int j=1;j<size1;j++)
           
            {
            if( A[i]>A[j]){
               *A[i] =item;
                A[i]=A[j];
                *A[j]=item;
                
            }
        
             
            }
                                            }
                   return A[i];     }
        int I1(int size2,int *A1[]){
             int i=0;
             int *item=&A1[0];
             for (int i=0;i<*size2;i++){
                for(int j=1;j<*size2;j++){
                    
                    if( A1[i]>A1[j]){
                                 *item=A1[i];
                                 A1[i]=A1[j];
                                 A1[j]=*item;}
                }
                            printf("%d",A1[i]);
                             }
                                    return A1[i];   }
    
    int size;
    int main(){
        int arr[]={6,5,9,45,2,4};
        int size=sizeof(arr)/sizeof(arr[0]);
        
        int I1();
        //printf("%d",A[i]);
        return 0;
    }
