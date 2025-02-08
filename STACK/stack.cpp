#define MAX 10
#include <iostream>
using namespace std;

int stack[MAX];
int TOP = -1;

void push(int key) {
  if (TOP == MAX - 1) {
    cout << "The stack is full<<endl";
  } else {
    TOP = TOP + 1;
    stack[TOP] = key;
  }
}
int main() {
  cout << "The keys to be pushed onto the stack are:" << endl;

  for (int i = 0; i < MAX; i++) // Loop to take multiple inputs
  {
    int key;
    cin >> key;
    push(key);
  }

  cout << "The elements in the stack are: ";

  for (int i = 0; i <= TOP; i++) // Loop to display stack elements
  {
    cout << stack[i] << " ";
  }

  cout << endl;

  return 0;
}


