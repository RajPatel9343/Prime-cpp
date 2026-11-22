#include<iostream>
using namespace std;
class student{
    public: //exix modifire
    string name;
    int age;

    void display(){
        cout<<name<<endl;
        cout<<age<<endl;
    }
};
int main(){
    student s1;
    s1.name = "raj patel";
    s1.age = 18;

    s1.display();
    return 0;
}