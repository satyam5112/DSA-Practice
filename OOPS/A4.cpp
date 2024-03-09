#include<iostream>
using namespace std;
float volume(int side)
{
    float vol=side*side*side;
    return vol;
}
float volume(int l, int b, int h)
{
    float vol=l*b*h;
    return vol;
}
float volume(int r, int h)
{
    float vol=3.14*(r*r*h);
    return vol;
}
int main()
{
    float side,l,b,h,r,height;
    int option;
    do{
        cout<<"Choose 1.CUBE 2.CUBOID 3.CYLINDER 4.EXIT\n";
        cin>>option;

       switch(option)
       {
        case 1:
        cout<<"Enter the length of side:";
        cin>>side;
        cout<<"Volume of cube = "<<volume(side)<<endl;
        break;
        
        case 2:
        cout<<"Enter the length:";
        cin>>l;
        cout<<"Enter the breadth:";
        cin>>b;
        cout<<"Enter the height:";
        cin>>h;
        cout<<"Volume of Cuboid = "<<volume(l,b,h)<<endl;
        break;

        case 3:
        cout<<"Enter the radius:";
        cin>>r;
        cout<<"Enter the height:";
        cin>>h;
        cout<<"Volume of Cylinder: "<<volume(r,height)<<endl;
        break;

        case 4:
        return 1;

        default:
        cout<<"Enter valid option.";
        break;

       }
    }while(option!=4);

    return 0;
}