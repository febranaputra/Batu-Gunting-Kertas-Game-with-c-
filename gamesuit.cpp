#include <iostream>
#include <cstdlib>
using namespace std;


int pil, p, com, p1, p2;
char ulang;
string game[3] = {"Batu", "Gunting", "Kertas"};


void menu(){
    system("cls");
    cout << "\t Selamat Datang di Game " << endl;
    cout << "\t---Batu Gunting Kertas-- " << endl;
    
    cout << "\n\nMain Menu " << endl;
    cout << "1.Bermain dengan komputer " << endl;
    cout << "2.Bermain dengan player  " << endl;
    cout << "3.Keluar " << endl;
}

string kondisi_vscom(string p, string com){
    if(p == "Batu"){
        if(com == "Batu"){
            return "Permainan Seri";
        } else if(com == "Gunting"){
            return "Anda Menang";
        }else if(com == "Kertas"){
            return "Anda Kalah";
        }
    } else if(p == "Gunting"){
        if(com == "Gunting"){
            return "Permainan Seri";
        } else if(com == "Kertas"){
            return "Anda Menang";
        }else if(com == "Batu"){
            return "Anda Kalah";
        }
    } else if(p == "Kertas"){
        if(com == "Kertas"){
            return "Permainan Seri";
        } else if(com == "Batu"){
            return "Anda Menang";
        }else if(com == "Gunting"){
            return "Anda Kalah";
        }
    }
}

void hasil(string p, string com){
    string hasil = kondisi_vscom(p, com);
    cout << hasil << endl;
    system("pause");

}

void vs_com(){
        cout << "\n\nAnda melawan komputer " << endl;
        cout << "Ready ? ";
        system("pause");
        system("cls");
        cout << "Silahkan pilih : " << endl;
        for(int i = 0; i < 3; i++){
            cout << i+1 << ". " << game[i] << endl;
        }
        cout << "Anda akan mengeluarkan : ";
        cin >> p;
        system ("cls");
        com = (rand() % 3 ) + 1;
        cout << "--> Anda mengeluarkan " << game[p-1] << endl;
        cout << "\n--> Komputer mengeluarkan " << game[com-1] << endl;
         cout << "--------------------------"<< endl;
        hasil(game[p-1], game[com-1]);
}
string kondisi_vsp(string p1, string p2){
    if(p1 == "Batu"){
        if(p2 == "Batu"){
            return "Permainan Seri";
        } else if(p2 == "Gunting"){
            return "Player 1 Menang";
        }else if(p2 == "Kertas"){
            return "Player 2 Menang";
        }
    } else if(p1 == "Gunting"){
        if(p2 == "Gunting"){
            return "Permainan Seri";
        } else if(p2 == "Kertas"){
            return "Player 1 Menang";
        }else if(p2 == "Batu"){
            return "Player 2 Menang";
        }
    } else if(p1 == "Kertas"){
        if(p2 == "Kertas"){
            return "Permainan Seri";
        } else if(p2 == "Batu"){
            return "Player 1 Menang";
        }else if(p2 == "Gunting"){
            return "Player 2 Menang";
        }
    }
}

void hasil_vsp(string p1, string p2){
    string hasil_vsp = kondisi_vsp(p1, p2);
    cout << hasil_vsp << endl;
    system("pause");
    }
void vs_p(){
    system("cls");
    cout << "Ready ? ";
    system("pause");
    system("cls");
    cout << "Player 1 silahkan pilih : " << endl;
    for(int i = 0; i < 3; i++){
            cout << i+1 << ". " << game[i] << endl;
        }
    cout << "Anda akan mengeluarkan : ";
    cin >> p1;
    system("cls");

    cout << "Player 2 silahkan pilih : " << endl;
    for(int i = 0; i < 3; i++){
            cout << i+1 << ". " << game[i] << endl;
        }
    cout << "Anda akan mengeluarkan : ";
    cin >> p2;
    system("cls");
    cout << "--> Player 1 mengeluarkan " << game[p1-1] << endl;
    cout << "--> Player 2 mengeluarkan " << game[p2-1] << endl;
    cout << "============================ " << endl;
    hasil_vsp(game[p1-1], game[p2-1]);
    
}
int main(){
    menu : 
    menu();
    cout << "Pilihan menu : ";
    cin >> pil;

    switch(pil){
        case 1:
        vs_com:
        vs_com();
        ulang:
        cout << "\n\n main lagi</y> atau kembali ke menu</n> ? : ";
        cin >> ulang;
        if(ulang == 'Y' || ulang == 'y'){
            goto vs_com;
        } else if (ulang == 'N' || ulang == 'n'){
            goto menu;
        } else {
            cout << "Pilihan tidak valid" << endl;
            goto ulang;
        }
        break;

        case 2:
        vs_p:
        vs_p();
        ulangp:
         cout << "\n\n main lagi</y> atau kembali ke menu</n> ? : ";
        cin >> ulang;
        if(ulang == 'Y' || ulang == 'y'){
            goto vs_p;
        } else if (ulang == 'N' || ulang == 'n'){
            goto menu;
        } else {
            cout << "Pilihan tidak valid" << endl;
            goto ulangp;
        }
        break;

        case 3:
        cout << " Meninggalkan Permainan " << endl;
        break;


        default:
        cout << "Masukan anda salah " << endl;
        system("pause");
        goto menu;
        break;

   
    }

    
    
    

}