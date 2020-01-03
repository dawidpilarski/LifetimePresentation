struct T{
  //...
};

alignas(T) unsigned char
buff[sizeof(T)];
new(buff) T;
T* ptr = std::launder((T*)buff);
//use ptr