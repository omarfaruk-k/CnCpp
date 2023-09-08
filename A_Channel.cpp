#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int tot, on, noti, pos_cnt = 0, neg_cnt = 0;
        char pp;
        cin >> tot >> on >> noti;
        int on_init = on;

        while (noti--)
        {
            cin >> pp;
            if (pp == '+')
            {
                pos_cnt++;
            }
            else if (pp == '-')
            {
                neg_cnt++;
            }

        }

        int vallagena =pos_cnt+on;

        if (tot == on)
        {
            cout << "YES" << endl;
        }
        else if(vallagena>=tot && (vallagena-neg_cnt)>=tot) {
            cout<<"YES"<<endl;
        }
        else if(vallagena>=tot && on>=neg_cnt) {
            cout<<"MAYBE"<<endl;
        }
        else if(vallagena<tot){
            cout<<"NO"<<endl;
        }
    }


return 0;
}