#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,max=0;
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==0||j==0){
                a[i][j]=1;
            }
            else{
                a[i][j]=a[i-1][j]+a[i][j-1];
            }
            if(max<a[i][j]){
                max=a[i][j];
            }
        }
    }
    cout<<max<<endl;
}