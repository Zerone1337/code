#include<stdio.h>
#include<stdlib.h>

int insert(struct theTree*,int,int*);
//void struct theTree(struct theTree*);

typedef struct theTree(){
    //struct theTree *root;
    int data;
    struct theTree *left;
    struct theTree *right;
}theTree;

//we need to generate a "Node" that follow theTree template to make work with a "ptr" variable that play theTree->data roll
struct theTree *newNode(){
    theTree *ptr=(theTree*)malloc(sizeof(theTree));//we nned to locate a ptr as Node from theTree structure in order to work with theTre structure.

    if (theTree *ptr==NULL) return 1;
    else{
//struct theTree *Node->root=ptr;
int Data;
theTree *ptr->data=Data;
theTree *ptr->right=NULL;
theTree *ptr->left=NULL;
return Data;
}
    }  //so what is the utility of this function?
       //we need this function to put each element int there a node in the (tree=theTree).
int insert(struct theTree* newNode,int hajm,int *Array);
 // struct  theTree Node;
    if(Node==NULL){
        printf("we don't have enough storage to work ");
    }
    else{
        for(int i=0;i<hajm;i++){
         ptr->data=array[0];
         if(i%2=0) ptr->left->data=Array[i];
         else ptr->right->data=Array[i];
            
    }
        
    }





int main(){
    int Array[12]={3,4,5,6,32,12,43};
    int hajm=sizeof(Array)/sizeof(Array[0]);
}
//int represent(int *ptr){}
//void balTree(struct theTree *ptr){
    //void rotation(ptr);
    //if((ptr->left->data!=NULL&&ptr->right!=NULL)&&(ptr->left->data==NULL&&ptr->right->data!=NULL)){}         }
        
   
//we need "rotation" faunction to determine the next root in each height.
void rotation(struct theTree *ptr){
     if((ptr->left->data!=NULL&&ptr->right!=NULL)&&(ptr->left->data==NULL&&ptr->right->data!=NULL)){
      
        ptr->left->right = ptr->left->left->right;
        ptr->left->right=ptr->root;
        ptr->root=ptr->left->right;
        return ptr;
        }
}
//what happen to storage we generate a struct?

Explain
