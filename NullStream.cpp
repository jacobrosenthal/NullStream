#include <NullStream.h>

int NullStream::available() {
  return 0;
}

int NullStream::peek()
{
  return -1;
}

void NullStream::flush()
{
}

int NullStream::read() {
  return -1;
}

size_t NullStream::write(uint8_t c)
{
  return 1;
}

size_t NullStream::write(const char *str) {
  if (str == NULL) return 0;
  return strlen(str);
}

size_t NullStream::write(const char *buffer, size_t size) {
  return size;
}

size_t NullStream::write(const uint8_t *buffer, size_t size)
{
  return size;
}

size_t NullStream::print(const __FlashStringHelper *ifsh)
{
  PGM_P p = reinterpret_cast<PGM_P>(ifsh);
  size_t n = 0;
  while (1) {
    unsigned char c = pgm_read_byte(p++);
    if (c == 0) break;
    n += write(c);
  }
  return n;
}

size_t NullStream::print(const String &s)
{
  return s.length();
}

size_t NullStream::print(const char str[])
{
  return sizeof(str);
}

size_t NullStream::print(char c)
{
  return 1;
}

size_t NullStream::print(unsigned char b, int base)
{
  return 1;
}

size_t NullStream::print(int n, int base)
{
  return 1;
}

size_t NullStream::print(unsigned int n, int base)
{
  return 1;
}

size_t NullStream::print(long n, int base)
{
  return 1;
}

size_t NullStream::print(unsigned long n, int base)
{
  return 1;
}

size_t NullStream::print(double n, int digits)
{
  return 1;
}

size_t NullStream::println(const __FlashStringHelper *ifsh)
{
  size_t n = print(ifsh);
  n += println();
  return n;
}

size_t NullStream::print(const Printable &x)
{
  return x.printTo(*this);
}

size_t NullStream::println(void)
{
  return 2;
}

size_t NullStream::println(const String &s)
{
  return s.length();
}

size_t NullStream::println(const char c[])
{
  return sizeof(c);
}

size_t NullStream::println(char c)
{
  return 1;
}

size_t NullStream::println(unsigned char b, int base)
{
  return 1;
}

size_t NullStream::println(int num, int base)
{
  return 1;
}

size_t NullStream::println(unsigned int num, int base)
{
  return 1;
}

size_t NullStream::println(long num, int base)
{
  return 1;
}

size_t NullStream::println(unsigned long num, int base)
{
  return 1;
}

size_t NullStream::println(double num, int digits)
{
  return 1;
}

size_t NullStream::println(const Printable &x)
{
  return x.printTo(*this);
}