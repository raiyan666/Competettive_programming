/* topic=binary search tree */

#include<stdio.h>
#include<stdlib.h>
#define N 8
struct node{
      int info;
      struct node *left;
      struct node *right;
};
typedef  struct node tnode;
void inOrder(tnode *p)
{
	if(p==NULL)
		return;
	inOrder(p->left);
	printf("%d ", p->info);
	inOrder(p->right);
}
tnode* caseA(tnode *root, tnode *loc, tnode *par)
{
	tnode *child=NULL;
	if(loc->left==NULL && loc->right==NULL)
	     child=NULL;
	else if(loc->left!=NULL)
		 child= loc->left;
	else
		child =loc->right;
	if(par!=NULL)
	{
		if(par->left==loc)
			par->left=child;
		else
			par->right=child;
	}
	else
	{
		root=child;
	}

	return root;
}
tnode* caseB(tnode *root, tnode *loc, tnode *par)
{
	tnode *suc,*parsuc,*ptr,*save;
	ptr=loc->right;
	save=loc;
	while(ptr->left!=NULL)
	{
		save=ptr;
		ptr=ptr->left;
	}
	suc= ptr;
	parsuc = save;

	root = caseA(root,suc,parsuc);
	if(par!=NULL)
	{
		if(par->left==loc)
			par->left = suc;
		else
			par->right=suc;
	}
	else
	{
		root =suc;
	}
	suc->left= loc->left;
	suc->right= loc->right;
	return root;
}
int main()
{
   tnode *root=NULL, *nn;
   tnode *loc=NULL,  *par= NULL;
   tnode *ptr=NULL, *save=NULL;
   int i,v;
   /* Generate A BST */
   int input[]={60,25,75,15,50,66,33,44};

   for(i=0;i<8;i++)
   {
   	v= input[i];
   	nn = (tnode *) malloc(sizeof(tnode));

   	if(nn==NULL){
		printf("\n Overflow....");
		return 0;
   	}
   	else
	{
		nn->info=v;
		nn->left=NULL;
		nn->right=NULL;
	}
	if(root == NULL){
		root=nn;
	}
	else{
		loc= root;
		par=NULL;
		while(loc!= NULL)
		{
			par= loc;
			if(v<loc->info)
				loc = loc->left;
			else
				loc = loc->right;
		}
		if(v<par->info)
			par->left = nn;
		else
			par->right = nn;
	}

   }
   /* Traverse inorder */
   ptr = root;
   printf("\nRoot = %d\n", ptr->info);
   inOrder(ptr);
   printf("\n\n");

   printf("\nEnter a value:\n");
   scanf("%d",&v);
   /* find */
   if(root==NULL){
	loc=NULL;
	par = NULL;
   }
   else if(root->info==v)
   {
   	loc = root;
   	par = NULL;
   }
   else
   {
   	save = root;
   	if(v<root->info)
		ptr=root->left;
	else
		ptr = root->right;
   }
   while(ptr!=NULL)
   {
   	if(ptr->info==v)
	{
		loc=ptr;
		par =save;
		break;
	}
	else
	{
		save= ptr;
		if(v<ptr->info)
			ptr =ptr->left;
		else
			ptr=ptr->right;
	}
   }
   if(ptr == NULL){
	loc=NULL;
	par= save;   /*optional */
   }
   /*if(loc!=NULL && par!=NULL)
	    printf("Found : %d  %d\n",loc->info, par->info);   */

	    /*Delete */
	    if(loc==NULL)
	    printf("\n Not Found...\n");

	    if(loc->left!=NULL && loc->right!=NULL)
		{
        root=caseB(root,loc,par);
		}

		else
			root=caseA(root,loc,par);

  /* Traverse inorder */
   ptr = root;
   printf("\nRoot = %d\n", ptr->info);
   inOrder(ptr);
   printf("\n\n");
	return 0;
}0
