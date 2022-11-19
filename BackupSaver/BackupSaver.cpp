#include <iostream>
#include <thread>
#include <chrono>
#include <Windows.h>

std::string locationFile;
std::string locationFileText = "copy";
std::string endText;
int min = 0;
void setUp() {

  
    std::cout << "Paste your file location:\n";
    std::cin >> locationFile;

    endText = locationFileText + " " + locationFile;
    std::cout << endText << std::endl;

    std::cout << "Paste your file destination:\n";
    std::cin >> locationFile;

    endText += " " + locationFile;

    std::cout << "How many minutes: \n";
    std::cin >> min;

    
    while (min < 0) {
        std::cout << "How many minutes: \n";
        std::cin >> min;
    }
    
}
void waitThread(int minutes) {
   
    std::this_thread::sleep_for(std::chrono::minutes(minutes));
   
}

void backupFile() {
    std::system(endText.c_str());
}

int main()
{
    setUp();
    
    for (;;) {
        Sleep(2000);
        std::thread th1(waitThread, min);
        std::thread th2(backupFile);
        th1.join();
        th2.join();
    }

   

}