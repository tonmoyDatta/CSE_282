#include<iostream>
#include <string>
using namespace std;
struct student {
string name;
int age;
};
// function prototype
//void display(struct student s);
void display(struct student s) {
cout<<"Displaying information"<<endl;
cout<<"Name: "<< s.name;
cout<<"\nAge: "<< s.age;
}
int main() {
struct student s1;
cout<<"Enter name: "<<endl;
getline(cin,s1.name);
cout<<"Enter age: "<<endl;
cin>>s1.age;
display(s1); // passing struct as an argument
return 0;
}

