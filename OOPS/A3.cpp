// // PATTERN PRINTING.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int h=5,i,j;
//     // cout<<"Enter the height:";
//     // cin>>h;
//     for(i=1;i<=h;i++)
//     {
//         char al='A';
//         for(j=1;j<(2*h);j++)
//         {
//             if(j<i)
//             {
//                 cout<<" ";
//                 cout<<" ";
//             }
//             if(j>=i && i+j<=10)
//             {
//                 cout<<al++;
//                 cout<<" ";
//             }
//             if(i+j>10)
//             {
//                 cout<<" ";
//                 cout<<" ";
//             }
//         }
//         cout<<"\n";
//     } 
//     return 0;
// }
#include<iostream>
using namespace std;

int main() {
    int h;
    cout << "Enter the height: ";
    cin >> h;

    for(int i = 1; i <= h; i++) {
        char al = 'A';
        for(int j = 1; j < (2 * h); j++) {
            if(j < i) {
                cout << " ";
                cout << " ";
            }
            if(j >= i && i + j <= (2 * h - 1)) {
                cout << al++;
                cout << " ";
            }
            if(i + j > (2 * h - 1)) {
                cout << " ";
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
