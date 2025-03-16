# How to Run This Challange

Build
```
docker build -t athack-ctf/chall2025-one-hundred-percent-wrong:latest .
```

Run
```
docker run -d --name one-hundred-percent-wrong \
  -p 52029:2025 \
  athack-ctf/chall2025-one-hundred-percent-wrong:latest
```

Test connection (if running remotely, replace 127.0.0.1 with the container's ip)
```
nc 127.0.0.1 52029
```

## Building binaries

**NOTE**: You shouldn't need to rebuild the binaries, unless you want to introduce some changes.
Below instructions will build 2 binaries: `one-hundred-percent-wrong` (for the binary running on the server, and containing the real flag) and `one-hundred-percent-wrong-using-dummy-flag` (to be distributed
as an offline artifact).

```
mkdir build
cd build
cmake ..
make
```
