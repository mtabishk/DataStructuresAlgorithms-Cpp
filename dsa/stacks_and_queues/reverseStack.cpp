void reverseStack(stack<int> &input, stack<int> &extra) {
    //Write your code here
    if (input.size() <= 1) {
        return;
    }
    else {
        int x = input.top();
        input.pop();

        reverseStack(input, extra);

        while (!input.empty()) {
            int top = input.top();
            extra.push(top);
            input.pop();
        }

        extra.push(x);

        while (!extra.empty()) {
            int top = extra.top();
            input.push(top);
            extra.pop();
        }
    }
}