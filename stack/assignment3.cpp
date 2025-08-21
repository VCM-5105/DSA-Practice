#include <iostream>
#include <stack>
using namespace std;

bool checkStack(int push[], int pop[], int n) {
    stack<int> stack;
    int i = 0;  
    int j = 0; 

    while (j < n) {
        
        if (stack.empty() || stack.top() != pop[j]) {
            if (i >= n) {
                return false;  
            }
            stack.push(push[i]);
            i++;
        } else {
            stack.pop();
            j++;
        }
    }
    return stack.empty();
}

int main() {
    int push[] = {1, 2, 3, 4, 5};
    int pop[] = {5, 4, 3, 2, 1};
    int n = sizeof(push) / sizeof(push[0]);
    
    bool result = checkStack(push, pop, n);
    
    if (result) {
        cout << "The push and pop sequences are valid." << endl;
    } else {
        cout << "The push and pop sequences are not valid." << endl;
    }

    return 0;
}