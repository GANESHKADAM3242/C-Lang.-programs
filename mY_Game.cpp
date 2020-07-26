
#include<iostream>
#include<stdlib.h>
//#include<sys/type.h>
#include<unistd.h>

using namespace std;
main()
{
    int no,gno,g;
    char ch;
    srand(getpid());
    
    do
    {
        
        g=0;
        no=rand()%1001;
        system("clear");
        while(1)
        {
            
            cout<<"Guess the No: "<<endl;
            cin>>gno;
            g++;
            
            if(gno>no)
                cout<<"sorry...Too big No...."<<endl;
            else if(gno<no)
                cout<<"sorry....Too small no"<<endl;
                
                else
                {
                    cout<<"\n\n****  Wow your gess is Right  ****\n\n"<<endl;
                    cout<<"\nYou guess"<<endl;
                    break;
                }
        }
        count<<"\t\t Menu\n\t\ts:START n:EXIT\n"<<endl;
        cout<<"Enter the char for again play"<<endl;
        cin>>ch;
    }while(ch=='s' && ch=='n');
    return 0;
}

