struct T{
  int a;
  int b;
};

union U{
  T t;
  char b;
};

U u;
u.t = T{42, 24};
u.b = 'a';