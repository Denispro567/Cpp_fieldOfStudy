#include <fstream>
#include <iostream>
#include <string>


int main() {
  
	std::string buffer;
	std::ifstream file;
	file.open("students.txt");
	
	while(std::getline(file,buffer))
		std::cout << buffer << std::endl;
	file.close();
}
