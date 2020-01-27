struct C {
  int c;
  C() : c(0) { no_opt(); }
};

const C cobj;
void no_opt() {
  int i = cobj.c * 100; //unspecified value
  std::cout << i << std::endl; 
}