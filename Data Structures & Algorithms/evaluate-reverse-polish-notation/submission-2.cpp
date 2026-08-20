class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> num;

        for (string token : tokens) {
            if (token != "+" && token != "-" && token != "*" && token != "/") {
                num.push(stoi(token));
            }
            else {
                int b = num.top();
                num.pop();

                int a = num.top();
                num.pop();

                if (token == "+") {
                    num.push(a + b);
                }
                else if (token == "-") {
                    num.push(a - b);
                }
                else if (token == "*") {
                    num.push(a * b);
                }
                else if (token == "/") {
                    num.push(a / b);
                }
            }
        }

        return num.top();
    }
};