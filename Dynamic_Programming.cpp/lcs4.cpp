#include<bits/stdc++.h>
using namespace std;

void lcs(char *s1, char *s2, int m, int n){
    int table[m+1][n+1];

    for(int i=0; i<=m; i++){
        for(int j=0; j<=n; j++){

            if(i==0 || j==0){
                table[i][j]=0;

            }else if(table[i-1]==table[j-1]){
                table[i][j]=table[i-1][j-1]+1;

            }else{
                table[i][j]=max(table[i-1][j], table[i][j-1]);
            }

            cout<<table[i][j]<<" ";
        }

        cout<<endl;
    }
}
int index = LCS_table[m][n];
    //cout << index << endl;
    char lcsAlgo[index + 1];
    
    lcsAlgo[index] = '\0';

    int i = m, j = n;
    while (i > 0 && j > 0) {
        if(S1[i-1] == S2[j-1]) {
            lcsAlgo[index-1] = S1[i-1];
            i--;
            j--;
            index--;
        }
        else if (LCS_table[i - 1][j] > LCS_table[i][j - 1])
            i--;
        else
            j--;
    }

    // Printing the sub sequences
    cout << "S1 : " << S1 << "\nS2 : " << S2 << "\nLCS: " << lcsAlgo << "\n";

int main(){

    char s1[]="abcdef";
    char s2[]="bcde";

    int m=strlen(s1);
    int n=strlen(s2);

    lcs(s1, s2, m, n);
}