// Linear Search
#include<iostream>
using namespace std;

int linearsearch(int array[] ,int n, int key){
    for(int i=0; i<n ; i++){
        if(array[i]==key){
            // cout<<"the index of "<<key<<" is "<<i<<endl;
            return i; 
        }
    }
  return 0;  
}

int main(){
    int n;
    
    cin>>n;
    int array[n];
    for(int i=0; i<n ; i++){
        cin>>array[i];
    }
    for(int i=0; i<n ; i++){
        cout<<array[i]<<" ";
    }
    int key;
    cin>>key;
    cout<<linearsearch(array, n , key)<<endl;

return 0;
}