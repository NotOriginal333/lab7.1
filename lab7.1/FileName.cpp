#include <iostream>
#include <algorithm>  
#include <vector>  
#include <ctime>  
#include <numeric>  

using namespace std;

int RandomNumber() { return (std::rand() % 100); }

void printVector(const vector<int>& vec) {
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}

int sumMinMaxIndices(const vector<int>& vec) {
    if (vec.empty()) {
        return 0; 
    }

    int minIndex = 0;
    int maxIndex = 0;
    for (size_t i = 1; i < vec.size(); ++i) {
        if (vec[i] < vec[minIndex]) {
            minIndex = i;
        }
        if (vec[i] > vec[maxIndex]) {
            maxIndex = i;
        }
    }

    return minIndex + maxIndex;
}

int main() {
    srand(unsigned(time(0)));

    int n;
    cout << "n = ? "; cin >> n;
    vector<int> v(n);

    generate(v.begin(), v.end(), RandomNumber);

    cout << "Vector: ";
    printVector(v);

    int sumIndices = sumMinMaxIndices(v);

    cout << "Sum of indices of min and max elements: " << sumIndices << endl;

    return 0;
}
