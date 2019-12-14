struct T{
  // ...
};

T process_element(Stream& s){
  alignas(T) unsigned char buff[sizeof(T)];
  read_stream(s, buff);

  auto* element = new(buff) T;
  return *element;
}