#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <forward_list>
#include <array>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    cout << "=== Chapter 9 ===\n\n";

    // Exercise 9.1

    cout << "9.1: Best container for reading characters from a file:\n";
    cout << "Answer: vector<char> or string (continuous memory)\n\n";

    // Exercise 9.2

    cout << "9.2: List of ints:\n";
    list<int> li = { 1, 2, 3 };
    for (int x : li) cout << x << " ";
    cout << "\n\n";

    // Exercise 9.3

    cout << "9.3: begin() -> first element, end() -> one past last\n\n";

    // Exercise 9.4

    cout << "9.4: Find value in vector:\n";
    vector<int> v = { 1,2,3,4,5 };
    int value = 3;
    bool found = false;

    for (int i = 0; i < (int)v.size(); ++i) {
        if (v[i] == value) {
            found = true;
            break;
        }
    }

    cout << "Found 3? " << (found ? "yes" : "no") << "\n\n";

    // Exercise 9.5

    cout << "9.5: Find using iterator:\n";
    auto it = find(v.begin(), v.end(), value);

    if (it != v.end())
        cout << "Iterator points to " << *it << "\n\n";
    else
        cout << "Not found\n\n";

    // Exercise 9.6

    cout << "9.6: list has no operator[] because no random access\n\n";

    // Exercise 9.7

    cout << "9.7: Container of strings:\n";
    vector<string> vs = { "hello", "world" };
    for (const string& s : vs) cout << s << " ";
    cout << "\n\n";

    // Exercise 9.8

    cout << "9.8: Use iterators to read list elements\n\n";

    // Exercise 9.9

    cout << "9.9: begin() -> iterator, cbegin() -> const_iterator\n\n";

    // Exercise 9.10

    cout << "9.10: iterator vs const_iterator explained\n\n";

    // Exercise 9.11

    cout << "9.11: Different ways to initialize vector:\n";
    vector<int> a(5, 10);
    vector<int> b = { 1,2,3 };
    vector<int> c(b.begin(), b.end());
    cout << "Initialized vectors\n\n";

    // Exercise 9.12

    cout << "9.12: Copy vector into another:\n";
    vector<int> copy = v;
    cout << "Copied vector size: " << copy.size() << "\n\n";

    // Exercise 9.13

    cout << "9.13: Copy list<int> to vector<double>:\n";
    list<int> li2 = { 1,2,3 };
    vector<double> vd(li2.begin(), li2.end());
    for (double d : vd) cout << d << " ";
    cout << "\n\n";

    // Exercise 9.14

    cout << "9.14: Copy list<char*> to vector<string>:\n";
    list<const char*> lc = { "hi", "there" };
    vector<string> vs2(lc.begin(), lc.end());
    for (const string& s : vs2) cout << s << " ";
    cout << "\n\n";

    // Exercise 9.15

    cout << "9.15: Compare vectors:\n";
    vector<int> v1 = { 1,2,3 };
    vector<int> v2 = { 1,2,3 };
    cout << (v1 == v2 ? "equal\n\n" : "not equal\n\n");

    // Exercise 9.16

    cout << "9.16: Compare list and vector:\n";
    list<int> l2 = { 1,2,3 };
    vector<int> v3 = { 1,2,3 };
    bool same = true;
    if (l2.size() == v3.size()) {
        auto itl = l2.begin();
        auto itv = v3.begin();
        while (itl != l2.end() && itv != v3.end()) {
            if (*itl != *itv) same = false;
            ++itl; ++itv;
        }
    }
    else same = false;

    cout << (same ? "same values\n\n" : "different\n\n");

    // Exercise 9.17

    cout << "9.17: Relational operators work only on same container types\n\n";

    // Exercise 9.18

    cout << "9.18: Read words into deque:\n";
    deque<string> dq = { "one", "two", "three" };
    for (const string& s : dq) cout << s << " ";
    cout << "\n\n";

    // Exercise 9.19

    cout << "9.19: Read words into list:\n";
    list<string> ls = { "alpha", "beta" };
    for (const string& s : ls) cout << s << " ";
    cout << "\n\n";

    // Exercise 9.20

    cout << "9.20: Split list into even/odd:\n";
    list<int> nums = { 1,2,3,4,5 };
    vector<int> even, odd;

    for (int x : nums) {
        if (x % 2 == 0) even.push_back(x);
        else odd.push_back(x);
    }

    cout << "Even: ";
    for (int x : even) cout << x << " ";
    cout << "\nOdd: ";
    for (int x : odd) cout << x << " ";
    cout << "\n\n";

    // Exercise 9.21

    cout << "9.21: Insert string into vector using iterator:\n";
    vector<string> vs3;
    auto it2 = vs3.begin();
    it2 = vs3.insert(it2, "hello");
    it2 = vs3.insert(it2, "world");
    for (const string& s : vs3) cout << s << " ";
    cout << "\n\n";

    // Exercise 9.22

    cout << "9.22: Careful iterator use when inserting\n\n";

    // Exercise 9.23

    cout << "9.23: Access first element safely:\n";
    cout << v.front() << " == " << *v.begin() << "\n\n";

    // Exercise 9.24 

    cout << "9.24: Access empty container is undefined behavior\n\n";

    // Exercise 9.25

    cout << "9.25: erase removes range [begin, end)\n\n";

    return 0;
}
