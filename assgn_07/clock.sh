#!/bin/bash

trap "" SIGINT

while true; do
    clear
    numcols=$(tput cols)
    numlines=$(tput lines)

    day=$(date +"%A %d %B %Y")
    time=$(date +"%I:%M:%S")

    tput cup $((numlines/2)) $(((numcols-20)/2))
    printf "%s\n" "$day"
    tput cup $((numlines/2 + 1)) $(((numcols-8)/2))
    printf "%s\n" "$time"
    tput cup $((numlines+1))
    
    read -t 0.5 -n 1 key 
    if [[ $? = 0 && $key = "" ]]; then break; fi
    sleep 0.5
done

trap - SIGINT