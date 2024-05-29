//largest word in the sentence

#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;
cin.ignore();

char array[n+1];
// cin>>array;
// take a sentence by taking c.getline(array , size)

cin.getline(array , n);
cin.ignore();

int i=0; 
int current_len=0;
int max_len=0;
//int starting_index= 0 ; 
//int max_index ;
while(i<n){
    if(array[i]== ' ' || array[i]== '\0'){
        if(current_len > max_len){
            max_len=current_len;
           // max_index = starting_index;
        }current_len=0;
       // starting_index = i+1;
    }
    if(array[i]=='\0'){
        break;
    }
    else{
        current_len++;
    }
    i++;
}
cout<<max_len<<endl;

return 0;
}