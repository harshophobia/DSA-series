#include <iostream>
using namespace std;
//basic pattern
int main() {
    int n = 3;
    for(int i = 0;i < n;i++){

        for(int j = 1;j <= n;j++) {

            cout << '*' << " ";
        }
        cout << endl;
    }
    return 0;
}

/* Output-- 

* * * 
* * *
* * *

*/