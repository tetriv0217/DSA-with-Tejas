#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    int n = s.size();
    if(n <= 1)
        return true;

    int i = 0, j = n - 1;
    while(i < j) {
        while(i < j && !isalnum(s[i])) i++;
        while(j > i && !isalnum(s[j])) j--;
        if(tolower(s[i]) != tolower(s[j])) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    string str;
    getline(cin, str);
    cout << (isPalindrome(str) ? "YES" : "NO") << endl;
    return 0;
}
