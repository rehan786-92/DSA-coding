#include <stdio.h>
#include <stdlib.h>
struct node
{
   int data;
   struct node *left;
   struct node *right;
};
struct node *bstcreate(int data)
{
   struct node *n;
   n = (struct node *)malloc(sizeof(struct node));
   n->data = data;
   n->left = NULL;
   n->right = NULL;
   return n;
}
struct node *insert(struct node *root, int data)
{
   if (root == NULL)
   {
      return bstcreate(data);
   }
   if (data < root->data)
   {
      root->left = insert(root->left, data);
   }
   else if (data > root->data)
   {
      root->right = insert(root->right, data);
   }
   return root;
}
void inorder(struct node *root)
{
   if (root != NULL)
   {
      inorder(root->left);
      printf("%d ", root->data);
      inorder(root->right);
   }
}

int main()
{
   struct node *root = NULL;
   int m, value;
   printf("Enter the total element in tree: ");
   scanf("%d", &m);
   printf("Enter rhe values:");
   for (int i = 0; i < m; i++)
   {
      
      scanf("%d", &value);
      root = insert(root, value);
   }
   printf("\n Inorder inversal trees:");
   inorder(root);
   return 0;
}
