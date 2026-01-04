#include <iostream>
#include "third/math/add.h"
using namespace std;

int main() {
    cout << "hello world" << endl;
    
    Add oAdd(1, 2);
    cout << "1 + 2 = " << oAdd.getresult() << endl;
    return 0;
}