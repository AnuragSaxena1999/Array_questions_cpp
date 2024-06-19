//find the 3 largest element in the array

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    int first , second , third;
    
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    first = second = third = INT_MIN;
    for (int i = 0; i < n; i++)

    {
        if(n<=3){
            cout<<"Invalid input";
        }
        else if(first<array[i]){
            third = second;
            second= first;
            first = array[i];
        }
        else if(second<array[i]){
            third = second;
            second  = array[i];
        }else if(third<array[i]){
            third = array[i];
        }
    }
    cout<<first<<" "<<second<<" "<<third;
    
return 0;
}