#include<stdio.h>
#include<malloc.h>
//anam agladı yaparken...

struct nodeFB
{
int id;
int age;
struct nodeFB *next;
};

struct nodeGS
{
int id;
struct nodeGS *next;
};
/*
ı have two team members.i am takıng  ınformatıons
from users.and
firstly i wanna linked lşst for fb team.
every member have two inf. age and id
ı am doing create with create_node function
dynamicly ı am giving memory

*/

void printFB(struct nodeFB *head);
void printGS(struct nodeGS *head2);
struct nodeFB *sortFB(struct nodeFB **);
struct nodeGS *sortGS(struct nodeGS **);
void swap(struct nodeFB *a,struct nodeFB *b);
void swap2(struct nodeGS *a,struct nodeGS *b);
//struct nodeGS *head2=NULL;

void create_node(struct nodeFB **head)
{
struct nodeFB *ptr,*new_node;
int a,b;
//i am asking id and age if they are both -1
//my function is end

scanf("%d",&a);
scanf("%d",&b);
while(a!=-1 && b!=-1)
{
	if(*head==NULL) //if list empty my first node is head
	{
	new_node=(struct nodeFB *)malloc(sizeof(struct nodeFB));
	new_node->id=a; 
	new_node->age=b;
	new_node->next=NULL; //next node should be 0
	*head=new_node; // first node=head mean
	
	}
	else
	{
	ptr=*head; //ı am showing to head with mt pointer ptr
			//if list doesnt finished,ptr is moving one by one
			while(ptr->next!=NULL) 
			ptr=ptr->next;
	new_node=(struct nodeFB*)malloc(sizeof(struct nodeFB)); //dynamic memory ..
	new_node->id=a;
	new_node->age=b;
	new_node->next=NULL;
	ptr->next=new_node;
	
	}
	scanf("%d",&a);
	scanf("%d",&b);
	
	if(a==-1 && b==-1) break;

} //while 

} //create node finished

void create_node2(struct nodeGS **head2)
{
struct nodeGS *ptr,*new_node;
int c;

scanf("%d",&c);
	while(c!=-1)
	{
		if(*head2==NULL)
		{
		new_node=(struct nodeGS *)malloc(sizeof(struct nodeGS));
	new_node->id=c; 
	new_node->next=NULL; 
	*head2=new_node; 
	
		}
		else
		{
	ptr=*head2; 

			while(ptr->next!=NULL) 
			ptr=ptr->next;
	new_node=(struct nodeGS*)malloc(sizeof(struct nodeGS));
	new_node->id=c;
	new_node->next=NULL;
	ptr->next=new_node;
	
	    }
	    scanf("%d",&c);
	
	
	if(c==-1) break;
	    
	}

}

void printFB(struct nodeFB *head)
{
//i wanna print member of FB
struct nodeFB *ptr;
ptr=head; //my pointer point to head mean start
//printf("printFB\n\n");
//the main problem is here
/*
ı thought head is null ,so ptr too.
becuz of this in this function never get in while loop
but in logically it should run ...
ERROR İS HERE

*/
while(ptr!=NULL) //?
{

printf("Id:%d	Age: %d\n",ptr->id,ptr->age);
ptr=ptr->next; //ptr is moving


} //end of the while 

} //end of the printFB

void printGS(struct nodeGS *head2)
{
struct nodeGS *ptr2;
ptr2=head2;
//printf("printGS\n\n");
	while(ptr2!=NULL)
	{
	printf("Id:%d\n",ptr2->id);
	ptr2=ptr2->next;
	}

}

void swap(struct nodeFB *a, struct nodeFB *b)
{
	//swapping two members
	/*
	i ll change both qualifications.id s and age s
	i am avoiding lose my data so 
	i used temp s
	*/
    int temp1,temp2; 
    temp1= a->id;
    a->id = b->id;
    b->id = temp1;
    
    temp2= a->age;
    a->age = b->age;
    b->age = temp2;
} //end of the swap

void swap2(struct nodeGS *a,struct nodeGS *b)
{
int temp1;
temp1=a->id;
a->id=b->id;
b->id=temp1;

}

struct nodeFB *sortFB(struct nodeFB **head)
{
	int swapped, i;
    struct nodeFB *ptr1; //ptr first
    struct nodeFB *lptr = NULL; //last ptr it ll be
    //* is the list empty?
    if (*head == NULL)
        return 0;
    do
    {
        swapped = 0;
        ptr1 = *head; //ilki ptr a atandı
        while (ptr1->next != lptr) 
        //ptr1->next !=NULL ??
        {
  
            if (ptr1->id > ptr1->next->id)
            { 
                swap(ptr1, ptr1->next);
                swapped = 1; //we swapped them
            }
            ptr1 = ptr1->next; //ptr1 moving
        }
        lptr = ptr1; //
       
    }
    while (swapped);

return *head;
}

struct nodeGS *sortGS(struct nodeGS **head2)
{
	int swapped, i;
    struct nodeGS *ptr1; 
    struct nodeGS *lptr = NULL; 
  
    if (*head2 == NULL)
        return 0;
    do
    {
        swapped = 0;
        ptr1 = *head2;
        while (ptr1->next != lptr) 
        {
  			 if (ptr1->id < (ptr1->next->id))
            { 
                swap2(ptr1, ptr1->next);
                swapped = 1; //we swapped them
            }
            ptr1 = ptr1->next; //ptr1 moving
        }
        lptr = ptr1; //
       
    }
    while (swapped);

return *head2;
	
}

void printAll(struct nodeFB *head,struct nodeGS *head2)
{

struct nodeFB *ptr;
struct nodeGS *ptr2;
ptr=head;
ptr2=head2;
	while(ptr2!=NULL)
	{
	printf("Id:%d	Age: %d\n",ptr->id,ptr->age);
	ptr=ptr->next; 
	printf("Id:%d\n",ptr2->id);
	ptr2=ptr2->next;
	}

}

int main()
{
struct nodeFB *head=NULL;
struct nodeGS *head2=NULL;
create_node(&head);
create_node2(&head2);


/*printf("before sorting\n");
printFB(head);
printGS(head2);
*/

//printf("after sorting\n");
sortFB(&head);
sortGS(&head2);
printFB(head);
printf("\n");
printGS(head2);
printf("\n");
printAll(head,head2);
return 0;
}
