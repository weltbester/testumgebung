/*
 * Copyright: Georg Pohl, 70174 Stuttgart, et al.
 * Filename: tests.cpp
 */
 #include <iostream>
 #include <queue>
 #include <stack>
 #include <map>
 using namespace std;

 /* CONSTANTS */


/* Instance Variables */

/* Prototypes */
void collapse(queue<int> &);


int main() {
    queue<int> qu;

    qu.push(7);
    qu.push(2);
    qu.push(8);
    qu.push(9);
    qu.push(4);
    qu.push(13);
    qu.push(7);
    qu.push(1);
    qu.push(9);
    qu.push(10);

    collapse(qu);


    cout << endl;
    return 0;
} // main

/* Functions */
void collapse(queue<int> &q) {
    int temp;
    stack<int> st1;
    stack<int> str2;

    while (!q.empty()) {
        temp = q.pop();
        st1.push(temp);
    }
    cout << st1.top() << endl;
}
// {7, 2, 8, 9, 4, 13, 7, 1, 9, 10}