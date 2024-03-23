// A program to create ann array of objects.
#include<iostream>
using namespace std;
class A
{
    private:
    int x;
    public:
    void setdata(int t)
    {
        x=t;
    }
    void getdata(void)
    {
        cout<<"Rs.: "<<x<<endl;
    }
};
int main()
{
    int size;
    cout<<"Enter the numbers of objects: ";
    cin>>size;
    A *ptr = new A[size];
    A *ptrtemp=ptr;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the value of object " <<i+1<<":"<<endl;
        int v;
        cin>>v;
        ptr->setdata(v);
        ptr++;
    }
    
    cout<<"---------------RESULT---------------"<<endl;
    
    for(int i=0;i<size;i++)
    {
        cout<<"Price of object " <<i+1<<":"<<endl;
        ptrtemp->getdata();
        ptrtemp++;
    }
    return 0;
}