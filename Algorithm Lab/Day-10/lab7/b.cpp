/*B. Очередь c ошибкой
time limit per test1 second
memory limit per test256 megabytes
«Кезек» деректер құрылымын енгізіңіз. Мұнда көрсетілген барлық әдістерді жүзеге асыра отырып, кезектің сипаттамасын және кезек жұмысын модельдейтін бағдарламаны жазыңыз. Бағдарлама командалар тізбегін оқиды және командаға байланысты сол немесе басқа операцияны орындайды. Әрбір команданы орындағаннан кейін бағдарлама бір жолды басып шығаруы керек. Бағдарламаның мүмкін командалары:

Команды:

push n — Кезекке n санын қосыңыз (n мәні командадан кейін көрсетіледі). Бағдарлама «ok» деп шығуы керек.
pop — Бірінші элементті кезектен алып тастаңыз. Бағдарлама өз мәнін басып шығаруы керек.
front — Бағдарлама бірінші элементтің мәнін кезектен шығармай басып шығаруы керек.
size — Бағдарлама кезектегі элементтердің санын көрсетуі керек.
clear — Бағдарлама кезекті тазартып, «ok» басып шығаруы керек.
exit — Бағдарлама «bye» деп басып шығарып, шығуы керек.
«front» және «pop» операцияларын орындамас бұрын бағдарлама кезекте кемінде бір элементтің бар-жоғын тексеруі керек. Егер кіріс деректерінде «front» немесе «pop» операциясы болса және кезек бос болса, онда бағдарлама сандық мәннің орнына жол қатесін шығаруы керек.

Input
Кезекті басқару пәрмендері әр жолға бірден енгізіледі

Output
Кезекпен жұмыс журналын көрсету қажет, әр жолға бір хабарлама

Example
InputCopy
push 5
push 15
push 25
size
clear
size
front
pop
exit
OutputCopy
ok
ok
ok
3
ok
0
error
error
bye*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    queue<int> q;
    string command;
    while (cin >> command) {
        if (command == "push") {
            int n;
            cin >> n;
            q.push(n);
            cout << "ok" << endl;
        }
        else if (command == "pop") {
            if (q.empty()) {
                cout << "error" << endl;
            } else {
                cout << q.front() << endl;
                q.pop();
            }
        }
        else if (command == "front") {
            if (q.empty()) {
                cout << "error" << endl;
            } else {
                cout << q.front() << endl;
            }
        }
        else if (command == "size") {
            cout << q.size() << endl;
        }
        else if (command == "clear") {
            queue<int> empty;
            swap(q, empty);
            cout << "ok" << endl;
        }
        else if (command == "exit") {
            cout << "bye" << endl;
            break;
        }
    }
    return 0;
}