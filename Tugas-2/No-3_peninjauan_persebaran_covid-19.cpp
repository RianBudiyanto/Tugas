//Program peninjauan persebaran Covid-19
#include <iostream>
using namespace std;

int main()
{
    int survei, survei2, survei3;
    
    //Survei kasus positif Covid-19
    cout << "--------------------------------------------------" << endl;
    cout << "Survei COVID-19 :" << endl;
    cout << "1. Survei pertama dan kedua terdapat kasus positif" << endl;
    cout << "2. Survei pertama dan kedua tidak terdapat kasus positif dan kematian" << endl;
    cout << "Masukkan hasil survei (1/2) : ";
    cin >> survei;

    if (survei == 1) {
        //Survei kasus kematian dan ODP jika terdapat kasus positif
        cout << "\nSurvei kasus kematian dan ODP :" << endl;
        cout << "1. Diiringi kasus kematian dan terdapat ODP" << endl;
        cout << "2. Tidak diiringi kasus kematian namun terdapat ODP" << endl;
        cout << "Masukkan hasil survei (1/2) : ";
        cin >> survei2;

        if (survei2 == 1) {
            cout << "\nDaerah tersebut adalah zona hitam" << endl;
        }
        else if (survei2 == 2) {
            cout << "\nDaerah tersebut adalah zona merah" << endl;
        } else {
            cout << "\nAngka yang anda masukkan salah" << endl;
        }
    }
    else if (survei == 2) {
        //Survei kasus ODP jika tidak terdapat kasus positif Covid-19
        cout << "\nSurvei kasus kematian dan ODP :" << endl;
        cout << "1. Terdapat ODP" << endl;
        cout << "2. Tidak terdapat ODP" << endl;
        cout << "Masukkan hasil survei (1/2) : ";
        cin >> survei3;

        if (survei3 == 1) {
            cout << "\nDaerah tersebut adalah zona oranye" << endl;
        }
        else if (survei3 == 2) {
            cout << "\nDaerah tersebut adalah zona hijau" << endl;
        } else {
            cout << "\nAngka yang anda masukkan salah" << endl;
        }
    } else {
        cout << "\nAngka yang anda masukkan salah" << endl;
    }
    cout << "--------------------------------------------------" << endl;

    return 0;
}