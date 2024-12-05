#include <bits/stdc++.h>
using namespace std;

//_______________________________________________________________________________________________

int countCoin = 0;
bool check = true;
int coinRow, coinCol;

//_______________________________________________________________________________________________

void Print(int manRow, int manCol, int n) {

    if(check) {
        coinRow = rand()%n;
        coinCol = rand()%n;
        check = false;
    }

    if(manRow == coinRow && manCol == coinCol) {
        countCoin++;
        coinRow = rand()%n;
        coinCol = rand()%n;

        system("cls");

        cout << "Collected Coin: " << countCoin << endl;
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {      
                if(manRow == i && manCol == j) {
                    cout << "+" << " ";
                } else if(coinRow == i && coinCol == j) {
                    cout << "O" << " ";
                } else {
                    cout << "." << " ";
                }
            }
            cout << endl;
        }

        return;
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {      
            if(manRow == i && manCol == j) {
                cout << "*" << " ";
            } else if(coinRow == i && coinCol == j) {
                cout << "O" << " ";
            } else {
                cout << "." << " ";
            }
        }
        cout << endl;
    }
}

//_______________________________________________________________________________________________


int main(){
    cout << "Up = u/U\nDown = d/D\nLeft = l/L\nRight = r/R" << endl;
    cout << "Enter The Size of Box (2 - 20) : ";
    int n;
    cin >> n;
    Print(0, 0, n);
    int Mi = 0;
    int Mj = 0;
    
    while(true) {
        char ch;
        if(ch >= 'a' && ch <= 'z') { ch -= 32; }
        cout << "Collected Coin: " << countCoin << endl;
        if(ch == 'U') {
            Mi--;

            if(Mi >= 0 && Mi < n) {
                system("cls");
                cout << "Collected Coin: " << countCoin << endl;
                Print(Mi, Mj, n);
            } else {
                Mi++;
                cout << "Invalid Move" << endl;
            }
        } else if(ch == 'D') {
            Mi++;

            if(Mi >= 0 && Mi < n) {
                system("cls");
                cout << "Collected Coin: " << countCoin << endl;
                Print(Mi, Mj, n);
            } else {
                Mi--;
                cout << "Invalid Move" << endl;
            }
        } else if(ch == 'L') {
            Mj--;

            if(Mj >= 0 && Mj < n) {
                system("cls");
                cout << "Collected Coin: " << countCoin << endl;
                Print(Mi, Mj, n);
            } else {
                Mj++;
                cout << "Invalid Move" << endl;
            }
        } else if(ch == 'R') {
            Mj++;

            if(Mj >= 0 && Mj < n) {
                system("cls");
                cout << "Collected Coin: " << countCoin << endl;
                Print(Mi, Mj, n);
            } else {
                Mj--;
                cout << "Invalid Move" << endl;
            }
        }

        if(countCoin == 5) {
            cout << "You Won!!!!!!!!" << endl;
            break;
        }

        cout << "Enter Your Move : ";
        cin >> ch;
    }
    return 0;
}

//_______________________________________________________________________________________________