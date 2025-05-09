#!/bin/bash

GREEN='\033[0;32m'
CLEAR='\033[0m'

echo -e "$GREEN BUILDING DRIVER $CLEAR"
cd driver/pci
make

echo -e "$GREEN REMOVING OLD DRIVERS $CLEAR"
sudo rmmod de2i_150

echo -e "$GREEN INSERTING DRIVER TO KERNEL $CLEAR"
sudo insmod de2i-150.ko
cd ../..

echo -e "$GREEN CHANGING DEVICE NODE PERMISSIONS $CLEAR"
sudo chmod 666 /dev/mydev

echo -e "$GREEN RUNNING START FILE $CLEAR"
cd app
python3 start.py

echo -e "$GREEN RUNNING THE GAME $CLEAR"
python3 game.py

echo -e "$GREEN DONE! $CLEAR"
