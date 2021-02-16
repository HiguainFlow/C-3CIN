#include <iostream>
#include <cstdlib>
using namespace std;
class Lista{
    private:
    string *base;
    int l;
    int top=0;
    public:
    Lista(int lunghezza){
        l=lunghezza;
        base=new string[l];
        }
    string read(int k){
        return base[k];
    }
    void print (){
        for(int k=0; k<l; k++){
            cout<<read(k)<<endl;
        }
    }
    int len(){ return l;}
    string get(int k){return base [k];}
    void add (string q){
      if(top<100){
          base[top]=q;
          top++;
      }

    }

    string Randomvariabile(){
        string w;
        int m=(rand()%20)+1;
        for(int k=0; k<m; k++){
            w=w+"*";
        }
        return w;
    }
};

int main()
{
    Lista q(100);
    
    q.add ("Mammolo");
    q.add ("Pisolo");
    q.add ("Teolo");
    q.add ("Cucciolo");
    q.add ("Lello");
    q.add ("Angela");
    q.add ("Alberto Angela");
    
    q.print():
    q.sort();
    q.print();


    for (int k=0; k<100; k++){
           q.add(q.Randomvariabile());
    }
    q.print();
    return 0;
}
