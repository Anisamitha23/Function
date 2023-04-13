#include <iostream>
using namespace std;

int angka_2(int n) {

    if (n == 1) {

        return 2;

    } else {

        return 2 * angka_2(n - 1);
    }
}

int main() {

    int hasil = angka_2(2);
    cout << "Hasil perkalian 2 sebanyak 2 kali adalah: " << hasil << endl;

    return 0;

}
