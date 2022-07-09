#include<bits/stdc++.h>
using namespace std;


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    int N;
    cin>>N;
    int n=0;
    int p=N;
    cout<<N<<" ";
    if(N>1)
    {
    for(int i=1;i<p;i++)
    {
      if(~i&1)
      {
        cout<<--N<<" ";
      }
      else
      {
        cout<<++n<<" ";
      }
    }
    }
    cout<<endl;
    }

    return 0;
}
