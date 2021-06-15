#include <iostream>
#include <string>
#include <vector>

int main(int argc, char *argv[]){
		std::string s = argv[1];
		std::cout << s << std::endl;

		int size = s.length();
		bool result = true;

		std::vector<bool> flags(128, false);
		for(int i=0; i < size; i++){
				int val = s[i];
				if(flags[val]){
						result = false;
						break;
				} else {
						flags[val] = true;
				}
		}

		std::string message = result ? "True" : "False";
		std::cout << message << std::endl;
		return 0;
}
