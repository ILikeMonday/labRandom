#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
cout << "Press Enter 3 times to reveal your future.";
srand(time(0));
int x = rand()%9;
cin.get();
cin.get();
cin.get();
cout << "You will get ";
switch(x){
    case 0: cout << "A";break;
    case 1: cout << "B+";break;
    case 2: cout << "B";break;
    case 3: cout << "C+";break;
    case 4: cout << "C";break;
    case 5: cout << "D+";break;
    case 6: cout << "D";break;
    case 7: cout << "F";break;
    case 8: cout << "W";break;
}
cout << " in this 261102.";

}


