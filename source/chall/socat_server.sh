#!/bin/bash

PORT=2025
BIN_PATH="./one-hundred-percent-wrong"


while true; do
    socat TCP-LISTEN:$PORT,reuseaddr,fork EXEC:$BIN_PATH,pty,ctty
    sleep 1
done


