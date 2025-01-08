#include <iostream>
using namespace std;

int main() {
    int n = 4;
    char ch = 'A';
    for(int i = 0;i < n+1;i++) {
        for(int j = 0;j < i;j++) { 
            cout << (char)ch << " ";
            ch+=1;
        }
    cout << endl;
    }
    return 0;
}

/* Output--
A
B C
D E F
G H I J
*/