[![Build Status](https://travis-ci.org/jacobrosenthal/NullStream.svg?branch=master)](https://travis-ci.org/jacobrosenthal/NullStream)
#NullStream

Black holes all data sent to it. Any .reads, .available, .peeks return -1, false, etc.

##Install
As usual, download zip, unzip and rename to remove the dash character and place in your Arduino Libraries folder, on MacOSX ~/Documents/Arduino/libraries/

##Use
Create a NullStream.
```cpp
NullStream nullStream;
```

Now reads and writes to nullStream will be blackholed.
```cpp
nullStream.write('a');
```
