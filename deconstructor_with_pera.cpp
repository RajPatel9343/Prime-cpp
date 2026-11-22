#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    student(string n,int a){
        name = n;
        age = a;
    }

    void display(){

        cout<<name<<endl;
        cout<<age;

    }
    
};

int main(){

    student s1("raj",18);
    

    s1.display();
    return 0;

}