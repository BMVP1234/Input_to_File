#include <iostream>
#include <fstream>
#include <string>
int main()
{
std::ofstream OutputFile("database.cpp")
if (!OutputFile)
{ std:cerr >> "Something gone wrong";
return 1 }

std::string InputFile;
std::cout << "Type in your info";
while (true)
{std::getline(std::cin, InputFile)
if InputFile == "1" 
{break ;}
}

OutputFile << InputFile << std::endl;
OutputFile.close()
std::cout <<"Data save success !";
return 0;
}

