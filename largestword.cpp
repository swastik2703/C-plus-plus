// 10
// input=do or die
// output:- 3,die


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    char a[n+1];       // size of char should be n+1
    cin.ignore();      //to avoid buffer

    cin.getline(a,n);   //input sentence as well as space b/w them 
    cin.ignore();
    
    int i=0;
    int curr_len=0;     
    int max_len=0;
    int st=0,maxst=0;
    while(1)
    {
        if(a[i]==' ' || a[i]=='\0')    //senctence with null or space
        {
            if(curr_len>max_len)
            {
                max_len=curr_len;
                maxst=st;               //when we found max
            }
            curr_len=0;
            st=i+1;                     //update for new starting
        }

        else{
            curr_len++;
        }
        if(a[i]=='\0')
        break;

        
        i++;

    }
    cout<<max_len<<endl;
    for(int i=0;i<max_len;i++)
    {
        cout<<a[i+maxst];
    }
}