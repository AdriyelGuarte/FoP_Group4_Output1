#include <iostream>
#include <string>

int main(){
	std::string word1 = "\0";
	std::string word2 = "\0";
	char placeholder = '\0';
	
	std::cout << "Enter Word 1: ";
	std::cin >> word1;
	
	std::cout << "Enter Word 2: ";
	std::cin >> word2;
	
	std::cout << word1.length() << " " << word2.length() << "\n";
	std::cout << word1 << word2 << "\n";
	
	placeholder = word1[0];
	word1[0] = word2[0];
	word2[0] = placeholder;
	
	std::cout << word1 << " " << word2;
	
	return 0;
}
