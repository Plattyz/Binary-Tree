#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
  struct node *left, *right;
};
typedef struct node n;

n * root;
void print(n * n1){
if(n1 != NULL){
print(n1->left);
printf(" %d ", n1->data);
print(n1->right);
}
}
void inode(int d, n ** n1){
  n *tmp = (n *) malloc(sizeof(n));
  tmp -> data=d;
  tmp -> right=NULL;
  tmp -> left=NULL;
  if(*n1== NULL){
    *n1=tmp;
  }
  else {
    if(d <= ((*n1)->data)){
inode(d, &(*n1) -> left);
    }
    else{
      inode(d, &(*n1) -> right);
    }
  }
}
int main(void){
inode(102,& root);
inode(7847, & root);
inode(8523, & root);
inode(776, & root);
inode(102843, & root);
print(root);
}
