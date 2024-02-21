#include<iostream>
using namespace std;
int main()
{
    int i,n,arr[100],position,element;

    cout<<"Enter the size of array:";
    cin>>n;

    cout<<"Enter the elements of array";
    for(i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    cout<<"ARRAY"<<"\n";
    cout<<"{";
    for(i=0;i<n;i++)
    {
    cout<<arr[i]<<" ";
    }
    cout<<"}";
    cout<<"\n"<<"Enter the position at which element is to be inserted:"<<"\n";
    cin>>position;
    cout<<"Enter the element to be inserted:"<<"\n";
    cin>>element;

for(i=n-1;i>=position-1;i--)
{
    arr[i+1]=arr[i];
}
    arr[position-1]=element;
    n++;

    cout<<"NEW ARRAY"<<endl;
    for(i=0;i<n;i++)
    {
    cout<<arr[i]<<" ";
    }
    return 0;
}
