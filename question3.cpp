//find the  longest length of arithmatic subarrays 

#include<iostream>
using namespace std;
int main(){
int n ;
int array[n];
cin>> n;
for(int i=0 ; i<n ; i++ ){
    cin >> array[i];
}
//for(int i=0 ; i<n ; i++){
  //  cout<< array[i];
//}
int pd = array[1] - array[0]; // pd = previous difference
int current = 2 ; // atleast two value is in arithmatic subarryd 
int answer =2;
int j =2;
while(j<n){
    if(pd == array[j] - array[j-1]){
        current ++;
    }
    else{
        pd = array[j] - array[j-1];
        current =2;
    }
    answer = max(current , answer);
    j++;
}
 cout<< answer<< endl;


return 0;
}