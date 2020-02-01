struct C;
struct B{
  B(C*);
};
struct C{
  C(B*);
};
struct D{
  D() : 
    c(&b), // UB, b's vtor didn't start yet.
    b(&c){}
  C c; // constructed first
  B b;
};