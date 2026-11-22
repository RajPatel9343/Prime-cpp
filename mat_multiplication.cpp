#include<iostream>
using namespace std;
int main()
{
    int a[3][3],b[3][3],c[3][3];
    cout<<"enter the element of matrix a \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }

    cout<<"enter the element of matrix b \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>b[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            c[i][j]+=a[i][j]*b[i][j];
        }
    }

    cout<<"the sum of the array is: \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<" \t"<< c[i][j];
        }
        cout<<"\n";
    }
    return 0;
}