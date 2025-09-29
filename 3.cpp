#include <iostream>
using namespace std;

int main() {
    int pilihan;
    do {
        cout << "MENU\n";
        cout << "0. KELUAR\n";
        cout << "1. HITUNG VOLUME BALOK\n";
        cout << "2. HITUNG VOLUME BOLA\n";
        cout << "3. HITUNG VOLUME KERUCUT\n";
        cout << "4. HITUNG VOLUME SILINDER\n";
        cout << "5. HITUNG VOLUME LIMAS SEGITIGA\n";
        cout << "MASUKKAN PILIHAN ANDA : ";
        cin >> pilihan;
        
        switch (pilihan) {
          case 0:
              cout << "Anda keluar dari Program...\n";
              break;

          case 1: {
                int p, l, t;
                cout << "\n===VOLUME BALOK===\n";
                cout << "Masukkan nilai P = ";
                cin >> p;
                cout << "Masukkan nilai L = ";
                cin >> l;
                cout << "Masukkan nilai T = ";
                cin >> t;
                cout << "Volume Balok adalah " << p * l * t << endl;
                break;
            }
            case 2: {
                double r;
                cout << "\n===VOLUME BOLA===\n";
                cout << "Masukkan jari-jari = ";
                cin >> r;
                cout << "Volume Bola adalah " << (4.0/3.0) * 3.14 * r * r * r << endl;
                break;
            }
            case 3: {
                double r, t;
                cout << "\n===VOLUME KERUCUT===\n";
                cout << "Masukkan jari-jari = ";
                cin >> r;
                cout << "Masukkan tinggi = ";
                cin >> t;
                cout << "Volume Kerucut adalah " << (1.0/3.0) * 3.14 * r * r * t << endl;
                break;
            }
            case 4: {
                double r, t;
                cout << "\n===VOLUME SILINDER===\n";
                cout << "Masukkan jari-jari = ";
                cin >> r;
                cout << "Masukkan tinggi = ";
                cin >> t;
                cout << "Volume Silinder adalah " << 3.14 * r * r * t << endl;
                break;
            }
            case 5: {
                double luas_alas, t;
                cout << "\n===VOLUME LIMAS SEGITIGA===\n";
                cout << "Masukkan luas alas = ";
                cin >> luas_alas;
                cout << "Masukkan tinggi = ";
                cin >> t;
                cout << "Volume Limas Segitiga adalah " << (1.0/3.0) * luas_alas * t << endl;
                break;
              }
              default:
                cout << "Pilihan tidak valid!\n";
        }
        cout << endl;
    } while (pilihan != 0);

    return 0;
}