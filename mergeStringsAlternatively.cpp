#include<iostream>
#include<string>
#include<math.h>

using namespace std;

void MergeStringsAlternatively(string word1,string word2){
    int len1=word1.length();
    int len2=word2.length();

    //this is to print the original words
    for(int i=0;i<len1;i++){
        cout<<word1[i] ;
    }
    cout<<endl;
for(int j=0;j<len2;j++){
    cout<<word2[j];
}
cout<<endl;
        

int i=0,j=0;
while(i<len1 && j<len2){
    cout<<word1[i]<<word2[j];
    i++;
    j++;
}

}

int main(){
string word1="abc";
string word2="pqr";

//this is to invoke the function
MergeStringsAlternatively(word1,word2);

return 0;

}