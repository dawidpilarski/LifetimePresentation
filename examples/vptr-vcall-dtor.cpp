struct A{
  ~A(){
    foo();
  }
  virtual void foo(){
    std::cout << "A" << std::endl;
  }
};

struct B : A{
  void foo() override {
    std::cout << "B" << std::endl;
  }
};

B b;