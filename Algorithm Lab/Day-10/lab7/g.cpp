/*G. ДЖТ
time limit per test1 second
memory limit per test256 megabytes
Құрамында тек '(', ')', '{', '}', '[' және ']' таңбалары бар s
 жолы берілген болса, енгізу жолының жарамдылығын анықтаңыз.

Енгізу жолы жарамды, егер:

Ашық жақшалар бірдей түрдегі жақшалармен жабылуы керек.
Ашық жақшалар дұрыс ретпен жабылуы керек.
Әрбір жабылатын жақша бір типті ашық жақшамен сәйкестендіріледі.
Input
Енгізудің жалғыз жолы s
 (1≤s.size()≤104)
 — тек '()[]{}' таңбаларын қамтитын жолды береді.

Output
Жол жарамды болса «YES» басып шығарыңыз, әйтпесе «NO» басып шығарыңыз.

Examples
InputCopy
()
OutputCopy
YES
InputCopy
()[]{}
OutputCopy
YES
InputCopy
(]
OutputCopy
NO
InputCopy
([])
OutputCopy
YES*/
#include<bits/stdc++.h>
using namespace std;
bool isValid(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        }
        else {
            if (st.empty()) return false;
            
            char top = st.top();
            if ((c == ')' && top == '(') || 
                (c == '}' && top == '{') || 
                (c == ']' && top == '[')) {
                st.pop();
            }
            else {
                return false;
            }
        }
    }
    return st.empty();
}
int main() {
    string s;
    cin >> s;
    if (isValid(s)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}