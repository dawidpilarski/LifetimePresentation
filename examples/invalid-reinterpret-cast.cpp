struct T{
  // ...
};

T process_element(Stream& s){
  alignas(T) unsigned char buff[sizeof(T)];
  read_stream(s, buff);

  auto* element = reinterpret_cast<T*>(buff);
  return *element;
}