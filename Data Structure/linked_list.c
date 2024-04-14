#include<stdio.h>
#include<stdlib.h>


struct node
{
    int info;
    struct node *link;
};
struct node *creat_list(struct node *start);
void display(struct node *start);
void count(struct node *start);
void search(struct node *start,int item);
struct node *addatbeg(struct node *start,int data);
struct node *addatend(struct node *start,int data);
struct node *addatpos(struct node *start,int data, int pos);
struct node *del(struct node *start,int data);
struct node *reverse(struct node *start);
void main()
{
    struct node *start=NULL;
    int choice,data,pos;
    start:
    printf("1) Create link list\n ");
    printf("2) Display\n ");
    printf("3) Count\n ");
    printf("4) Search\n ");
    printf("5) Add at beginning\n ");
    printf("6) Add at end\n ");
    printf("7) Add at position\n ");
    printf("8) Delete\n ");
    printf("9) Reverse list\n ");
    printf("10) Quit\n ");
    printf("Enter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
       case 1:
              start=creat_list(start);
              break;
       case 2: 
              display(start);
              break;
       case 3:
              count(start);
              break;
       case 4:
               printf("Enter the element to be searched\n");
               scanf("%d",&data);
               search(start,data);
               break;
       case 5: 
               printf("Enter the element to be inserted\n");
               scanf("%d",&data);
               start=addatbeg(start,data);
               break;
       case 6: 
               printf("Enter the element to be inserted\n");
               scanf("%d",&data);
               start=addatend(start,data);
               break;        
       case 7:
               printf("Enter the element to be inserted\n");
               scanf("%d",&data);
               printf("Enter the position at which data to be insert\n");
               scanf("%d",&pos);
               start=addatpos(start,data,pos);
               break;
       case 8:
               printf("Enter the element to be deleted\n");
               scanf("%d",&data);
               start=del(start,data);
               break;
       case 9:
               start=reverse(start);
               break;
       case 10:
                exit(0);
                break;
        default:
                  printf("Invalid choice\n");        
    }// End od switch block
    goto start;
}
struct node *creat_list(struct node *start)
{
       int i,n,data;
       printf("\nEnter Noumber of nodes ");
       scanf("%d",&n);
       start=NULL;
       if(n==0)
       {
           return start;
       }
       printf("\nEnter element to be insert ");
       scanf("%d",&data);
       start=addatbeg(start,data);
       for(i=2;i<=n; i++ )
       {
           printf("\nEnter element to be insert: ");
           scanf("%d",&data);
           start=addatend(start,data);     
       }
       return start;
} // end of creat_node

void display(struct node *start)
{
    struct node *p;
    if(p==NULL)
    {
        printf("\nList is empty:");
        return ;
    }
    p=start;
    printf("List is :\n");
    while(p != NULL)
    {
        printf("%d\t",p->info);
        p=p->link;
    }
}// End of display

void count(struct node *start)
{
    struct node *p;
    int count=0;
    p=start;
    while(p!= NULL)
    {
        p=p->link;
        count++;
    }
    printf("\nTotal noumber of element are %d\n",count);
}//End of count

void search(struct node *start,int item)
{
    struct node *p;
    p=start;
    int pos=1;
    while(p!=NULL)
    {
        if(p->info==item)
        {
           printf("\nIteam %d found at position %d\n",item,pos);
           return;
        }
           pos++;
           p=p->link;
    }
    printf("Item is not present in list");
} // end of search

struct node *addatbeg(struct node *start,int data)
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    p->info=data;
    p->link=start;
    start=p;
    return start;
}// End od addatbeg

struct node *addatend(struct node *start,int data)
{
    struct node *p,*temp;
    p=(struct node *)malloc(sizeof(struct node));
    p->info=data;
    p->link=NULL;
    temp = start;
    while(temp->link!=NULL)
    {
        temp=temp->link;
    }
    temp->link=p;
    return start;
}// End of addatend
struct node *addatpos(struct node *start,int data, int pos)
{
    struct node *p ,*temp;
    int i;
    if(pos==1)
    {
        return addatbeg(start,data);
    }
    temp=start;
    for(i=1;i<pos-1 && temp!=NULL;i++)
    {
        temp=temp->link;
    }
    if(temp==NULL)
    {
        printf("There are less then %d element",pos);
        return start;
    }else
    {
        p=(struct node*)malloc(sizeof(struct node));
        p->info=data;
        p->link=temp->link;
        temp=p;
        return start;
    }
    
}// End of addatpos
struct node *del(struct node *start,int data)
{
    struct node *p,*temp;
    if(start==NULL)
    {
        printf("\nList is empty");
        return (start);
    }
    if(start->info==data)
    {
        temp=start;
        start=start->link;
        free(temp);
        return start;
    }
    temp=start;
    while(temp->link->info!=data)
    {
        temp=temp->link;
        if (temp==NULL)
        {
            printf("Element not found in list");
            return start;
        }
    }
    p=temp->link;
    temp->link=p->link;
    free(p);
    return start;
}
struct node *reverse(struct node *start)
{
    struct node *prev,*ptr,*next;
    prev=NULL;
    ptr=start;
    while(ptr!=NULL)
    {
        next=ptr->link;
        ptr->link=prev;
        prev=ptr;
        ptr=next;
    }
    start=prev;
    return start;
}// End of reverse 