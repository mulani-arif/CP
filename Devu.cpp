#include<bits/stdc++.h>
using namespace std;

int minimum(int arr[],int len)
{
    int min=arr[0];
    for(int i=1;i<len;i++)
    {
      if(arr[i]<=min)
      {
        min=arr[i];
      }
    }
    return min;
}

int maximum(int arr[],int len)
{
    int max=arr[0];
    for(int i=1;i<len;i++)
    {
        if(arr[i]>=max)
        {
            max=arr[i];
        }
    }
    return max;
}

int main()
{
    int n1,n2,count1=0,count2=0,count3=0,count4=0;
    cin>>n1>>n2;
    int a[n1],b[n2];

    for(int i=0;i<n1;i++)
    {
       cin>>a[i];
    }

    for(int i=0;i<n2;i++)
    {
        cin>>b[i];
    }
    int maxA=maximum(a,n1);
    int minA=minimum(a,n1);
    int maxB=maximum(b,n2);
    int minB=minimum(b,n2);
    //case1
    for(int i=0;i<n2;i++)
    {
        if(b[i]>=minA)
        {
            int temp=b[i]-minA;
            count1+=temp;
        }
    }
    //case2
    for(int i=0;i<n1;i++)
    {
        if(a[i]<=maxB)
        {
            int temp=maxB-a[i];
            count2+=temp;
        }
    }
    //case3
    for(int i=0;i<n1;i++)
    {
        count3+=(maxA-a[i]);
    }
    for(int i=0;i<n2;i++)
    {
        if(maxA<=b[i])
        {
            count3+=(b[i]-maxA);
        }
    }
    //case4
    for(int i=0;i<n2;i++)
    {
        count4+=(b[i]-minB);
    }
    for(int i=0;i<n1;i++)
    {
        if(a[i]<=minB)
        {
            count4+=(minB-a[i]);
        }
    }
   int ans=(count1<count2 && count1<count3 && count1<count4)?count1:(count2<count3 && count2<count4)?count2:(count3<count4)?count3:count4;
   cout<<ans<<endl;
   if (ans==count1) cout<<"case 1\n";
   if (ans==count2) cout<<"case 2\n";
   if (ans==count3) cout<<"case 3\n";
   if (ans==count4) cout<<"case 4\n";
}
