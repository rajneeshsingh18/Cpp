#include <iostream>

using namespace std;

int main(){
    
    int num1;
    cout << "Enter a number :"; // '<<' insertion operator
    cin >> num1;   // '>>' extraction operator  

    // cin >> num1 // no semicolon ; gives an error

    cout << "Number entered is "<< num1;
    return 0;
}