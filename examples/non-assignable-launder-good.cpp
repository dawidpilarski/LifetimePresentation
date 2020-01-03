struct T{
  int a;
  int b;
};

T a{/**/};
T b{/**/};

T* newa = new(&a) T(b);

use(*newa); // correct
use(a); // correct
use(*std::launder(&a)); // correct, possible since C++17