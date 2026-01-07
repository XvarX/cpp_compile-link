#include <iostream>
#include "include/lesson1/mymath/myadd.h"
// #include "math/add.h"

using namespace std;

int main() {
    cout << "hello world" << endl;
    
    MyAdd oAdd(1, 2);
    cout << "1 + 2 = " << oAdd.getresult() << endl;

    // Add oAdd2(1, 2);
    // cout << "1 + 2 + 3 = " << oAdd2.getresult() << endl;

    
    return 0;
}