#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    // Verificar se há pelo menos 3 medidas
    if (n < 3) {
        if(n == 2)
        {
            int a, b;
            cin >>a>>b;
            if(a==b)
            {
                cout << "0" << endl;
                return 0;
            }
        }
        cout << "1" << endl;
        return 0;
    }

    int *v = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Verificar se as alturas seguem o padrão de pico-vale-pico-vale
    for (int i = 1; i < n - 1; i++) {
        // Se um elemento não é nem um pico nem um vale, não segue o padrão
        if (!((v[i] > v[i - 1] && v[i] > v[i + 1]) || (v[i] < v[i - 1] && v[i] < v[i + 1]))) {
            cout << "0" << endl;
            delete[] v;
            return 0;
        }
    }

    cout << "1" << endl;

    delete[] v;
    return 0;
}
