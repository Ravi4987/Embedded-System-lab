#!/bin/bash

while true
do
    echo -n "mybash> "
    read -r CMD

    if [ "$CMD" = "exit" ]; then
        break
    fi

    bash -c "$CMD" >> stdout.log 2>> stderr.log

    echo "STDOUT -> stdout.log"
    echo "STDERR -> stderr.log"
done
