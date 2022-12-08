#include "palindrome.h"
#include <iostream>

/*Checks to see if string pal is a palidrome by calling itself recursively and using the index of first and last. 
* If first and last are the same then it is true, if they are not the same then it's not a palindrome. */
bool Palindrome::isPalindrome(string pal, int first, int last) {
	int length = 0;

	if (first == last) {
		return true;
	}

	else if(pal[first] != pal[last]) {
		return false;
	}

	else {
		return isPalindrome(pal, ++first, --last);
	}

}