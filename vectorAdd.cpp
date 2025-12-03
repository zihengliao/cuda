#include <iostream>
#include <vector>

using std::cout;
using std::vector;

vector<int> addVectors(const vector<int>& a,
                       const vector<int>& b) {
    vector<int> result(a.size());

    for (size_t i = 0; i < a.size(); i++) {
        result[i] = a[i] + b[i];
    }

    return result;
}

int main() {
    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {10, 20, 30, 40};

    vector<int> result = addVectors(a, b);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
