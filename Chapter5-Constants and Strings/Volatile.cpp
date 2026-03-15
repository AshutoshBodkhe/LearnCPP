#include <iostream>
#include <thread>
#include <chrono>

volatile bool stopFlag = false;

using namespace std;

void externalFunction() {
    std::cout << "External function is running..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    stopFlag = true;
}

int main() {
    std::thread t(externalFunction);
    while (!stopFlag) {
        std::cout << "Main thread is running..." << std::endl;
    }
    t.join();
    std::cout << "Main thread is exiting..." << std::endl;
    return 0;
}