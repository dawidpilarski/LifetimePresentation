struct rgba{
  uint8_t red;
  uint8_t green;
  uint8_t blue;
  uint8_t alpha;
};

union color{
  rgba color;
  uint32_t as_int;
};

color c = {255, 120, 0};
display(c.as_int);

