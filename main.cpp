#include <iostream>

using namespace std;

void numerosAfortunados(int n) {
    int lista[100];
    for (int i = 0; i < n; ++i) {
        lista[i] = i + 1;
    }

    int tam = n;
    for (int i = 2; i <= n; ++i) {
        int nuevaTam = 0;
        for (int j = 0; j < tam; ++j) {
            if ((j + 1) % i != 0) {
                lista[nuevaTam++] = lista[j];
            }
        }
        tam = nuevaTam;
        if (tam < i) break;
    }

    cout << n << ": ";
    for (int i = tam ; i >= 0; --i) {
        cout << lista[i];
        if (i != 0) {
            cout << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        numerosAfortunados(n);
    }
    return 0;
}
