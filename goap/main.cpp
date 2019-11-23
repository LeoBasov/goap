#include <iostream>
#include <stack>

int main()
{
    std::stack<float> stack;

    stack.push(1.0);

    std::cout << "Top of stack: " << stack.top()  << std::endl;

    stack.pop();
    stack.pop();

    stack.pop();


    std::cout << "Hello World!" << std::endl;
    return 0;
}
