struct V { virtual void f();};
struct A : virtual V {};
struct B : virtual V { B(V*, A*);};

struct D : A, B {
  D() : B((A*)this, this) { }
};

B::B(V* v, A* a) {
  //B ctor - the D object is not yet fully constructed
  typeid(*this);       // correct: type_info for B.
  typeid(*v);          // correct: B inherits from V
  typeid(*a);          // undefined behavior: A is not a base of B
  dynamic_cast<B*>(v); // correct: B inherits from V
  dynamic_cast<B*>(a); // undefined behavior, B doesn't inherit A
}