struct T{
  // not assignable
};

T a;
T b;

//...

T* newa = new(&a) T(b);

use(*newa);
use(a);