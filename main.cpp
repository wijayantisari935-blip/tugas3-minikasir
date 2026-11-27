#include <iostream>
#include <string>
using namespace std;

int main() {
    string makanan[3] = {"Pecel", "Soto Ayam", "Rawon"};
    int hargaMakanan[3] = {12000, 15000, 18900};

    string minuman[3] = {"Es Teh Manis", "Teh Hangat", "Kopi"};
    int hargaMinuman[3] = {5000, 4000, 5000};

    int pilihMakan, pilihMinum;
    int total = 0;

    cout << "===== MINI KASIR =====\n";

    cout << "\nMENU MAKANAN\n";
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << ". " << makanan[i]
             << " - Rp" << hargaMakanan[i] << endl;
    }

    cout << "\nMENU MINUMAN\n";
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << ". " << minuman[i]
             << " - Rp" << hargaMinuman[i] << endl;
    }

    cout << "0. Tidak membeli minuman\n";

    cout << "\nPilih makanan (1-3): ";
    cin >> pilihMakan;

    if (pilihMakan < 1 || pilihMakan > 3) {
        cout << "Pilihan makanan tidak valid!";
        return 0;
    }

    cout << "Pilih minuman (0-3): ";
    cin >> pilihMinum;

    if (pilihMinum < 0 || pilihMinum > 3) {
        cout << "Pilihan minuman tidak valid!";
        return 0;
    }

    total = hargaMakanan[pilihMakan - 1];

    if (pilihMinum != 0) {
        total += hargaMinuman[pilihMinum - 1];
    }

    cout << "\n===== STRUK PEMBAYARAN =====\n";
    cout << "Makanan: " << makanan[pilihMakan - 1] << endl;

    if (pilihMinum == 0) {
        cout << "Minuman: Tidak membeli\n";
    } else {
        cout << "Minuman: " << minuman[pilihMinum - 1] << endl;
    }

    cout << "Total: Rp" << total << endl;
    cout << "Terima kasih!\n";

    return 0;
}
