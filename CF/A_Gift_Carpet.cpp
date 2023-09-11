#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        char c[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> c[i][j];
            }
        }
        char arr[4]={'v','i','k','a'};
        int cnt=0,k=0;

        for (int j = 0; j < m; j++)
        {
            for (int i = 0; i < n; i++)
            {
                if(c[i][j]==arr[k]){
                    cnt++;
                    k++;
                    break;
                }
                
            }
        }

        if(cnt==4) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}