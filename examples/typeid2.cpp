struct Base{
  Base();
  virtual void foo(){}
};
struct Derived : Base{};

Base::Base(){
    std::cout << typeid(*this).name() << std::endl;
    std::cout << dynamic_cast<Derived*>(this) << std::endl;
}

Derived d;