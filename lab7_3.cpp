//status = "ONE-NIGHT-STAND";
#include <iostream>
using namespace std;

int main(){

    int age;
    float money,height;
    string status;

    cin >> age ;
    if(age<=20){
        cin >> height;
        if(height < 160) status = "UNFRIEND";
        else if(height < 175) status = "FRIEND";
        else{
            cin >> money ;
            if(money>69000000) status = "MARRIED";
            else status = "ONE-NIGHT-STAND";
        }
    }else if(age<30){
        cin >> money;
        if(money > 10000000) status = "BEST FRIEND";
        else status = "UNFRIEND";
    }else{
        status = "UNFRIEND";
    }

    cout << status;

    return 0;
}