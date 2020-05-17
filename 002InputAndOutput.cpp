/*
Challenge name: Input and Output
URL: https://www.hackerrank.com/challenges/cpp-input-and-output/problem
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> num;
        sum += num;
    }
    cout << sum;
    return 0;
}
