struct S{
  int a;
};

struct T {
  int a;
};

int test(S& val1, T& val2){
  val1.a = 10;
  val2.a = 2;

  return val1.a+val2.a; 
}