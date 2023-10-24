#include <iostream>
#include <climits>

#include "Ejercicio03.h"

MinStack::Node::Node(int val, int min_val, Node* next_node) : value(val), min_value(min_val), next(next_node) {}

MinStack::MinStack() : top_node(nullptr) {
}


void MinStack::push(int value) {
    int min_val = (top_node == nullptr) ? value : std::min(value, top_node->min_value);
    top_node = new Node(value, min_val, top_node);
}

void MinStack::pop() {
    if (top_node != nullptr) {
        Node* temp = top_node;
        top_node = top_node->next;
        delete temp;
    }
}

int MinStack::top() {
    if (top_node != nullptr) {
        return top_node->value;
    }
    return INT_MIN;
}

int MinStack::getMin() {
    if (top_node != nullptr) {
        return top_node->min_value;
    }
    return INT_MIN;
}


