//bst
#include<stdio.h>
#include<stdlib.h>
struct bstnode
{
	struct bstnode*lchild;
	int key;
	struct bstnode*rchild;
};
struct bstnode *root=NULL;
void insert(int item)
{	
	struct bstnode *newnode;
	struct bstnode *ptr=root,*ptr1;
	int flag=0;
	
	
	newnode=(struct bstnode*)malloc(sizeof(struct bstnode));
	newnode->lchild=NULL;
	newnode->key=item;
	newnode->rchild=NULL;
	while((ptr!=NULL)&&(flag==0))
	{
		if(item<ptr->key)
		{
			ptr1=ptr;
			ptr=ptr->lchild;
		}
		else
		{
			if(item>ptr->key)
			{
				ptr1=ptr;
				ptr=ptr->rchild;
			}	
			else
			{
				if(item==ptr->key)
				{
					flag=1;
					printf("faild");	
				}
			}
		}
	
	}
	if(root==NULL)
	{
		root=newnode;
	}
	else	
	{
		if(item<ptr1->key)
		{
			ptr1->lchild=newnode ;
		}
		else
		{
			ptr1->rchild=newnode;
		}
	}
}
void inorder(struct bstnode *ptr)
{
	if(ptr!=NULL)
	{
		inorder(ptr->lchild);
		printf("%d",ptr->key);
		inorder(ptr->rchild);
	}
}
void search(int item)
{
	struct bstnode*ptr;
	int flag=0;
	while((ptr!=NULL)&&(flag==0))
	{  
		
		if(item<ptr->key)
		{
			ptr=ptr->lchild;
		}
		else 
		{
			if(item>ptr->key)
			{
			ptr=ptr->rchild;
			}
		
			else
			{
				if(item==ptr->key)
				{
				flag=1;
				}
			}
				
		}

	}
	if(flag==1)
		printf("\n item found.\n");
	else
		printf("\n item not found");
}
struct bstnode * minimum(struct node *ptr)
{
	while(ptr->lchild!=NULL)	
		ptr=ptr->lchild;
	return (ptr);
}
	
struct bstnode * successor(struct node *ptr)
{
	if(ptr->rchild!=NULL)
		return(minimum(ptr->rchild));
	return(ptr);
}
void delete(int item)
{
	int flag;	
	struct bstnode*ptr=root,*ptr1;
	while((ptr!=NULL)&&(flag==0))
	{  
		
		if(item<ptr->key)
		{
			struct bstnode* ptr1=ptr;
			ptr=ptr->lchild;
		}
		else 
		{
			if(flag!=1)
			{
			if(item>ptr->key)
			{
			struct bstnode * ptr1=ptr;
			ptr=ptr->rchild;
			}
		
			else
			{
				if(item==ptr->key)
				{
				flag=1;
				}
			}
			}	
		}

	}
	if((ptr->lchild==NULL)&&(ptr->rchild==NULL))//case 1:no child node
	{
		if(ptr==ptr1->lchild)
			ptr1->lchild=NULL;
		else
			ptr1->rchild=NULL;
		free(ptr);
		else
		{	//case 3:if both childnode exists
			if((ptr->lchild!=NULL) && (ptr->rchild!=NULL))
			{
	
}	
	







int main()
{
	insert(5);
	insert(4);
	insert(7);
	insert(6);
	insert(8);
	inorder(root);
	search(4);
	struct node *succr=successor(root);
	printf("successor of root is:%d",succr->key);
}





