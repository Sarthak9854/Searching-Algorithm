#include<iostream>
using namespace std;

int Binary_search(int a[],int n,int x)
{
    int first=0,last=n-1;
    while(first<=last)
    {
        int mid=(first+last)/2;
        if(a[mid]==x) return (mid);
        else if(a[mid]<x) first=mid+1;
        else last=mid-1;
    }
    return (-1);
}
int main()
{
    int n;
    int a[20];

    cout<<"Enter The size of the array:";
    cin>>n;
    cout<<"Enter"<<n<<" Integers:"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int x;
    cout<<"Enter Target Element To Search";
    cin>>x;
    int result=Binary_search(a,n,x);
    if(result==-1)
    {
        cout<<"Element Not Found";
    }
    else
    {
        cout<<"Element Found At Index"<<result;
    }
    return 0;
}

/* Output
PS D:\Sarthak C> cd "d:\Sarthak C\" ; if ($?) { g++ tempCodeRunnerFile.cpp -o tempCodeRunnerFile } ; if ($?) { .\tempCodeRunnerFile }
Enter The size of the array:7
Enter7 Integers:
22
63
36
58
46
85
46
Enter Target Element To Search46
Element Found At Index4
PS D:\Sarthak C> */