struct T{
  // ...
};

T process_element(Stream& s){
  unsigned char buff[sizeof(T)];
  read_stream(s, buff);

  return std::bit_cast<T>(buff);
}