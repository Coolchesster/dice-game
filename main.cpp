#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
string StartGame(char S){
    srand(time(0));
    string SG = "roll the dice (enter r to roll): ";
    return SG;
    }
int Boardcontrol (int D,int B[]){
  if (D == 1 && B [0] != 1){
        B [0] += 1;
   }else if (D == 2 && B [1] != 1){
        B [1] += 1;
   }else if (D == 3 && B [2] != 1){
        B [2] += 1;
   }else if (D == 4 && B [3] != 1){
        B [3] += 1;
   }else if (D == 5 && B [4] != 1){
        B [4] += 1;
   }else if (D == 6){
        B [5] += 1;
   }else if (D == 1 && B [0] == 1){
        B [0] -= 1;
   }else if (D == 2 && B [1] == 1){
        B [1] -= 1;
   }else if (D == 3 && B [2] == 1){
        B [2] -= 1;
   }else if (D == 4 && B [3] == 1){
        B [3] -= 1;
   }else if (D == 5 && B [4] == 1){
        B [4] -= 1;
   }
}

string Playerwin (int P1,int P2){
string PW;
if (P1 == 0){
    PW = "Player 2 Wins";
}else if (P2 == 0){
    PW = "Player 1 Wins";
}
    return PW;


}




int main()
{
   int Board []{0,0,0,0,0,0},Die,Player1 = 6,Player2 = 6, SZ = 6;
   char Start,Roll;
   cout << "Enter (s) to start the Zeppelin dice game: ";
   cin >> Start;

   while (Player1 != 0 && Player2 != 0){
         if (Start == 's' || Start == 'S'){
     for(int i = 0; i < SZ; i++){
            cout << Board [i];
        }
         cout << endl;
    cout << StartGame (Start);
    cin >> Roll;
   }
   if (Roll == 'r' || Roll == 'R'){
     Die = rand () % 6 + 1;
     cout << "Users Score: " <<Player1 << " " << "Com Score: "  << Player2 << endl;
        cout << "You rolled: " << Die << endl;
        Boardcontrol (Die,Board);
            if (Board [Die -= 1] != 0 && Player1 != 0){
                Player1--;
            }else if (Board [Die += 1] == 1 && Die != 6){
                Player1++;
            }
        }
         Die = rand () % 6 + 1;
     cout << "Computer rolled: " << Die << endl;
    Boardcontrol (Die,Board);
  if (Board [Die -= 1] != 0 && Player1 != 0){
                Player2--;
            }else if (Board [Die -= 1] == 1 && Die != 6){
                Player2++;
            }
   }
 cout << Playerwin (Player1,Player2);

}


