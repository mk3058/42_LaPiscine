ifconfig | grep "ether " | tr -d "either" | tr -d "\t" | tr -d " " | tr "\0" "\n"
