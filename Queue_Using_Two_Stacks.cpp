#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<queue>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    queue<int> q;
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        if(n==1)
        {
            int x;
            cin>>x;
            q.push(x); 
        }
        else if(n==2)
        {
            q.pop();
        }
        else if(n==3)
        {
            cout<<q.front()<<endl;
        }
    }   
    return 0;
}
