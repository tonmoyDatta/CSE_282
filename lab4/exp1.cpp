#include<bits/stdc++.h>
using namespace std;
// Stack Container in C++
int main() {
stack<int>mystack; // variable declaration
mystack.push(5); // push operation
mystack.push(4);
mystack.push(3);
mystack.push(2);
mystack.push(1);

int sum = 0;
while (!mystack.empty()){
    sum+=mystack.top();
    mystack.pop();
}

cout<< "Sum of elements: "<<sum <<endl;
return 0;
}

