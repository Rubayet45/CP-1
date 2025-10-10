#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int found = 0;
for(int i=1;i<=n;i++){
if(i%2==0){
    cout<<i<<endl;
found=1;}}
if(found==0)cout<<"-1"<<endl;
return 0;
}


