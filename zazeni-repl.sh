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
gcc -o replrun *.c
echo "### Prevedeno"

echo "### Zaganjam program"
./replrun
echo "### Program se je koncal"


