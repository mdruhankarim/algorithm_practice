/*C. ДЖТ
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
int main(){
    string s;
    cin >> s;
    stack<char> st;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            st.push(s[i]);
        }else{
            if(st.empty()){
                cout << "NO";
                return 0;
            }
            if(s[i] == ')' && st.top() == '('){
                st.pop();
            }else if(s[i] == '}' && st.top() == '{'){
                st.pop();
            }else if(s[i] == ']' && st.top() == '['){
                st.pop();
            }else{
                cout << "NO";
                return 0;
            }
        }
    }
    if(st.empty()){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}