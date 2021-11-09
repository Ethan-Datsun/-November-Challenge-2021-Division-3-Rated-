#include<iostream>
#include<map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        bool flag = true;
        map<long long int, long long int> l;
        cin >> n;
        for(int i = 0; i<n; i++)
        {
            int temp;
            cin >> temp;
            lexo[temp]++;
        }
        
        for(auto x: l)
        {
            auto j = l.rbegin();
            if(j->second ==2)
            {
                cout << "-1\n";
                flag = false;
                break;
            }
            else if(x.second > 2)
            {
                cout << "-1\n";
                flag = false;
                break;
            }
        }
        
        if(flag == true)
        {
           for(auto x: l)
        {
            if(x.second==2) cout << x.first << " ";
        }
        for(auto k = l.rbegin(); k!=l.rend(); k++)
        {
            cout << k->first << " ";
        }  
        cout << endl;
        }
      
    }
}