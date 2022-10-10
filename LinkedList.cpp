//Linkedlist program by Deepak Khatri


#include <bits/stdc++.h>
using namespace std;
struct Node {
   int value;
   Node* next;
};
struct Node* newNode(int value) {
   Node* node = new Node;
   node->value = value;
   node->next = NULL;
   return node;
}
void insertNewNode(Node** root, int value) {
   Node* node = newNode(value);
   Node* flag;
   if (*root == NULL) {
      *root = node;
   }
   else {
      flag = *root;
      while (flag->next != NULL) {
         flag = flag->next;
      }
      flag->next = node;
   }
}
void printLinkedList(Node* root) {
   while (root != NULL) {
      cout << root->value << " -> ";
      root = root->next;
   }
   cout << "NULL" << endl;
}
Node* createLinkedList(int arr[], int n) {
   Node *root = NULL;
   for (int i = 0; i < n; i++) {
      insertNewNode(&root, arr[i]);
   }
   return root;
}
int main() {
   int arr[] = { 12,13,14,15,16 }, n = 5;
   Node* root = createLinkedList(arr, n);
   printLinkedList(root);
   return 0;
}
