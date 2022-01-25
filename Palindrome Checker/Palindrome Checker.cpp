#include <iostream>
#include <cmath> 
using namespace std;

bool isPalindrome(string x) {
    int size = x.size();
    int l = 0;
    int r = size - 1;
    int mid = ceil(size / 2);
    bool hasil = 1;
    for (int i = 0; i < mid; i++) {
        if (x[l] != x[r]) {
            hasil = 0;
            break;
        }
        l++;
        r--;
    }
    return hasil;

}

int main() {
    string n;
    cin >> n;

    if (isPalindrome(n)) {
        cout << n << " is a palindrome";
    }
    else {
        cout << n << " is NOT a palindrome";
    }
    return 0;
}