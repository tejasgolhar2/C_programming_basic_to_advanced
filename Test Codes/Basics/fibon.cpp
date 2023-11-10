#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter num: "<<endl;
    cin>>n;


    long long a =0;
    long long b=1;
    long long val;

    if ((n>0)&&(n<=2))
    {
        cout<<n-1<<endl;
    }
    else
    {
        while(n>1)
        {
            val = b + a;
            a = b;
            b = val;
            n--;
        }
        
        cout<<val<<endl;

    }
    
        
    
    
    return 0;
}

