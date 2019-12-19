#include<stdio.h>
#include<stdlib.h>
struct tree
{
   int info;
   struct tree *left;
   struct tree *right;
};
struct tree *root =NULL;
struct tree *maketree(int x)
{
  struct tree *p;
  p=(struct tree *)malloc(sizeof(struct tree));
  p->info=x;
  p->left=NULL;
  p->right=NULL;
  return p;
}
void bst(int x)
{
  struct tree *p,*q;
  if(root==NULL)
  root = maketree(x);
  else
  { p=q=root;
    while(q!=NULL)
    {
     p=q;
     if(p->info>x)
       q=p->left;
       else
       q=p->right;
    }
    if(p->info<=x)
    setright(p,x);
    else
    setleft(p,x);
    }}   

void setleft(struct tree *p, int x)
{
  if(p==NULL)
  printf("void insertion\n");
  if(p->left!=NULL)
  printf("viod insertion\n");
  else 
  p->left=maketree(x);
}
void setright(struct tree *p, int x)
{
  if(p==NULL)
  printf("void insertion\n");
  if(p->right!=NULL)
  printf("viod insertion\n");
  else 
  p->right=maketree(x);
}      
void preorder(struct tree *p)
{
    if(p!=NULL)
    {
       printf("%d",p->info);
       preorder(p->left);
       preorder(p->right);
     }
 }  
 void inorder(struct tree *p)
{
    if(p!=NULL)
    { inorder(p->left);
       printf("%d",p->info);
      
       inorder(p->right);
     }
 } 
 void postorder(struct tree *p)
{
    if(p!=NULL)
    {
       
       postorder(p->left);
       postorder(p->right);
       printf("%d",p->info);
     }
 }      
void main()
{
   int ch,x;
   while(1)
   { 
   printf("enter the choice\n");
   scanf("%d", &ch);
  
   
     switch(ch)
     {     case 1:  printf("enter the element \n");
                     scanf("%d",&x);  
                     bst(x);  
             case 2:if(root==NULL)
             printf("does not exist");
             inorder(root);
                     break;
         case 3:if(root==NULL)
             printf("does not exist");
             preorder(root); 
                     break;   
         default : printf("invalid choice");
      }
      }
      }                        
                     
