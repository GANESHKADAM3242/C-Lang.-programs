
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct std
{
    int data;
    struct std *next;
};

struct std *head = NULL;

static int len;

//////////////////////////////////////////////////////////////////////

void add_node();
void delete_node();
int length();
void display();
void sort();
void revers_list();

//////////////////////////////////////////////////////////////////////

int main()
{
    int choice;
    
    while(1)
    {
        printf("\t\t\t**** MENU ****\n");
        printf("\t\t1_Add Node\n \t\t2_Delete Node\n \t\t3_Length\n \t\t4_Revers_List\n \t\t5_sort\n \t\t9_Display \t\t0_Exit\n");
        printf("\nEnter the Choice: ");
        scanf("%d",&choice);
        
        switch(choice)
        {
            
            case 1 : add_node();
                        break;
            case 2 : delete_node();
                        break;
            case 3 : printf("Lenth of Linked List : %d\n",length());
                        break;
            case 4 : revers_list();
                        break;
            case 5 : sort();
                        break;
            case 9 : display();
                        break;
            case 0 : exit(0);
                        break;
            default: printf("ERROR: Wrong Choice\n");
        }//switch()
        
    }//while(1)
    
    return 0;
    
}//main()


void add_node()
{
    struct std *new = NULL;
    struct std *temp = NULL;
    
    new = (struct std*)malloc(sizeof(struct std));
    
    if(new == NULL)
    {
        printf("\nERROR:Memory not allocate.\n");
       
    }
    else if(head == NULL)
    {
        printf("Enter the Data: ");
        scanf("%d",&new->data);
        head = new;
        new->next = NULL;
    }
    else
    {
        int a;
        printf("\tAdd @ 1_Beggining  2_End 3_Position");
        printf("\nEnter your choice: ");
        scanf("%d",&a);
        if(a==1)
        {
            printf("Enter the Data: ");
            scanf("%d",&new->data);
            
            new->next = head;
            head = new;
        }
        else if(a==2)
        {
            printf("Enter the data: ");
            scanf("%d",&new->data);
            
            temp = head;
            
            new->next = NULL;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            
            temp->next = new;
        }
        else if(a==3)
        {
            int pos,count=0;
            struct std *p = NULL;
            p = head;
            printf("Enter the Postion  : ");
            scanf("%d",&pos);
            
            while(count<pos)
            {
                p = p->next;
                count++;
            }
            
            printf("Enter the Data: ");
            scanf("%d",&new->data);
            
            new->next = p->next;
            p->next = new;
            
        }
    }
    
}



void delete_node()
{
    int i;
    struct std *temp;
    
    printf("Enter the node No to be Delete : ");
    scanf("%d",&i);
    if(head == NULL)
    {
        printf("ERROR: List is Empty.....\n");
    }
    else if(i==1)           //  <---- First Node Delete
    {
        temp = head;
        head = head->next;
        free(temp);
    }
    else                    //  <----   Delete  Any Node
    {
        int j=1;
        struct std *p, *q;
        p = head;
        
        while(j < len-1)
        {
            p = p->next;
            j++;
        }
        
        q = p->next;
        p->next = q->next;
        q->next = NULL;
        free(q);
    }
    

}




void display()
{
    struct std *temp = NULL;
    
    temp = head;
    
    if(temp == NULL)
    {
        printf("Linked list is Empty.....\n");
    }
    else
    {
        while(temp)
        {
            printf("%d --> ",temp->data);
            temp = temp->next;
        }
        
        printf("\n");
    }
    
}


int length()
{
    struct std *temp = NULL;
    temp = head;
    int i;
    
    while(temp != NULL)
    {
        temp = temp->next;
        i++;
    }
    
    len=i;
    return i;
}




void revers_list()
{
    
    int i,j,k,temp;
    struct std *p,*q;
    p = q = head;
    
    i = 0;
    j = len-1;
    
    while(i<j)
    {
        k=0;
        while(k<j)
        {
            q = q->next;
            k++;
        }
        
        temp = p->next;
        p->data = q->data;
        q->data = temp;
        
        i++;
        j--;
        
        p = p->next;
        q = head;
    }
}




void sort()
{
    struct std *ptr,*nt;
    int temp;
    
    for(ptr=head; ptr!=NULL; ptr=ptr->next)
    {
        for(nt=ptr->next; nt!=NULL; nt=nt->next)
        {
            if(ptr->data > nt->data)
            {
                temp = ptr->data;
                nt->data = ptr->data;
                ptr->data = temp;
            }
        }
    }
}

