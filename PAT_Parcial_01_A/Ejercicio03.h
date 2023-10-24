#pragma once
class MinStack
{
private:
    struct Node {
        int value;
        int min_value;
        Node* next;
        Node(int val, int min_val, Node* next_node);
    };

    Node* top_node;

public:
	MinStack();

	void push(int value);

	void pop();

	int top();

	int getMin();
};

