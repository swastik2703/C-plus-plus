#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    char a[n+1];
    cin.ignore();

    cin.getline(a,n);
    cin.ignore();
    
    int i=0;
    int curr_len=0;
    int max_len=0;

    while(1)
    {
        if(a[i]==' ' || a[i]=='\0')
        {
            if(curr_len>max_len)
            {
                max_len=curr_len;
            }
            curr_len=0;
        }

        else{
            curr_len++;
        }
        if(a[i]=='\0')
        break;

        
        i++;

    }
    cout<<max_len;
}