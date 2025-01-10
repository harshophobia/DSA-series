#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // Outer
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        
        // Inner loop
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1) || i == n) {
                cout << "*";  
            } else {
                cout << " "; 
            }
        }
        
        cout << endl;
    }

    return 0;
}