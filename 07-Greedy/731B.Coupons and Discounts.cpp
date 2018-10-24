#include <bits/stdc++.h>
using namespace std;
int main()
{
	int  input,sum=0;
	cin>>input;
	int arr[input];
	for (int i = 0 ; i < input ; i++)
    {
		cin>>arr[i];
		sum+=arr[i];
	}
	for (int i = 0 ; i < input-1 ; i++ )
    {
        if (arr[i]==0 && arr[i+1]==1&&sum%2==0)
		{
			cout<<"NO";
			return 0;

		}
	}
	if (sum%2==1)
		cout<<"NO";
	else
		cout<<"YES";*/
	return 0;
}

