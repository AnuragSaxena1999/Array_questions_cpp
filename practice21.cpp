// wave print of element of 2d array
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int m ;
cin>>m;
int array[n][m];
for(int i = 0; i<n ; i++){
    for(int j = 0;j<m ; j++){
        cin>>array[i][j];
    }
}
for(int i = 0; i<n ; i++){
    for(int j = 0;j<m ; j++){
        cout<<array[i][j]<<" ";
    }cout<<endl;
}
int i = 0;
int j = 0;
while(j<m){
    while(i>=0 && i<n){
        cout<<array[i][j]<<" ";
        if(j%2==0){
            i++;
        }else{
            i--;
        }
    }
    if(j%2==0){
        i=n-1;
    }else{
        i=0;
    }
    j++;
}
return 0;
}