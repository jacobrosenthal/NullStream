#include "NullStream.h"

int NullStream::available() {
  return 0;
}

int NullStream::peek() {
  return -1;
}

void NullStream::flush() {}

int NullStream::read() {
  return -1;
}

size_t NullStream::write(uint8_t c) {
  return 1;
}

size_t NullStream::write(const uint8_t *buffer, size_t size) {
  return size;
}
