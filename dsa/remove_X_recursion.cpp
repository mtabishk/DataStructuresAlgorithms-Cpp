int length(char input[]) {
	int len = 0;
	for (int i = 0; input[i] != '\0'; i++) {
		len++;
	}
	return len;
}

void removeX(char input[], int start) {
	if (input[start] == '\0') {
		return;
	}

	removeX(input, start + 1);

	if (input[start] == 'x') {
		int len = length(input);
		int i;
		for (i = start + 1; i < len; i++) {
			input[i - 1] = input[i];
		}
		input[i - 1] = '\0';
	}

}

void removeX(char input[]) {
	removeX(input , 0);
}