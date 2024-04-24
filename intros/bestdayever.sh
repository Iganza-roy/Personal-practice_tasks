#!/usr/bin/env bash
# displays greetings

name=$1
attr=$2
new=$(whoami)
date=$(date)
dir=$(pwd)

echo "hey $name!!"
sleep 1
echo "looking good $name"
sleep 1
echo "you have the best $attr i've ever seen $name!"
sleep 1
echo "you're currently logged in as $new, today on $date and in this directory $dir"
