#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Queue 
{
public:
  // Initialize queue of maximum size 'capacity'
  explicit Queue(size_t capacity) : entries(capacity) {}

  // Enqueue function
  void Enqueue(int x) 
  {
    if (tail == entries.size()) {
      // If number of elements in queue is equal to maximum capacity
      if (queueElements == entries.size()) {
        throw length_error("queue overflow");
        return;
      } else {
        // If number of elements in queue less than maximum queue size,
        // rearrange
        rotate(entries.begin(), entries.begin() + head, entries.end());
        head = 0, tail = queueElements;
      }
    }

    entries[tail] = x;
    ++tail, ++queueElements;
  }

  // Dequeue function
  int Dequeue() 
  {
    // No elements in queue
    if (!queueElements) {
      throw length_error("empty queue");
    }
    --queueElements;
    int ret = entries[head];
    ++head;
    return ret;
  }

  // Size function
  size_t size() const { return queueElements; }

  // Check for emptiness
  bool isEmpty() { return queueElements == 0; }

  // Display all elements in queue
  void display() {
    for (int i = head; i < tail; ++i) {
      cout << entries[i] << " ";
    }
    cout << endl;
  }

 private:
  size_t head = 0, tail = 0, queueElements = 0;
  vector<int> entries;
};

int main() {
  // Initialize queue of size 5
  Queue q(5);
  // Enqueue 3 elements
  q.Enqueue(1);
  q.Enqueue(2);
  q.Enqueue(3);
  // Print size
  cout << q.size() << "\n";
  // Print all elements
  q.display();
  // Check for emptiness, and Dequeue
  if (!q.isEmpty()) q.Dequeue();
  // Print size
  cout << q.size() << "\n";
  // Print all elements
  q.display();
  // Enqueue 3 more elements
  q.Enqueue(4);
  q.Enqueue(5);
  q.Enqueue(6);
  // Print size
  cout << q.size() << "\n";
  // Print all elements
  q.display();
  // Enqueue one more element -> Will throw error, since maximum size exceeeded
  /*
  q.Enqueue(7);
  // Print size
  cout << q.size() << "\n";
  // Print all elements
  q.display();
  */
  return 0;
}

/***** OUTPUT *****
3
1 2 3
2
2 3
5
2 3 4 5 6
******************/
