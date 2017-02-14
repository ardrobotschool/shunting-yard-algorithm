#include <iostream>
#pragma once

struct Node{
    char token;
    Node* next = NULL;
};

class Stack{
    public:
        char peek();
        char pop();
        void push(char token);
    private:
        Node* head = NULL;
};