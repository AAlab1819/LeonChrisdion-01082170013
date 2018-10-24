#include<bits/stdc++.h>
using namespace std;
int main()
{
    int input,loop,b=0,c=0;cin>>loop;
    for( int i=0; i<loop; i++)
    {
        cin>>input;
        if( input>0) b+=input;
        else c+=input;
    } cout<<b-c;return 0;
}
