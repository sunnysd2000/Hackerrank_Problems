#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,x;
        cin>>s;
        x=s;
        int j,c,sum=0;
        for(int i=0;i<x.length();i++){
            c=0;
            for(int k=i,y=0;k<x.length();k++,y++){
                if(x[k]==s[y]){
                    c++;
                }
                else{
                   break;
                }
            }
            sum=sum+c;
        }
        cout<<sum<<endl;
    }
    
    
    
    
    

    return 0;
}
