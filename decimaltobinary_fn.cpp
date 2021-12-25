#include<iostream>
#include<math.h>
using namespace std;

int main() {
    // int n,binary=0,i=1,rem;
	// cin>>n;
	// while(n!=0)
	// {
	// 	rem=n%2;
	// 	binary=binary+(rem*i);
    //     n=n/2;
	// 	i*=10;
	// }
	// cout<<binary;


	int n;
	cin>>n;
	int ans = 0;
	int i=0;


	while(n!=0)
	{
		int bit = n&1;
		ans = (bit * pow(10,i) + ans);
		n = n>>1;
		i++;
	}

	cout<<"answer is :"<<ans;
}