#include<iostream>
using namespace std;

int linear_search(int a[],int n,int x)
{
    for(int i=0; i<n; i++)
    {
        if(a[i]==x)
        {
            return i;
        }
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
    int result=linear_search(a,n,x);
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



/*OUTPUT
PS D:\Sarthak C> cd "d:\Sarthak C\" ; if ($?) { g++ tempCodeRunnerFile.cpp -o tempCodeRunnerFile } ; if ($?) { .\tempCodeRunnerFile }
Enter The size of the array:5
Enter5 Integers:
10
20
30
40
50
Enter Target Element To Search30
Element Found At Index2
PS D:\Sarthak C> */