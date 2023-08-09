#include <iostream>
#include <stack>
int main(){
    std::stack<int> stack;
    for(int i = 0; i < 10; i++){
        stack.push(i);
    }
    while(!stack.empty()){
        std::cout << stack.top() << std::endl;
        stack.pop();
    }
    std::cout << (stack.size()) << std::endl;
    return 0;
}
