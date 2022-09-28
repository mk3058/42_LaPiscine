id -Gn $FT_USER | sed -e 's/ /,/g' | tr '\n' '\0'
