#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

// int main()
// {
//     string s="swastikvasistha";
//     //upercase
//     for(int i=0;i<s.size();i++)
//     {
//         if(s[i]>='a' && s[i]<='z')
//         {
//             s[i]-=32;       //since 'a'-'A'=32     i.e a is 32 times greater than A
//         }
//     }
//     cout<<s<<endl;


//     //lowercase
//     for(int i=0;i<s.size();i++)
//     {
//         if(s[i]>='A' && s[i]<='Z')
//         {
//             s[i]+=32;
//         }
//     }

//     cout<<s;
// }




int main()
{
    string s="dfgsfhiwegisndhs";
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;
    

    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s;
    
}