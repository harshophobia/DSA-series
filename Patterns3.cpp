#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for(int i = 0;i < n;i++) {
        int ch = 'A';
        for(char j = 0;j < n;j++) {
            
            cout << (char)ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }
    return 0;
}

/* Output-- 
A B C D E 
A B C D E
A B C D E
A B C D E
A B C D E
*/