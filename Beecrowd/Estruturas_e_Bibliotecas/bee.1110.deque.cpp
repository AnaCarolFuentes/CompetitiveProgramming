#include <iostream>
#include <deque>

using namespace std;

int main(){
    deque<int> cartas;
    int N;

    while(cin >> N){
        if (!N) break;

        for(int i = 1; i <= N; ++i){
            cartas.push_back(i);
        }

        bool first = true;
        cout << "Discarded cards: ";
        while(cartas.size() > 1){
            int topo = cartas.front();
            cartas.pop_front();

            if (first)  first = false;
            else        cout << ", ";
            cout << topo;

            topo = cartas.front();
            cartas.pop_front();
            cartas.push_back(topo);
        }
        cout << endl;

        cout << "Remaining card: " << cartas.front() << endl;
        cartas.pop_front();
    }

    return 0;
}