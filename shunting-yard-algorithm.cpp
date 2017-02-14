#include <iostream>

using namespace std;

int main(){
    char input[128];
    while(true){//Primary Loop
        cout << "Enter an infix expression (or \"q\" to quit): ";
        cin.getline(input, 128);
        //cout << endl;
        if(tolower(input[0]) == 'q'){
            cout << "Life is suffering." << endl;
            break;
        }
        cout << "Infix: " << input << endl;
    }
    return 0;
}