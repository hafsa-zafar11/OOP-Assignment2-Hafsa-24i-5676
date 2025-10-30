#include <iostream>
using namespace std;

class ArrayStack {
    char* a;
    int top, cap;
public:
    ArrayStack(int c){ cap=c; a=new char[c]; top=-1;
	 }
    ~ArrayStack(){
	 delete[] a;
	 }
    bool empty(){ 
	return top==-1;
	 }
    void push(char x){ if(top<cap-1) a[++top]=x; }
    char pop(){ return empty() ? '\0' : a[top--]; }
};

void ChangeLocationIter(char arr[], int b1, int b2){
    ArrayStack s(b2 - b1 + 1);
    for(int i=b1;i<=b2;i++) s.push(arr[i]);
    for(int i=b1;i<=b2;i++) arr[i]=s.pop();
}

void PrintPatternSimple(int n){
    for(int line=1; line<=n; line++)
	{
        for(int i=1; i<line; i++) cout << 1 << " ";
        cout << (n - line + 1) << endl;
    }
}

int main(){
    char A[7] = {'L','I','B','R','A','R','Y'};
    cout << "Before: ";
    for(int i=0;i<7;i++) cout << A[i] << " ";
    ChangeLocationIter(A, 2, 6);
    cout << "\nAfter:  ";
    for(int i=0;i<7;i++) cout << A[i] << " ";

    int n;
    cout << "\n\nEnter number = ";
    cin >> n;
    PrintPatternSimple(n);
    return 0;
}

