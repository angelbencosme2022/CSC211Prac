#include <iostream>
#include <queue>

int main(){
    std::queue<std::string> myQueue;

    myQueue.push("John");
    myQueue.push("Adam");
    myQueue.push("George");

    while(!myQueue.empty()){
        std::cout << myQueue.front() << std::endl;
        myQueue.pop();
    }



    return 0;
}