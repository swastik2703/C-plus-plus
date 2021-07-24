#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();


    char a[n+1];
    cin.getline(a,n);
    cin.ignore();

    int i=0;
    int curr_len=0;
    int max_len=0;

    while(1)
    {
        
        if(a[i]==' ' || a[i]=='\0')    //if in a sentence space is there
        {
            if(curr_len>max_len)
            {
                max_len=curr_len;
            }
            curr_len=0;
        }
        

        else
        curr_len++;      // no space 
        
        if(a[i]=='\0')     //null character directly break
        break;

        i++;
    }

    cout<<max_len<<endl;
}