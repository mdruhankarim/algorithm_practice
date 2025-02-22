/*
E. Өзгеше сұрыптау - 2
time limit per test1 second
memory limit per test256 megabytes
n
 бүтін сандардан тұратын a
 массиві берілген. Массивтің әрбір элементі бүтін сандардың белгілі бір санының тізбегі болып табылады. Массивтің элементтерін тізбегінің қосындысы бойынша өсу ретімен сұрыптаңыз. Тізбектің қосындысы тең болған жағдайда элементтерді бастапқы индексі бойынша сұрыптау керек.

Input
Кіріс деректерінің бірінші жолында бір бүтін сан бар – n
 (1≤n≤2∗105)
 - массивтегі элементтер саны.

Келесі n
 жолда бүтін li
 (1≤li≤2⋅105)
 саны жазылады, содан кейін бос орын арқылы li
 бүтін сан беріледі - x
 (0≤x≤104)
 – ai
 тізбегі. li
 суммасы 200000
-нан аспайтынына кепілдік беріледі.

Output
n
 тізбек шығарыңыз, әр тізбек бір жолда болуы керек. Әр жолда алдымен ұзындықты – li
, содан кейін li
 элементті бос орын арқылы шығарыңыз.

Example
InputCopy
5
3 2 2 3
2 2 5
1 3
2 3 2
4 1 1 1 2
OutputCopy
1 3 
2 3 2 
4 1 1 1 2 
3 2 2 3 
2 2 5 
Note
Бұл тестте біз алдымен 3-ші тізбекті шығарамыз, өйткені оның қосындысы 3 және минимумға тең, содан кейін 4-ші және 5-ші тізбектерді шығарамыз, олардың қосындысы 5-ке тең. Содан кейін біз 1 және 2 тізбектерді шығарамыз, олардың қосындысы 7-ге тең.*/
#include<bits/stdc++.h>
using namespace std;
struct Sequence{
    int index;
    int sum;
    vector<int> elements;
};
bool compareSequences(const Sequence &a, const Sequence &b){
    if(a.sum==b.sum){
        return a.index<b.index;
    }
    return a.sum<b.sum;
}
int main(){
    int n;
    cin>>n;
    vector<Sequence> sequences(n);
    for (int i=0;i<n;++i) {
        int li;
        cin>>li;
        sequences[i].index=i;
        sequences[i].sum=0;
        sequences[i].elements.resize(li);
        for (int j=0;j<li;++j) {
            cin >>sequences[i].elements[j];
            sequences[i].sum+=sequences[i].elements[j];
        }
    }
    sort(sequences.begin(),sequences.end(),compareSequences);
    for (const auto &seq : sequences) {
        cout<<seq.elements.size()<<" ";
        for (int num:seq.elements) {
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}