#include<bits/stdc++.h>
using namespace std;
int main () {
string s;

while(cin>>s){
    for(int i=0;i<s.size();i++){
            if(s.at(i)=='0'|| s.at(i)=='1' ||s.at(i)=='2' ||s.at(i)=='3' ||s.at(i)=='4' ||s.at(i)=='5' ||s.at(i)=='6' ||s.at(i)=='7' ||s.at(i)=='8' || s.at(i)=='9'){
                switch(s.at(i)){
            case '0' :putchar('0');break;
                case '1' : putchar('1');break;
                    case '2' :putchar('2');break;
                        case '3' :putchar('3');break;
                            case '4' :putchar('4');break;
                                case '5' :putchar('5');break;
                                    case '6' :putchar('6');break;
                                        case '7' :putchar('7');break;
                                            case '8' :putchar('8');break;
                                                default :putchar('9');
                                                                }
            }
        else if(s.at(i)=='A' || s.at(i)=='B' || s.at(i)== 'C'){
            putchar('2');
        }
        else if(s.at(i)== '-'){
            putchar('-');
        }
         else if(s.at(i)=='D' || s.at(i)=='E' || s.at(i)== 'F'){
            putchar('3');
        }
         else if(s.at(i)=='G' || s.at(i)=='H' || s.at(i)== 'I'){
            putchar('4');
        }
         else if(s.at(i)=='J' || s.at(i)=='K' || s.at(i)== 'L'){
            putchar('5');
        }
         else if(s.at(i)=='M' || s.at(i)=='N' || s.at(i)== 'O'){
            putchar('6');
        }
         else if(s.at(i)=='P' || s.at(i)=='Q' || s.at(i)== 'R' || s.at(i)=='S'){
            putchar('7');
        }
        else if(s.at(i)=='T' || s.at(i)=='U' || s.at(i)== 'V'){
            putchar('8');
        }
         else {
            putchar('9');
         }

    }
    cout<<endl;
}



}
