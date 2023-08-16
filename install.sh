echo compiling...
g++ roll.cpp -o roll

read -n 1 -p "move to /bin/ ?"
sudo cp roll /bin/
