#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node
{
	char *c;
	struct node *next;
}node;
int main(int argc,char *argv[])
{
	node *head,*newnode,*temp;
	head=newnode=NULL;
	for(int i=1;i<=argc;i++)
	{
		newnode=(node*)malloc(sizeof(node));
	        //newnode->c=(char*)malloc(strlen(argv[i])+1);
		newnode->c=argv[i];
		newnode->next=NULL;
		if(head==NULL)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
	}
	temp=NULL;
	temp=head;
	printf("\n Name of the File is : %s",argv[0]);
	printf("\n Number of the Arguments given are : %d",argc-1);
	printf("\n Now Each Words are being Reversed : ");
	while(temp->next!=NULL)
	{
		int l=strlen(temp->c);
		for(int i=l;i>=0;i--)
		{
			printf("%c",temp->c[i]);
		}
		printf(" ");
		temp=temp->next;
	}
        printf("\n");
}

