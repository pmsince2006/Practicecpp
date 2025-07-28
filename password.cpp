#include <iostream>
#include <string>
using namespace std;
int main(){
    string password;
    cout << "Enter password: ";
    cin >> password;
    int l = password.length();
    int uppercase=0;
    int lowercase=0;
    int digit=0;
    int special=0;
    int count = 0;
    string str;
    for(int i=0;i<l;i++){
        if(password[i]>='A' && password[i]<='Z'){
            uppercase++;
        }
        if(password[i]>='a' && password[i]<='z'){
            lowercase++;
        }
        if(password[i]>='0' && password[i]<='9'){
            digit++;
        }
        else{

            special++;
        }
    }
    if(uppercase == 0){
        count ++;
    }
    if(lowercase == 0){
        count ++;
    }
    if(digit == 0){
        count ++;
    }
    if(special == 0){
        count ++;}


// Weak: Length < 6 or missing 2+ categories
// Medium: Length 6-8 with 3+ categories
// Strong: Length 9+ with all 4 categories

if(l<6 || count>=2){
    str = "weak";
}

else if((l>=6&&l<=8) && count == 1){
    str = "medium";
}
else if((l>=9) && count == 0){
    str = "Strong";
}


cout<<"Password Analysis : "<<endl;
cout<<l<<endl;
cout<<"uppercase: "<<uppercase<<endl;
cout<<"lowercase: "<<lowercase<<endl;
cout<<"digits: "<<digit<<endl;
cout<<"special chars : "<<special<<endl;
cout<<"strength"<<str<<endl;
if(str=="Strong"){
    cout<<"Recommendation: Password meets all security criteria!"<<endl;
}
else if(str=="weak"){
    cout<<"Recommendation: Password doesnt meet  security criteria!"<<endl;
}
else{
    cout<<"Recommendation: Password is okayish !"<<endl;
}

return 0;

}