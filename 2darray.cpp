#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++)
        cin>>arr[i][j];
    }
    int sum=0;
    for (int i=0;i<4;i++){
        sum=0;
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
        cout<<sum<<endl;
    }
    return 0;
}