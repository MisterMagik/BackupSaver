#include <iostream>



int main()
{
    std::string locationFile;
    std::string locationFileText = "copy";
    std::string endText;
    std::cout << "Paste your file location:\n";
    std::cin >> locationFile;
    
    endText = locationFileText + " " + locationFile;
    std::cout << endText << std::endl;

    std::cout << "Paste your file destination:\n";
    std::cin >> locationFile;

    endText += " " + locationFile;


    std::system(endText.c_str());

}


