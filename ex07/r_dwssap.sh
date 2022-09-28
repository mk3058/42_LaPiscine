cat /etc/passwd | sed -e "/#/d" -e "s/:*:.*//g" | rev | sort -r | sed -n "7,15 p"|tr "\n" ", " | tr ",$" "."
