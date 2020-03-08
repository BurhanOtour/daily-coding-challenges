#include <iostream>
#include <vector>

void solveRek(int remainingSteps, std::vector<int> vector, int &variations);

void solve(int N, std::vector<int> stepsSet, int &variations) {
    for (int i = 0; i < stepsSet.size(); ++i) {
        solveRek(N - stepsSet.at(i), stepsSet, variations);
    }

}

void solveRek(int remainingSteps, std::vector<int> stepsSet, int &variations) {
    if (remainingSteps == 0) {
        variations++;
    } else if (remainingSteps > 0) {
        for (int i = 0; i <stepsSet.size(); ++i) {
            solveRek(remainingSteps - stepsSet.at(i), stepsSet, variations);
        }
    }

};

int main() {
    int variations = 0;
    int steps = 4;
    std::vector<int> stepsSet{2, 1};

    solve(steps, stepsSet, variations);
    std::cout << variations;
    return 0;
}