    // how to check word is palindrome or not

#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
char array[n+1];
for(int i=0 ; i<n ; i++){
       cin>>array[i];
}  
for(int i=0 ; i<n ; i++){
    cout<<array[i];
}cout<<"\n";
bool palindrome = true ;
for(int i = 0 ; i< n ; i++){
    if(array[i] != array[n-1-i]){
        palindrome = false;
        break;
    }
    
}
if(palindrome==false){
    cout<<"word is not palindrome";
}else{
    cout<<" word is palindrome" ;
}
return 0;
}