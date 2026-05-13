#include<iostream>
#include<string>

using namespace std;

//void chessBoardInit(string arr[8][8]);
void printBoard(string arr[8][8]);

int main(){

    string chessBoard[8][8] = {{"R", "Kn", "B", "Q", "K", "B", "Kn", "R"},
                 {"p", "p", "p", "p", "p", "p", "p", "p"},
                 {"","","","","","","",""},
                 {"","","","","","","",""},
                 {"","","","","","","",""},
                 {"","","","","","","",""},
                 {"p", "p", "p", "p", "p", "p", "p", "p"},
                 {"R", "Kn", "B", "Q", "K", "B", "Kn", "R"}};


    //chessBoardInit(chessBoard);
    printBoard(chessBoard);



    return 0;
}

void printBoard(string arr[8][8]){
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cout << " " << arr[i][j];
        }
        cout << endl;
    }
}

