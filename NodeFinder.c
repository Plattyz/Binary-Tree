// Take note that the Node Finder can only works with 1 digit per Node trees.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
int main(){
    void tree(){
inode(2,& root);
inode(1, & root);
inode(4, & root);
inode(5, & root);
inode(3, & root);
print(root);
}
tree();
char a[1000] = {};
fgets(a, sizeof a, stdin);
if (strlen(a) > 2){
     printf("You can only put 1 number!");
    exit(1);
}


    for (int index = 0; index < strlen(root); index++) {
                 if(a[index] == '1' || a[index] == '2' || a[index] == '3' || a[index] == '4' || a[index] == '5') {
            
            printf("%s Has been found in the tree\n", a);
                 }
        else {
            printf("%s Has not been found in the tree\n", a);
        }
}
}
