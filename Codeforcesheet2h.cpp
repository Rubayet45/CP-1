#include<iostream>
using namespace std;
int main(){
int n,found =0;
cin>>n;
if(n==0||n==1)found=1;
else
{
    for(int i=2;i<n-1;i++){
        if(n%i==0&&n!=2){
                found++;break;
    }
}}
if(found==1)cout<<"NO";
    else cout<<"YES";
return 0;
}






