struct T{
  const int a;
  int& b;
};

T a{/**/};
T b{/**/};

T* newa = new(&a) T(b);

use(*newa); // correct
use(a); // correct since C++20
use(*std::launder(&a)); // correct, possible since C++17