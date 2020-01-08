struct T{
  // ...
};

T process_element(Stream& s){
  alignas(T) char buff[sizeof(T)];
  read_stream(s, buff);

  T* element = new(buff) T;
  return *element;
}