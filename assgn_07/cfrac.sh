#!/bin/bash

function evalcfrac () {
    local arr=("$@")
    local sz=${#arr[@]}

    if [ $sz -eq 1 ]; then echo "num=${arr[0]}; den=1"
    else
        eval $(evalcfrac "${arr[@]:1}")
        newnum=$(($num * ${arr[0]} + $den))
        newden=$num
        echo "num=$newnum; den=$newden"
    fi
}

function gencfrac () {
    a=$1
    b=$2
    if [ $b -eq 0 ]; then return 0; fi
    q=$(( a / b ))
    r=$(( a % b ))
    printf '%d ' "$q"
    gencfrac $b $r
}

echo -n "Enter the array of coefficients: "; read -a arr
eval $(evalcfrac "${arr[@]}")
echo -n "The continued fraction evaluates to $num / $den = "
echo `echo "scale = 10; $num / $den" | bc`
printf "\n"

echo -n "Enter fraction (a / b): "; read -a frac
echo -n "The continued fraction expansion of ${frac[0]} / ${frac[2]} is: "
gencfrac ${frac[0]} ${frac[2]}
printf "\n"
