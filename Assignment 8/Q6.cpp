#include <iostream>
#include <vector>
using namespace std;

class PriorityQueue {
public:
    vector<int> heap;

    void swapElem(int &a, int &b) {
        int t = a;
        a = b;
        b = t;
    }

    void push(int val) {
        heap.push_back(val);
        int i = heap.size() - 1;
        while (i > 0 && heap[(i - 1) / 2] < heap[i]) {
            swapElem(heap[i], heap[(i - 1) / 2]);
            i = (i - 1) / 2;
        }
    }

    void heapify(int i) {
        int largest = i;
        int l = 2 * i + 1;
        int r = 2 * i + 2;

        if (l < heap.size() && heap[l] > heap[largest]) largest = l;
        if (r < heap.size() && heap[r] > heap[largest]) largest = r;

        if (largest != i) {
            swapElem(heap[i], heap[largest]);
            heapify(largest);
        }
    }

    void pop() {
        if (heap.size() == 0) return;
        heap[0] = heap.back();
        heap.pop_back();
        heapify(0);
    }

    int top() {
        if (heap.size() == 0) return -1;
        return heap[0];
    }

    bool empty() {
        return heap.size() == 0;
    }
};

int main() {
    PriorityQueue pq;
    pq.push(20);
    pq.push(5);
    pq.push(30);
    pq.push(10);

    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;

    return 0;
}
