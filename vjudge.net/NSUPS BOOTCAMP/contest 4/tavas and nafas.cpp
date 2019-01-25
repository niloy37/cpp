#include<bits/stdc++.h>
using namespace std;
int main () {
int n;
cin>>n;
if(n>=0 && n<=12){
    switch(n){
    case 0 : cout<<"zero";break;
    case 1 : cout<<"one";break;
    case 2 : cout<<"two";break;
    case 3 : cout<<"three";break;
    case 4 : cout<<"four";break;
    case 5 : cout<<"five";break;
    case 6 : cout<<"six";break;
    case 7 : cout<<"seven";break;
    case 8 : cout<<"eight";break;
    case 9 : cout<<"nine";break;
    case 10: cout<<"ten";break;
    case 11: cout<<"eleven";break;
    default : cout<<"twelve";
    }

}
else if(n>12 && n <20){
    string s = "teen";
    switch(n%10){
    case 3 : cout<<"thir"<<s;break;
    case 4 : cout<<"four"<<s;break;
    case 5 : cout<<"fif"<<s;break;
    case 6 : cout<<"six"<<s;break;
    case 7 : cout<<"seven"<<s;break;
    case 8 : cout<<"eigh"<<s;break;
    default : cout<<"nine"<<s;
    }
}

    else if(n>=20 && n<=29){
            string s="twenty-";
    switch(n%10){
    case 0: cout<<"twenty";break;
    case 1 : cout<<s<<"one";break;
    case 2 : cout<<s<<"two";break;
    case 3 : cout<<s<<"three";break;
    case 4 : cout<<s<<"four";break;
    case 5 : cout<<s<<"five";break;
    case 6 : cout<<s<<"six";break;
    case 7 : cout<<s<<"seven";break;
    case 8 : cout<<s<<"eight";break;
    default: cout<<s<<"nine";

    }

    }
    else if(n>=30 && n<=39){
            string s="thirty-";
    switch(n%10){
    case 0: cout<<"thirty";break;
    case 1 : cout<<s<<"one";break;
    case 2 : cout<<s<<"two";break;
    case 3 : cout<<s<<"three";break;
    case 4 : cout<<s<<"four";break;
    case 5 : cout<<s<<"five";break;
    case 6 : cout<<s<<"six";break;
    case 7 : cout<<s<<"seven";break;
    case 8 : cout<<s<<"eight";break;
    default: cout<<s<<"nine";

}
    }
    else if(n>=40 && n<=49){
            string s="forty-";
    switch(n%10){
    case 0: cout<<"forty";break;
    case 1 : cout<<s<<"one";break;
    case 2 : cout<<s<<"two";break;
    case 3 : cout<<s<<"three";break;
    case 4 : cout<<s<<"four";break;
    case 5 : cout<<s<<"five";break;
    case 6 : cout<<s<<"six";break;
    case 7 : cout<<s<<"seven";break;
    case 8 : cout<<s<<"eight";break;
    default: cout<<s<<"nine";

}
    }
        else if(n>=50 && n<=59){
            string s="fifty-";
    switch(n%10){
    case 0: cout<<"fifty";break;
    case 1 : cout<<s<<"one";break;
    case 2 : cout<<s<<"two";break;
    case 3 : cout<<s<<"three";break;
    case 4 : cout<<s<<"four";break;
    case 5 : cout<<s<<"five";break;
    case 6 : cout<<s<<"six";break;
    case 7 : cout<<s<<"seven";break;
    case 8 : cout<<s<<"eight";break;
    default: cout<<s<<"nine";

}
    }
        else if(n>=60 && n<=69){
            string s="sixty-";
    switch(n%10){
    case 0: cout<<"sixty";break;
    case 1 : cout<<s<<"one";break;
    case 2 : cout<<s<<"two";break;
    case 3 : cout<<s<<"three";break;
    case 4 : cout<<s<<"four";break;
    case 5 : cout<<s<<"five";break;
    case 6 : cout<<s<<"six";break;
    case 7 : cout<<s<<"seven";break;
    case 8 : cout<<s<<"eight";break;
    default: cout<<s<<"nine";

}
    }
        else if(n>=70 && n<=79){
            string s="seventy-";
    switch(n%10){
    case 0: cout<<"seventy";break;
    case 1 : cout<<s<<"one";break;
    case 2 : cout<<s<<"two";break;
    case 3 : cout<<s<<"three";break;
    case 4 : cout<<s<<"four";break;
    case 5 : cout<<s<<"five";break;
    case 6 : cout<<s<<"six";break;
    case 7 : cout<<s<<"seven";break;
    case 8 : cout<<s<<"eight";break;
    default: cout<<s<<"nine";

}
    }
        else if(n>=80 && n<=89){
            string s="eighty-";
    switch(n%10){
    case 0: cout<<"eighty";break;
    case 1 : cout<<s<<"one";break;
    case 2 : cout<<s<<"two";break;
    case 3 : cout<<s<<"three";break;
    case 4 : cout<<s<<"four";break;
    case 5 : cout<<s<<"five";break;
    case 6 : cout<<s<<"six";break;
    case 7 : cout<<s<<"seven";break;
    case 8 : cout<<s<<"eight";break;
    default: cout<<s<<"nine";

}
    }
        else if(n>=90 && n<=99){
            string s="ninety-";
    switch(n%10){
    case 0: cout<<"ninety";break;
    case 1 : cout<<s<<"one";break;
    case 2 : cout<<s<<"two";break;
    case 3 : cout<<s<<"three";break;
    case 4 : cout<<s<<"four";break;
    case 5 : cout<<s<<"five";break;
    case 6 : cout<<s<<"six";break;
    case 7 : cout<<s<<"seven";break;
    case 8 : cout<<s<<"eight";break;
    default: cout<<s<<"nine";

}
    }





}
