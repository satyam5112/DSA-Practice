// TOWER OF HANOI.
#include<iostream>
using namespace std;
void toh(int n, char src,char aux,char dest)
{
    if(n==1)
    {
        cout<< src <<" to "<<dest<<endl;
        return;
    }
    toh(n-1,src,dest,aux);
    toh(1,src,aux,dest);
    toh(n-1,aux,src,dest);
}
int main()
{   
    int num;
    cout<<"Enter number of discs: ";
    cin>>num;
    toh(num,'A','B','C');
    return 0;
}