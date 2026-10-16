#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string input) {
    for (size_t i=0; i<input.size()/2; ++i) { // 前後夾起來比對

        if (input[i] != input[input.size() - 1 - i]) {
            return false;
        }
    }
    return true;
}

bool isMirrored(string input){
    string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
    string table = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";

    for (int i = 0; i < (input.size() + 1) / 2; ++i) {
        char original = input[i];
        char mirrorOfOriginal = ' ';
        
        // 找鏡像字
        for (int j = 0; j < 35; ++j) {
            if (original == alpha[j]) {
                mirrorOfOriginal = table[j];
                break;
            }
        }

        // 單個左右比對，中間的會比對自己
        if (mirrorOfOriginal != input[input.size() - 1 - i]) return false;
    }
    return true;
}

int main(){
    string inputStr;

    while (cin >> inputStr){

        cout << inputStr << " -- ";

        if (isPalindrome(inputStr) && isMirrored(inputStr)) cout << "is a mirrored palindrome." << '\n';
        else if (isPalindrome(inputStr)) cout << "is a regular palindrome." << '\n';
        else if (isMirrored(inputStr)) cout << "is a mirrored string." << '\n';
        else cout << "is not a palindrome." << '\n';
    }

    return 0;
}

// 	AC (3ms, 332KB) 	
// isMirrored 不用修改裡面的值，直接拿 char 改鏡像之後比對就好，還不需要套 isPalindrome 函式