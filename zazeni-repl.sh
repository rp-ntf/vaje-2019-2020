#!/bin/bash

set -o errexit
set -o nounset

echo "### Vpisi ime vaje (ime mape):"
read folder
if [[ ! -d "$folder" ]]
then
  echo "### Mapa ne obstaja"
  exit 1
fi
cd "$folder"

echo "### Prevajam program..."
if [[ -e 'main.c' ]]
then
  gcc -o replrun *.c -lm
elif [[ -e 'main.cpp' ]]
then
  g++ -o replrun *.cpp -lm
else
  echo "Ustrezna koda ne obstaja, koncujem"
  exit 1
fi
echo "### Prevedeno"

echo "### Zaganjam program"
./replrun
echo "### Program se je koncal"


