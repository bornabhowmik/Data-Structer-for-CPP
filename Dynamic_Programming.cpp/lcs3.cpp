#include<bits/stdc++.h>
using namespace std;

void lcs(char *s1, char *s2, int m, int n){
    int table[m+1][n+1];

for(int i=0; i<=m; i++){
    for(int j=0; j<=n; j++){

        if(i==0 || j==0){
            table[i][j]=0;

        }else if(s1[i-1]==s2[j-1]){
            table[i][j]=table[i-1][j-1]+1;

        }else{
            table[i][j]=max(table[i-1][j], table[i][j-1]);
        }

        cout<<table[i][j]<<" ";
    }
        
        cout<<endl;
    }
}


int main(){

    char s1[]="abcdef";
    char s2[]="bdef";

    int m=strlen(s1);
    int n=strlen(s2);

    lcs(s1, s2, m, n);
}