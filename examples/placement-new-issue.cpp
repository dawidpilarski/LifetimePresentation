struct T{
  //...
};

alignas(T) unsigned char
buff[sizeof(T)];
new(buff) T;
T* ptr = 
   reinterpret_cast<T*>(buff);
//use ptr