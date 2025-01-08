# Run (and how to build)

**NOTE**: You shouldn't need to rebuild the binaries, unless you want to introduce some changes.

## Run using `docker compose`

TODO

## Building binaries

Below instructions will build 2 binaries: `` (for ) and `one-hundred-percent-wrong-using-dummy-flag` (to be distributed
as an offline artifact).

```
mkdir build
cd build
cmake ..
make
```