int length(char input[]) {
	int len = 0;
	for (int i = 0; input[i] != '\0'; i++) {
		len++;
	}
	return len;
}

bool checkPalindrome_helper(char input[], int start, int end) {
	if (input[0] == '\0' || input[0] == '\0') {
		return 1;
	}

	if (input[start] == input[end]) {
		return checkPalindrome_helper(input, start + 1, end - 1);
	} else {
		return 0;
	}

}


bool checkPalindrome(char input[]) {
	// Write your code here
	int len = length(input);
	return checkPalindrome_helper(input, 0, len - 1);
}


