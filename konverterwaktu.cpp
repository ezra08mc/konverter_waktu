#include <iostream>

using namespace std;

float detikKeMenit(float detik) {

    return detik / 60.0;

}

float detikKeJam(float detik) {

    return detik / 3600.0;

}

float menitKeDetik(float menit) {

    return menit * 60.0;

}

float menitKeJam(float menit) {

    return menit / 60.0;

}

float jamKeDetik(float jam) {

    return jam * 3600.0;

}

float jamKeMenit(float jam) {

    return jam * 60.0;

}

int main() {

    cout << "Konversi Jam, Menit, Detik:" << endl;
    cout << "1) Detik" << endl;
    cout << "2) Menit" << endl;
    cout << "3) Jam" << endl;
    int input, input1;
    float x, hasil;
    cin >> input;
    if (input == 1) {
        cout << "1) Detik -> Menit" << endl;
        cout << "2) Detik -> Jam" << endl;
        cin >> input1;
        if (input1 == 1) {
            cout << "Konversi Detik -> Menit \nMasukkan angka: ";
            cin >> x;
            hasil = detikKeMenit(x);
            cout << x << " detik = " << hasil << " menit" << endl;
        } else if (input1 == 2) {
            cout << "Konversi Detik -> Jam \nMasukkan angka: ";
            cin >> x;
            hasil = detikKeJam(x);
            cout << x << " detik = " << hasil << " jam" << endl;
        }
    } else if (input == 2) {
        cout << "1) Menit -> Detik" << endl;
        cout << "2) Menit -> Jam" << endl;
        cin >> input1;
        if (input1 == 1) {
            cout << "Konversi Menit -> Detik \nMasukkan angka: ";
            cin >> x;
            hasil = menitKeDetik(x);
            cout << x << " menit = " << hasil << " detik" << endl;
        } else if (input1 == 2) {
            cout << "Konversi Menit -> Jam \nMasukkan angka: ";
            cin >> x;
            hasil = menitKeJam(x);
            cout << x << " menit = " << hasil << " jam" << endl;
        }
    } else if (input == 3) {
        cout << "1) Jam -> Detik" << endl;
        cout << "2) Jam -> Menit" << endl;
        cin >> input1;
        if (input1 == 1) {
            cout << "Konversi Jam -> Detik \nMasukkan angka: ";
            cin >> x;
            hasil = jamKeDetik(x);
            cout << x << " jam = " << hasil << " detik" << endl;
        } else if (input1 == 2) {
            cout << "Konversi Jam -> Menit \nMasukkan angka: ";
            cin >> x;
            hasil = jamKeMenit(x);
            cout << x << " jam = " << hasil << " menit" << endl;
        }
    } else {
        cout << "Tidak ada dalam opsi!" << endl;

        return 0;
    }
    return 0;

}
