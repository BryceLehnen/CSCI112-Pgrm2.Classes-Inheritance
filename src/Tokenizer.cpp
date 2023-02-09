#include <iostream>
#include <vector>
#include <string>
using namespace std;

// This takes the input string from the console and splits it up
// into the individual elements and returns a vector of said elements
vector<string> tokenizer(string s, string del = " ") {

    // Declaration
	vector<string> parseLine;

	int start = 0;
	int end = s.find(del);
	// Splits first (n-1) elements
	while (end != -1) {
		parseLine.push_back(s.substr(start, end - start));
		start = end + del.size();
		end = s.find(del, start);
	}
	// Sends (nth) element
	parseLine.push_back(s.substr(start, end - start));

	return parseLine;
}
