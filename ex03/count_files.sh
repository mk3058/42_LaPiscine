echo "obase=10; $(ls -Rl | grep -e  ^- -e ^d | wc -l) + 1" | bc | tr -d " " | tr -d "\n"
