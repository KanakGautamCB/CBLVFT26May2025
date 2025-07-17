#include <iostream>
#include <string>
using namespace std;

class creditCard{
public:
    string bankName;
    int cardNumber;

    creditCard(){
        cout<<"Credit card constructor invoked"<<endl;
    }

    creditCard(string bn, int cn){
        //cout<<"Credit card parameterised constructor invoked"<<endl;
        bankName=bn;
        cardNumber=cn;
    }

    creditCard(const creditCard& c){
        cout<<"creditCard Copy constructor invoked"<<endl;
        bankName=c.bankName;
        cardNumber=c.cardNumber;
    }
};

class customer{

    string* name;
    int age;
    char gender;
    float credits;
    creditCard card;


public:
    customer(){
        cout<<"constructor is invoked"<<endl;
    }

    customer(string n, int a, char g, float c, string bn, int cn)
    :card(bn,cn){
        //cout<<"customer constructor invoked"<<endl;
        name = new string(n);
        //*name = n;
        age=a;
        gender=g;
        credits=c;
        
    }

    customer (const customer& c):
    card(c.card){
        name = new string(*c.name);
        age=c.age;
        gender=c.gender;
        credits=c.credits;
    }

    bool operator>(const customer& c1){
        return (age>c1.age);
    }

    ~customer(){
        
        cout<<"Destructor of "<<*name<<" called"<<endl;
        delete(name);
    }

    // customer(string n, int a, char g, float c):
    // name(n),age(a),gender(g),credits(c){

    // }

    string getName () const{
        return *name;
    }

    void setName(string n){
        *name=n;
    }

    void setAge(int x){
        age=x;
    }




};

int main(){

    customer c1("john", 29, 'M',100.10,"SBI",1090);

    // c1.setName("jack");

    //cout<<c1.getName()<<endl;
    //cout<<c1.credits<<endl;
   // cout<<c1.card.bankName<<" "<<c1.card.cardNumber<<endl;

    customer c2=c1;
    c2.setName("jack");
    c2.setAge(56);

    //c1>c2 -> c1.operator>(c2)

    if(c1>c2){
        cout<<"c1 is bigger"<<endl;
    }
    else if(c1.operator>(c2)){
        cout<<"c1 is bigger"<<endl;
    }else{
        cout<<"c2 is bigger"<<endl;
    }




}