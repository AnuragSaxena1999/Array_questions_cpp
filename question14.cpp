// searching in 2d array
// linear search or brute force approach 

#include<iostream>
using namespace std;
int main(){
int n1 , n2;
cin>>n1>> n2;
int array[n1][n2];
for(int i=0 ; i<n1 ; i++){
    for(int j=0 ; j<n2 ; j++){
        cin>>array[i][j];
    }
}
for(int i=0 ; i<n1 ; i++){
    for(int j=0 ; j<n2 ; j++){
        cout<<array[i][j]<<" ";
    }cout<<"\n";
}
int target;
cin>>target;

for(int i= 0 ; i<n1 ; i++){
    for(int j=0 ; j<n2 ; j++){
        if(array[i][j]==target){
           cout<<"index of this element is" <<i<<" "<<j ;
           return 0;
        }
    }
}cout<<" no found";
return 0;
}