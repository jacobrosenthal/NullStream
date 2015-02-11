#ifndef NullStream_h
#define NullStream_h

#include "Arduino.h"

class NullStream : public Stream {
  public:

    int available();
    int peek();
    void flush();

    int read();

    size_t write(uint8_t c);
    size_t write(const uint8_t *buffer, size_t size);

};

#endif // NullStream_h