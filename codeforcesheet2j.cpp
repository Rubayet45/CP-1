#include<iostream>
using namespace std;
int main()
{
    int m,i;
    cin>>m;
    for(int i=1; i<=m; i++)
    {
        int found=0;
        if(i==0||i==1)found=1;
        else
        {
            for(int j=2; j<i-1; j++)
            {
                if(i%j==0&&i!=2)
                {
                    found++;
                    break;
                }

            }

}
if(found==0)cout<<i<<" ";}


    return 0;
}







