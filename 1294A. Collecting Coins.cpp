#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;

    while(t--)
    {
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        int test = (a+b+c+n);

        if(test%3!=0)
        {
            cout<< "NO"<< endl;
        }
        else if((test/3) >= max(a,max(b,c)))
        {
            cout<< "YES"<< endl;
        }
        else
        {
            cout<< "NO" << endl;
        }

    }
}


