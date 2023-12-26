#include <iostream>
#include <vector>
#include <queue>

// Define a comparison function for the priority queue
struct CompareVectors {
    bool operator()(const std::vector<int>& v1, const std::vector<int>& v2) const {
        // Compare based on the first element of the vectors
        return v1[0] < v2[0]; 
    }
};

int main() {
    // Declare a priority queue of vectors of integers
    std::priority_queue<std::vector<int>, std::vector<std::vector<int>>, CompareVectors> pq;

    // Example: Inserting elements into the priority queue
    pq.push({3, 1, 4, 1});
    pq.push({1, 5, 9, 2});
    pq.push({6, 5, 3, 5});

    // Example: Pop elements from the priority queue
    while (!pq.empty()) {
        std::vector<int> topVector = pq.top();
        pq.pop();

        // Process the top vector or do whatever you need
        for (int value : topVector) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
