#include <iostream>
#include "Stack.hpp"
#include <cstring>

using namespace std;

char* getPostfix(char *& infix);

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
        //cout << "Infix: " << input << endl;
    }
    return 0;
}

char* getPostfix(char *& infix){
    char* postfix = new char[strlen(infix)];
    strcpy(postfix, "testing.");
    postfix[8] = 0;
    return postfix;
}