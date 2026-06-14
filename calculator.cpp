#include <iostream>
using namespace std;

void calculator(int n1, int n2, string op) {
    if(op == "+") {
        cout << n1 + n2 << endl;
    }
}

int main() {
    calculator(2, 5, "+");
}