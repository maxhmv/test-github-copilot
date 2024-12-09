#ifndef a_hpp
#define a_hpp

class A {

public: 
  A(int a, int num) : a(a), num(num) {};
  int getx() { return a + num; }; 

private:
int num;
int a;

}

#endif a_hpp
