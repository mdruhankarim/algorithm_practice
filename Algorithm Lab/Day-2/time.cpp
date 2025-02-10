#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>

void displayTime() {
    while (true) {
        auto now = std::chrono::system_clock::now();
        std::time_t currentTime = std::chrono::system_clock::to_time_t(now);
        std::tm* localTime = std::localtime(&currentTime);

        std::cout << "\r" << std::put_time(localTime, "%H:%M:%S") << std::flush;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

int main() {
    displayTime();
    return 0;
}