#include <iostream>
using namespace std;

void ChangeLocation(
char Array[], int start, int end) {
    
    if (start >= end)
        return;

    char temp = Array[start];
    Array[start] = Array[end];
    Array[end] = temp;

    
    ChangeLocation(Array, start + 1, end - 1);
}

int main() {
    char A[7] = {'L','I','B','R','A','R','Y',};

    cout << "Before: ";
    for (int i = 0; i < 7; i++)
        cout << A[i] << " ";

    ChangeLocation(A, 2, 6); 

    cout << "\nAfter:  ";
    for (int i = 0; i < 7; i++)
        cout << A[i] << " ";

    return 0;
}

