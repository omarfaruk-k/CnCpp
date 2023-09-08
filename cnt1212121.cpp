#include<bits/stdc++.h>
using namespace std;

int main(){         //main function

        int n;  //variable for test case 
        cin>>n;     //taking input of test case variable
        cin.ignore();       //MY TEST CASE WAS FAILLING EVERY TIME, SO I SEARCHED ON THE INTERNET AND FIND THAT 
                            //I HAVE TO USE THIS LINE.
        while (n--)
        {


        
        string s;               //declearing the string name s
        getline(cin,s);         //taking input of string s
        
        int size=s.length();        //storing the size of string in size named variable

        vector<pair<char,int>> vv;      //using vector of pair to store the char with the int type count of how much time it occure
        vv.push_back({s[0],1});         //storing the first char with 1 as it comes at least one time in string.  
        
        int j=0;          
        for (int i = 1; i < size; i++)  //loop for traversing through string
        {
            if(vv[j].first==s[i]){      //if the char stored in pair is equal to the ith string, then we will increas the count by one, so checking for eqaul
                vv[j].second++;         //as we store the number of occurance in the secounf place in pair, we increase the secound place
            }
            else{
                j++;                    //if pari char not equal to ith string increasing the index that iterate through pair
                vv.push_back({s[i],1});     //storing the unmathced char in the new position of pair
            }
        }



        for(int k=0;k<vv.size();k++){           //loop for printinf the result
            cout<<vv[k].second<<vv[k].first;        //printing the number of occurance first, then the char
        }
        cout<<endl;
   }
    

    return 0;
}