#!/bin/bash

PORT=2025
BIN_PATH="./one-hundred-percent-wrong"


while true; do
    socat TCP-LISTEN:$PORT,reuseaddr EXEC:$BIN_PATH,pty
    sleep 1
done


