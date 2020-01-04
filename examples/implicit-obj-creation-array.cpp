alignas(float) unsigned char
buff[sizeof(float)];
float* ptr = std::launder(
	         (float*)buff);