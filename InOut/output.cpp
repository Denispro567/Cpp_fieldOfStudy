#include <fstream>
#include <iostream>
#include <string>


int main() {
  
	std::string s;
	std::ifstream file;
	file.open("some_random_text.txt");
	
	// Считка слов из файла
	//for(file >> s; !file.eof(); file >> s) 
        //         std::cout << s << std::endl;
	for(int i=0;i<10;i++)
	{
		std::getline(file,s);
		std::cout << s << std::endl;
	}
	file.close();
}

