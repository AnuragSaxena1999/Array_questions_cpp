// find the sums of all subarrays

#include<iostream>
using namespace std;
int main(){
int n; 
int array[n];
cin>>n;
for(int i =0 ;i<n;i++){
    cin>>array[i];

}
for(int i =0 ; i< n ; i++){
    int currentsum= 0;
    for(int j= i ; j<n ; j++){
        currentsum = currentsum + array[j];
        cout<<currentsum<<endl;
    }
}
return 0;
}