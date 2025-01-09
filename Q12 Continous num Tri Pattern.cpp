#include <iostream>
using namespace std;

int main() {
    int n = 4,nums = 1;

    for(int i = 0;i < n+1;i++) {
        for(int j = 0;j < i;j++) { 
            cout << nums << " ";
            nums+=1;
        }
    cout << endl;
    }
    return 0;
}

/* Output--
1
2 3
4 5 6
7 8 9 10
*/