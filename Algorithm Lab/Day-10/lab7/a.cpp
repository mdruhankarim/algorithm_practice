/*A. Қате бар стек
time limit per test1 second
memory limit per test256 megabytes
Сіз C++ тілінің жаңадан келген бағдарламашысы екеніңізді елестетіп көріңіз және сіздің міндетіңіз кітаптарды соңғы кірген, бірінші шығатын принцип бойынша жинақталатын шағын кітапханадағы кітаптарды басқаруға арналған шағын бағдарламаны әзірлеу болып табылады. Бағдарлама стек деректер құрылымы негізінде жүзеге асырылады және кітапхана әкімшісіне кітаптарды тиімді басқаруға көмектеседі.

Команды:

push n — стектің жоғарғы жағына бірегей n нөмірі бар кітапты қосыңыз. Бағдарлама «ok» деп шығуы керек.
pop — соңғы қосылған кітапты жойып, оның нөмірін көрсетіңіз.
back — соңғы қосылған кітаптың нөмірін жоймай-ақ көрсетіңіз.
size — стектегі кітаптардың санын көрсетіңіз.
clear — барлық кітаптар жинағын тазалаңыз («ok» басып шығарыңыз).
exit — бағдарламаны аяқтаңыз, «bye» деп басып шығарыңыз.
back және pop операцияларын орындамас бұрын, бағдарлама стекте кемінде бір элемент бар-жоғын тексеруі керек. Егер кіріс деректерінде back немесе pop операциясы кездессе және стек бос болса, онда бағдарлама сандық мәннің орнына жол қатесін шығаруы керек.

Input
Стек басқару пәрмендері әр жолға бірден енгізіледі

Output
Бағдарлама стек жұмысының журналын көрсетуі керек, әр жолға бір хабарлама

Example
InputCopy
push 5
push 15
push 25
size
clear
size
back
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
    vector<int> stack; 
    string command;
    while (cin >> command) {
        if (command == "push") {
            int n;
            cin >> n;
            stack.push_back(n);
            cout << "ok" << endl;
        }
        else if (command == "pop") {
            if (stack.empty()) {
                cout << "error" << endl;
            } else {
                cout << stack.back() << endl;
                stack.pop_back();
            }
        }
        else if (command == "back") {
            if (stack.empty()) {
                cout << "error" << endl;
            } else {
                cout << stack.back() << endl;
            }
        }
        else if (command == "size") {
            cout << stack.size() << endl;
        }
        else if (command == "clear") {
            stack.clear();
            cout << "ok" << endl;
        }
        else if (command == "exit") {
            cout << "bye" << endl;
            break;
        }
    }
    return 0;
}