# Run (and how to build)

**NOTE**: You shouldn't need to rebuild the binaries, unless you want to introduce some changes.

## Using `docker compose`

```
# Run container
docker compose up --build

# Test connection (replace 127.25.0.2 with the container's ip)
nc 172.25.0.2 2025
```

## Building binaries

Below instructions will build 2 binaries: `` (for ) and `one-hundred-percent-wrong-using-dummy-flag` (to be distributed
as an offline artifact).

```
mkdir build
cd build
cmake ..
make
```