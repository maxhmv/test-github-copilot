#ifndef b_hpp
#define b_hpp

class B {

public: 
  B(int a, int num) : b(a), num(num) {};
  int getx() { return b + num; }; 

private:
int num;
int b;

}

#endif // b_hpp
