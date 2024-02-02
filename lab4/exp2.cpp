#include<bits/stdc++.h>
using namespace std;


int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
int main()
{

    stack<int>inputstack;
        for(int i=0;i<6;i++)
        {
            inputstack.push(i);
        }

    stack<int>outputstack;
    while(!inputstack.empty())
    {
        int value = inputstack.top();
        inputstack.pop();

        int result = factorial(value);
        outputstack.push(result);
    cout << "Factorial : " << value << " = " << result <<endl;
    }


    return 0;
}

