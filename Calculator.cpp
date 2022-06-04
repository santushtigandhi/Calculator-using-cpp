#include<iostream>
#include<cmath>
using namespace std;
#define pi 3.14159265
#define e 2.718281828459045
#define MAX 100

class calc{
    public:
        int num = 0;
        void add();
        void subt();
        void mult();
        void div();
        void exp();
        void sine();
        void cosine();
        void tangent();
        void logarithm1();
        void logarithm2();
        void logarithm3();
        void root();
        void dtor();
        void rtod();
        void asine();
        void acosine();
        void atangent();
        void raisetopower2();
        void epower();
        void factorial();
};

void calc::add(){
    int sum=0,num,arr[MAX],i;
    cout<<"Enter how many numbers you want to add?";
    cin>>num;
    for(i=0;i<num;i++){
        cin>>arr[i];
    }
    for(i=0;i<num;i++)
        sum+=arr[i];
    cout<<sum;    
}
void calc::subt(){
    int diff,num,arr[MAX],i;
    cout<<"Enter the first number:";
    cin>>diff;
    cout<<"Enter how many numbers you want to subtract?";
    cin>>num;
    for(i=0;i<num;i++){
        cin>>arr[i];
    }
    for(i=0;i<num;i++)
        diff-=arr[i];
    cout<<diff;    
}
void calc::mult(){
    int mult=1,i,arr[MAX];
    cout<<"Enter how many numbers you want to multiply?";
    cin>>num;
    for(i=0;i<num;i++){
        cin>>arr[i];
    }
    for(i=0;i<num;i++)
        mult*=arr[i];
    cout<<mult;    
}
void calc::div(){
    double div;
    int i,arr[MAX];
    cin>>div;
    cout<<"Enter how many numbers you want to divide?";
    cin>>num;
    for(i=0;i<num;i++){
        cin>>arr[i];
    }
    try{
        for(i=0;i<num;i++)
            if(num!=0){
                div/=arr[i];}
                
            else{
                throw num;
            }
            cout<<div;
        }
    catch(int num){
        cout<<"Exception caught!! Dividing by zero";
    }       
}
void calc::exp(){
    int num,num1,result;
    cout<<"Enter the base:";
    cin>>num;
    cout<<"Enter the power:";
    cin>>num1;
    try{
        if(num1>0){
            result=pow(num,num1);
        }
        else{
            throw num1;
        }cout<<result;
    }
    catch(int num1){
        cout<<"Exception caught!! Negative number in Exponent Power";
    }
      
}
void calc::sine(){
    double deg;
    cout<<"Enter number in degress:";
    cin>>deg;
    float result= sin(deg);
    cout<<result;
}
void calc::cosine(){
    double deg;
    cout<<"Enter number in degress:";
    cin>>deg;
    float result= cos(deg);
    cout<<result;
}
void calc::tangent(){
    double deg;
    cout<<"Enter number in degress:";
    cin>>deg;
    float result= tan(deg);
    cout<<result;
}
void calc::logarithm1(){
    int n;
    cout<<"Enter value (base e):";
    cin>>n;
    try{
        if(n>0){
            float result= log(n);
            cout<<result;
        }
        else{
            throw n;
        }
    }
    catch(int n){
        cout<<"Exception caught!! Logarithm of negative number is not defined. Enter a positive number";
    }
}
void calc::logarithm2(){
    int n;
    cout<<"Enter value (base 10):";
    cin>>n;
    try{
        if(n>0){
            float result= log10(n);
            cout<<result;
        }
        else{
            throw n;
        }
    }
    catch(int n){
        cout<<"Exception caught!! Logarithm of negative number is not defined. Enter a positive number";
    }
    
}
void calc::logarithm3(){
    int n,b;
    cout<<"Enter value:";
    cin>>n;
    cout<<"Enter desired base:";
    cin>>b;
    try{
        if(n>0 and b>0){
            float result= log(n)/log(b);
            cout<<result;
        }
        else{
            throw n;
        }
    }
    catch(int n){
        cout<<"Exception caught!! Logarithm of negative number is not defined. Enter a positive number";
    }
    
}
void calc::root(){
    int num;
    cout<<"Enter number:";
    cin>>num;
    try{
        if(num>0){
            float result=sqrt(num);
            cout<<result;
        }
        else{
            throw num;
        }
    }
    catch(int num){
        cout<<"Exception caught!! Square Root of Negative number is not defined. Enter a positive number";
    }
    
}
void calc::dtor(){
    int degree;
    cout<<"Enter in degree:";
    cin>>degree;
    double result=degree*(pi/180);
    cout<<degree<<" Degree"<<" is converted to "<<result<<" radians";
}
void calc::rtod(){
    int rad;
    cout<<"Enter in radians:";
    cin>>rad;
    double result=rad*(180/pi);
    cout<<rad<<" Radians"<<" is converted to "<<result<<" degree";
}
void calc::asine(){
    double rad;
    cout<<"Enter number:";
    cin>>rad;
    double result= asin(rad);
    double value=rad*(180/pi);
    cout<<value;
}
void calc::acosine(){
    double rad;
    cout<<"Enter number:";
    cin>>rad;
    float result= acos(rad);
    double value=rad*(180/pi);
    cout<<value;
}
void calc::atangent(){
    double rad;
    cout<<"Enter number:";
    cin>>rad;
    double value=rad*(180/pi);
    cout<<value;
}
void calc::raisetopower2(){
    double num;
    cout<<"Enter number:";
    cin>>num;
    double result=pow(num,2);
    cout<<result;    
}
void calc::epower(){
    double num;
    cout<<"Enter number:";
    cin>>num;
    double result=pow(e,num);
    cout<<result;    
}
void calc:: factorial()
{
    int num,i,fact=1;
    cout<<"Enter number:";
    cin>>num;
    try{
        if(num>0){
            for (i = 2; i <= num; i++)
            fact *= i;
        }
        else{
            throw num;
        }cout<<fact;
    }
    catch(int num){
        cout<<"Exception caught!! Factorial of negative number is not defined. Enter only Natural numbers";
    }   
}
int main(){
    calc c;
    int ch;
    char ans;
    do{
        cout<<"Enter choice:"<<endl
            <<"1 for Addition"<<endl
            <<"2 for Subtraction"<<endl
            <<"3 for Multiplication"<<endl
            <<"4 for Division"<<endl
            <<"5 for Exponent"<<endl
            <<"6 for Sine"<<endl
            <<"7 for Cosine"<<endl
            <<"8 for Tangent"<<endl
            <<"9 for Logarithm(Base e)"<<endl
            <<"10 for Logarithm(Base 10)"<<endl
            <<"11 for Logarithm(Desired Base)"<<endl
            <<"12 for Square root"<<endl
            <<"13 for Degree to Radian Conversion"<<endl
            <<"14 for Radian to Degree Conversion"<<endl
            <<"15 for Sine Inverse"<<endl
            <<"16 for Cosine Inverse"<<endl
            <<"17 for Tangent Inverse"<<endl
            <<"18 for Raise to power 2"<<endl
            <<"19 for e to the power number"<<endl
            <<"20 for factorial of a number"<<endl;
        cin>>ch;
        switch(ch){
            case 1:
                cout<<"Addition of numbers"<<endl;
                c.add();
                break;
            case 2:
                cout<<"Subtraction of numbers"<<endl;
                c.subt();
                break;
            case 3:
                cout<<"Multiplication of numbers"<<endl;
                c.mult();
                break;
            case 4:
                cout<<"Division of numbers"<<endl;
                c.div();
                break;
            case 5:
                cout<<"A number raised to another number"<<endl;
                c.exp();
                break;
            case 6:
                cout<<"Sin Theta"<<endl;
                c.sine();
                break;
            case 7:
                cout<<"Cos Theta"<<endl;
                c.cosine();
                break;
            case 8:
                cout<<"Tan Theta"<<endl;
                c.tangent();
                break;
            case 9:
                cout<<"Logarithm(Base e)"<<endl;
                c.logarithm1();
                break;
            case 10:
                cout<<"Logarithm(Base 10)"<<endl;
                c.logarithm2();
                break;
            case 11:
                cout<<"Logarithm(Desired Base)"<<endl;
                c.logarithm3();
                break;
            case 12:
                cout<<"Square Root"<<endl;
                c.root();
                break;
            case 13:
                cout<<"Conversion Degrees to Radians"<<endl;
                c.dtor();
                break;
            case 14:
                cout<<"Conversion Radians to Degree"<<endl;
                c.rtod();
                break;
            case 15:
                cout<<"Sin-1 Theta"<<endl;
                c.asine();
                break;
            case 16:
                cout<<"Cos-1 Theta"<<endl;
                c.acosine();
                break;
            case 17:
                cout<<"Tan-1 Theta"<<endl;
                c.atangent();
                break;
            case 18:
                cout<<"Number raise to power 2"<<endl;
                c.raisetopower2();
                break;
            case 19:
                cout<<"e raise to the power number"<<endl;
                c.epower();
                break;  
            case 20:
                cout<<"Factorial of a number"<<endl;
                c.factorial();
                break; 
            default:
                cout<<"Invalid option."<<endl;
                break;  
        }cout<<endl<<"Do you wish to continue?";
        cin>>ans;
    }while(ans=='Y');
    return 0;
}