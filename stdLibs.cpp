#include <iostream>
#include <cctype>
#include <string>

using namespace std;

bool isAlpha (string s){

   for (int i=0; i<s.length(); i++){
    if (!isalpha(s[i])) { 
        return false;
    }
   }
   return true;
}

int main() {
    
    cout << isAlpha("Hello World") << endl;

}