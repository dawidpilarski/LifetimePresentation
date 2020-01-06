struct V { virtual void f();};
struct A : virtual V {};
struct B : virtual V { B(V*, A*);};

struct D : A, B {
  D() : B((A*)this, this) { }
};

B::B(V* v, A* a) {
  //B ctor - the D object is not yet fully constructed
  typeid(*this);       // correct: type_info for B.
  typeid(*v);          // correct: v points the V subobject, which is the base of B - it surely is fully constructed
  typeid(*a);          // undefined behavior: A is not a base of B - might be not yet created at this time
  dynamic_cast<B*>(v); // correct: v points V subobject, which is the base of B
  dynamic_cast<B*>(a); // undefined behavior, a points the  A subobject, which is not the base of B
}