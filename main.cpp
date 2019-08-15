#include <iostream>
using namespace std

struct BSTNode{
  int data;
  struct BSTNode* left;
  struct BSTNode* right;
};


BSTNode* FindMind(BSTNode** root){
  if(root == NULL){
    cout << "Tree is empty\n";
    return -1;
  }
  
  else if (root->left == NULL){
    return root->data;
  }
  
  return FindMin(root->left);
}
