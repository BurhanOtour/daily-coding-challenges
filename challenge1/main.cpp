#include <iostream>
#include <vector>

void solveRek(int remainingSteps, std::vector<int> vector, int &variations);

void solve(int N, std::vector<int> const &stepsSet, int &variations) {
    if (N > 0) {
        for (int i = 0; i < stepsSet.size(); ++i) {
            solve(N - stepsSet.at(i), stepsSet, variations);
        }
    } else if (N == 0) {
        variations++;
    }
}

int main() {
    int variations = 0;
    int steps = 4;
    std::vector<int> stepsSet{2, 1};

    solve(steps, stepsSet, variations);
    std::cout << variations;
    return 0;
}