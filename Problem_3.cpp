#include <bits/stdc++.h>
using namespace std;

int t,b,p,f,h,c,min1,min2;

int main(){
    
    cin>>t;
    
    while(t--)
    {
        cin>>b>>p>>f>>h>>c;
        b=b/2;
        
        if(h<c)
        {
            swap(h,c);
            swap(p,f);
        }
        
        min1=min(b,p);
        
        b=b-min1;
        
        min2=min(b,f);
        
        cout<<min1*h+min2*c<<endl;
    }
}