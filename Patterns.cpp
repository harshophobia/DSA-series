#include <iostream>
using namespace std;
//basic pattern
int main() {
    int n = 4;
    for(int i = 0;i < n;i++){

        for(int j = 1;j <= n;j++) {

            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

/* Output-- 
1 2 3 4 
1 2 3 4
1 2 3 4
1 2 3 4
*/