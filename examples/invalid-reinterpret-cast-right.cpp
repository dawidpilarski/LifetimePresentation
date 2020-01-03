struct T{
  // ...
};

T process_element(Stream& s){
  unsigned char buff[sizeof(T)];
  read_stream(s, buff);

  T element;
  std::memcpy(&element, buff, sizeof(T));
  return element;
}