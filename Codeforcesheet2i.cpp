#include<iostream>
using namespace std;
int main(){
int n,rem,sum=0;
cin>>n;
int te=n;
while(te!=0){
    rem=te%10;
    sum=sum*10+rem;
    te=te/10;
}
if(n==sum){
    cout<<sum<<endl;
    cout<<"YES"<<endl;
}
else{
    cout<<sum<<endl;
    cout<<"NO"<<endl;
}

return 0;
}

