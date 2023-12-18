#include<bits/stdc++.h>
using namespace std;

int main(){

    int number_of_coin,money;
    cin>>number_of_coin>>money;

    int coin[number_of_coin];

    for (int i = 1; i <= number_of_coin; i++)
    {
        cin>>coin[i];
    }

    int coins[number_of_coin+1][money+1];

    
    for (int i = 0; i <= number_of_coin; i++)
    {
        for (int j = 0; j <= money; j++)
        {
            if(i==0) coins[i][j]=INT_MAX;
            else if(j==0) coins[i][j]=0;

            else if(j>=coin[i]){
                coins[i][j] = min(coins[i-1][j], 1+coins[i][j-coin[i]]);
            }
            else coins[i][j] = coins[i-1][j];

        }
        
    }
    
    
    for (int i = 0; i <= number_of_coin; i++)
    {
        for (int j = 0; j <= money; j++)
        {
            cout<<coins[i][j]<<" ";
        }cout<<endl;
        
    }
    




}