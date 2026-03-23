#include <iostream>
#include <vector>
#include <deque>
#include <cmath>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        deque<int> q;

        for (int val : asteroids) {
            bool destroyed = false;

            // Collision condition
            while (!q.empty() && q.back() > 0 && val < 0) {
                if (abs(q.back()) < abs(val)) {
                    q.pop_back(); // positive asteroid destroyed
                    continue;
                }
                else if (abs(q.back()) == abs(val)) {
                    q.pop_back(); // both destroyed
                    destroyed = true;
                    break;
                }
                else {
                    destroyed = true; // negative destroyed
                    break;
                }
            }

            if (!destroyed) {
                q.push_back(val);
            }
        }

        return vector<int>(q.begin(), q.end());
    }
};

int main() {
    Solution sol;

    int n;
    cout << "Enter number of asteroids: ";
    cin >> n;

    vector<int> asteroids(n);
    cout << "Enter asteroids values (positive / negative): ";
    for (int i = 0; i < n; i++) {
        cin >> asteroids[i];
    }

    vector<int> result = sol.asteroidCollision(asteroids);

    cout << "Result after collision: ";
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
