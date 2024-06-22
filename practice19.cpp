//maximum occuring character in a string

#include<bits/stdc++.h>
using namespace std;

char maxOccCharacter(string s){
    int array[26] = {0};
    char letter ;
    for (int i = 0; i < s.length(); i++)
    {
        letter = s[i];
        int number;
        if(letter >= 'a' && letter<='z'){
            number = letter - 'a';
            array[number]++;
        } else{
            number = letter - 'A';
            array[number]++;
        }
    }
    int maxi = -1;
    int ans;
    for(int i= 0; i<26 ; i++){
        if(maxi<array[i]){
            ans = i;
            maxi = array[i];
        }
    }
    char result = 'a' + ans;
    return result;
    
}

int main(){
    string s;
    cin>>s;
    cout<<maxOccCharacter(s);

return 0;
}