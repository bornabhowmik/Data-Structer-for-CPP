#include<bits/stdc++.h>
using namespace std;

int main(){

    int coins[]={1,3,5};
    int amount=8;
    int n=sizeof(coins)/sizeof(coins[0]);
    int table[n+1][amount+1];

    for(int i=0; i<=n; i++){
        table[i][0]=1;
    }

    for(int j=1; j<=amount; j++){
        table[0][j]=0;
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=amount; j++){
            if(coins[i-1]>j){

                table[i][j]=table[i-1][j];
            }else{
                table[i][j]=table[i-1][j]+table[i][j-coins[i-1]];
            }
        }
    }

    cout<<"Maximum ways:"<<table[n][amount]<<endl;

}