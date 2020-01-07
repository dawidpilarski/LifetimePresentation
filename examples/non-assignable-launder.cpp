struct T{
  //...
};

T a;
T b;

// wild desire to assign ends with:
T* newa = new(&a) T(b);

use(*newa);
use(a);