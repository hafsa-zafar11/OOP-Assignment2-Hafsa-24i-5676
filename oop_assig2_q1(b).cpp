#include <iostream>
using namespace std;

void PrintPattern(int n, int line = 1) {
    if (line > n)
        return;

   
    for (int i = 1; i < line; i++)
        cout << 1 << " ";

   
    cout << n - line + 1 << endl;

    PrintPattern(n, line + 1);
}

int main() {
    int n;
    cout << "Enter any number = ";
    cin >> n;
    PrintPattern(n);
    return 0;
}



