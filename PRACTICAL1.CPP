#include <iostream>
using namespace std;
class timeconverter{
 
 public:
        int Totsec;
        int hr;
        int min;
        int remsec;
        int sec;

   void showdetail()
   {
       cout<<hr<<":"<<min<<":"<<sec<<endl;
   }
};

int main() {
    timeconverter t1;
    cout<<"enter the total second:"<<endl;
    cin>>t1.Totsec;

    t1.hr=t1.Totsec/3600;
    t1.remsec=t1.Totsec%3600;
    t1.min=t1.remsec/60;
    t1.sec=t1.remsec%60;
    t1.showdetail();

   
    return 0;
}