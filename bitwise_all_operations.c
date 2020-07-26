
#include <stdio.h>

int input(void);
void display(int no);
void find_lsb(int no);
void find_msb(int no);
void check_bit(int no);
void set_bit(int no);
void clear_bit(int no);
void toggle_bit(int no);
void highest_set_bit(int no);
void lowest_set_bit(int no);
void trailing_zero(int no);
void leading_zero(int no);
void count_one_zero(int no);
void rotate_left(int no);
void rotate_right(int no);

int main()
{
    int no,ch;
    
    while(1)
    {
        printf("\t0_Input  1_Display 2_LSB  3_MSB 4_N'th Bit 5_SET Bit   6_Clear Bit 7_Toggle Bit  8_H_SetBit 9_L_SetBit 10_trailing_zero 11_leading_zero\n");
        printf("\t12_Count 13_Rotate_left  14_Rotate_Right\n");
        
        printf("Enter the Choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 0: no=input();
            case 1: display(no);        break;
            case 2: find_lsb(no);       break;
            case 3: find_msb(no);       break;
            case 4: check_bit(no);      break;
            case 5: set_bit(no);        break;
            case 6: clear_bit(no);      break;
            case 7: toggle_bit(no);     break;
            case 8: highest_set_bit(no);        break;
            case 9: lowest_set_bit(no);         break;
            case 10: trailing_zero(no);             break;
            case 11: leading_zero(no);              break;
            case 12: count_one_zero(no);            break;
            case 13: rotate_left(no);               break;
            case 14: rotate_right(no);              break;
            
            default: printf("ERROR:Wrong input\n");
        }
    }
    
    

    return 0;
}

int input()
{
    int no;
     printf("Enter the No:");
    scanf("%d",&no);
    
    return no;
}

void display(int no)
{
    int i;
    
    for(i=31; i>=0; i--)
    {
        printf("%d",(no>>i)&1);
        if(i%4 == 0)
            printf(" ");
    }
    printf("\n");
}

void find_lsb(int no)
{
    if(no&1)
        printf("\nLSB bit is SET bit\n");
    else
        printf("LSB is Clear Bit\n");
}

void find_msb(int no)
{
    if(no&(1<<31))
        printf("MSB bit is SET\n");
    else
        printf("MSB Bit is Clear.\n");
}

void check_bit(int no)
{
    int n;
    printf("Enter the Bit Position to check Bit:");
    scanf("%d",&n);
    
    if((no>>n)&1)
        printf("%d'th Bit is Set Bit\n",n);
    else
        printf("%d'th Bit is Clear Bit\n",n);
}

void set_bit(int no)
{
    int pos;
    printf("Enter the Position:");
    scanf("%d",&pos);
    
    no = (1<<pos)|no;
    
    display(no);
}

void clear_bit(int no)
{
    int pos;
    printf("Enter the Position: ");
    scanf("%d",&pos);
    
    no = ~(1<<pos)&no;
    
    display(no);
}

void toggle_bit(int no)
{
    int pos;
    
    printf("Enter the Position: ");
    scanf("%d",&pos);
    
    no = (1<<pos)^no;
    
    display(no);
}

void highest_set_bit(int no)
{
    int i,order=-1;
    
    for(i=0; i<32; i++)
    {
        if((no>>i)&1)
            order = i;
    }
    
    if( order != -1)
        printf("Highest Set Bit @ %d\n",i);
    else
        printf("There is no set Bit\n");
}

void lowest_set_bit(int no)
{
    int i,order;
    for(i=0; i<32; i++)
    {
        if((no>>i)&1)
        {
            order = i;
            break;
        }
    }
    
    printf("Lowest Set Bit @ %d\n",i);
}


void trailing_zero(int no)
{
    int i,count=0;
    
    for(i=0; i<32; i++)
    {
        if( (no>>i)&1 )
            break;
        count++;
    }
    
    printf("No of Trailing Zero's : %d\n",count);
}

void leading_zero(int no)
{
    int i,count=0,msb;
    
    for(i=0; i<32; i++)
    {
        if( (no<<i) & (1<<31) )
            break;
            
        count++;
    }
    
    printf("No of Leading Zero's : %d\n",count);
}


void count_one_zero(int no)
{
    int one=0,zero=0,i;
    
    for(i=31; i>=0; i--)
    {
        if( no&1 )
            one++;
        else
            zero++;
            
        no = no>>1;
    }
    
    printf("One's: %d  zero's: %d\n",one,zero);
}


void rotate_left(int no)
{
    int r,msb;
    
    printf("How much Time Rotate: ");
    scanf("%d",&r);
    
    while(r)
    {
        msb = no&(1<<31);
        no = (no<<1)|msb;
        r--;
    }
    
    display(no);
}


void rotate_right(int no)
{
    int r,lsb;
    
    printf("How much Time Rotate: ");
    scanf("%d",&r);
    
    while(r)
    {
        lsb = no&1;
        no = no & (~(1<<31));
        no = no | (lsb<<31);
        r--;
    }
    
    display(no);
}
