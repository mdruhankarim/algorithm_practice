/*D. Сандардан тазалау
time limit per test1 second
memory limit per test256 megabytes
Сізге s
 жолы беріледі.

Сіздің міндетіңіз осы әрекетті қайта орындау арқылы барлық сандарды жою болып табылады:

Бірінші санды және оның сол жағындағы ең жақын сандық емес таңбаны алып тастаңыз.
Барлық сандарды алып тастағаннан кейін алынған жолды қайтарыңыз.

Input
Енгізудің жалғыз жолы s
 (1≤s.size()≤100)
 жолын береді.

s
 тек кіші ағылшын әріптері мен сандарынан тұрады.

Енгізу барлық сандарды жоюға болатындай етіп жасалады.

Output
Барлық сандарды жойғаннан кейін жолды басып шығарыңыз.

Жауап бос болуы мүмкін екенін ескеріңіз.

Examples
InputCopy
abc
OutputCopy
abc
InputCopy
cb34
OutputCopy
Note
Екінші мысалда:

Алдымен s2
 операциясын қолданамыз және s
 "c4" болады.

Содан кейін біз s1
 операциясын қолданамыз және s
 "" болады.*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
        {
            if (!st.empty() && !isdigit(st.top()))
            {
                st.pop();
            }
        }
        else
        {
            st.push(s[i]);
        }
    }
    string ans = "";
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    cout << ans;
    return 0;
}
