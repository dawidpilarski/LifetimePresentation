struct A{
  A(A*){}
};
struct B : A{
  B() : A(this){}  
};