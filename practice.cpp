#include <iostream>
#include <thread>
#include <vector>
#include <chrono>

int main() {
    int NUM_CPU = std::thread::hardware_concurrency();
    constexpr int NUM_NUMBERS = 1000000000;

    struct ThreadData {
        int start;
        int end;
        int count;
    };

    void countNumbers(ThreadData* data) {
        data->count = 0;
        for (int i = data->start; i <= data->end; i++) {
            data->count++;
        }
    }

    int numCPU = NUM_CPU;
    int perChunk = NUM_NUMBERS / numCPU;
    int remainder = NUM_NUMBERS % numCPU;

    std::vector<ThreadData> threadData(numCPU);

    std::vector<std::thread> threads;

    auto startTime = std::chrono::steady_clock::now();

    int start = 1;
    for (int i = 0; i < numCPU; i++) {
        threadData[i].start = start;
        int extra = (i < remainder) ? 1 : 0;
        threadData[i].end = start + perChunk - 1 + extra;
        start = threadData[i].end + 1;
        threads.emplace_back(countNumbers, &threadData[i]);
    }

    int totalCount = 0;
    for (int i = 0; i < numCPU; i++) {
        threads[i].join();
        totalCount += threadData[i].count;
    }

    auto endTime = std::chrono::steady_clock::now();
    auto executionTime = std::chrono::duration_cast<std::chrono::microseconds>(endTime - startTime).count();

    std::cout << "Count: " << totalCount << std::endl;
    std::cout << "Execution Time: " << executionTime << " microseconds" << std::endl;

    return 0;
}
