#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isPermutation(string s1, string s2);

int main(int argc, char *argv[]){
		string s1 = argv[1];
		string s2 = argv[2];
		cout << s1 << ", " << s2 << endl;

		string result = "";
		result = isPermutation(s1, s2) ? "True"  : "False";

		cout << result << endl;
		return 0;
}

bool isPermutation(string s1, string s2){
		bool flag = true;
		int size = s1.length();
		int val = 0;
		if(size != s2.length()) return false;

		vector<int> hash_table(128, 0);

		for(int i=0; i < size; i++){
				val = s1[i];
				hash_table[val]++;
		}
		
		for(int i=0; i < size; i++){
				val = s2[i];
				hash_table[val]--;
				if(hash_table[val] < 0) flag = false;
		}

		return flag;
}
