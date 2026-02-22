#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

int calPoints(vector<string> &operations) {
    stack<int> st;

    for (string op : operations) {

        if (op == "+") {
            int t1 = st.top(); st.pop();
            int t2 = st.top();

            st.push(t1);
            st.push(t1 + t2);
        }
        else if (op == "D") {
            st.push(2 * st.top());
        }
        else if (op == "C") {
            st.pop();
        }
        else {
            st.push(stoi(op));
        }
    }

    int sum = 0;
    while (!st.empty()) {
        sum += st.top();
        st.pop();
    }

    return sum;
}

int main() {
    vector<string> ops = {"5", "2", "C", "D", "+"};
    cout << calPoints(ops);
    return 0;
}
