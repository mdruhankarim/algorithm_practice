/*C. Бейсбол матчы
time limit per test1 second
memory limit per test256 megabytes
Сіз бейсбол ойынының ұпайын біртүрлі ережелерді қолдана отырып жүргізесіз. Ойынның басында сіз бос жазбадан бастайсыз.

Сізге жол әрекеттерінің тізімі беріледі, мұнда operationsi
 жазбаға қолданылатын i
-шы операция және төмендегілердің бірі:

push x
. x
 бүтін сан. Жаңа бағаны x
 жазыңыз.
'+'. Алдыңғы екі ұпайдың қосындысы болып табылатын жаңа ұпайды жазыңыз.
'D'. Жаңа нәтижені алдыңғысынан екі есе етіп жазыңыз.
«C». Аннулировать предыдущий результат, удалив его из записи.
Барлық әрекеттер қолданылғаннан кейін жазбадағы барлық ұпайлардың қосындысын қайтарады.
Input
Енгізудің бірінші жолында бір бүтін n
 (1≤n≤500)
 — операцияның нөмірі бар.

Келесі n
 жолдары операциялардың төрт түрінің бірін береді.

Output
Барлық операцияларды қолданғаннан кейін жазбадағы барлық бағалардың қосындысын басып шығарыңыз.

Example
InputCopy
5
push 5
push 2
C
D
+
OutputCopy
30
Note
Жазбаға 5 қосыңыз, енді жазба [5].Жазбаға 2 қосыңыз, енді жазба [5, 2].

«C» — жою және алдыңғы бағалауды жою, енді енгізу [5].

«D» - Жазбаға 2 * 5 = 10 қосыңыз, жазба енді [5, 10].

«+» - Жазбаға 5 + 10 = 15 қосыңыз, жазба енді [5, 10, 15].

Жалпы қосынды 5 + 10 + 15 = 30.*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> record;
    string operation;
    for (int i = 0; i < n; i++) {
        cin >> operation;
        
        if (operation == "push") {
            int x;
            cin >> x;
            record.push_back(x);
        }
        else if (operation == "+") {
            int size = record.size();
            record.push_back(record[size - 1] + record[size - 2]);
        }
        else if (operation == "D") {
            record.push_back(record.back() * 2);
        }
        else if (operation == "C") {
            record.pop_back();
        }
    }
    int sum = 0;
    for (int score : record) {
        sum += score;
    }
    cout << sum << endl;
    return 0;
}