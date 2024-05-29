// maximum sum of subarrays


#include<iostream>
#include<climits>
using namespace std;
int main(){
int n ;
int array[n];
cin>>n;
for(int i=0 ; i<n ; i++){
    cin>>array[i];
}
int maxsum = INT_MIN;
for(int i =0 ; i<n ; i++){
    for(int j=i ; j < n ; j++){
        int sum =0;
        for(int k=i ; k<=j ; k++){
            sum = sum + array[k];
            //cout<<sum<< " "; 

        }
        cout<<sum<<endl;
        maxsum = max(maxsum , sum);
        
    }
}
cout<<maxsum<<endl;
return 0;
}