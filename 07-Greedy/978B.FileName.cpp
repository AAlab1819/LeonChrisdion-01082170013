#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  length, counter=0, output=0;
    string input; cin>>length>>input;
    for (int i=0; i<length; i++)
    {
        if(input[i]=='x')
        {
            counter++;
            if(counter>2)   output++;
        }
        else counter=0;
    }cout<<output;return 0;
}
