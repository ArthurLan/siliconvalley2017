ldapsearch -Q "uid=z*" cn | grep "^cn" | sed "s/cn: //" | sort -d -r --ignore-case
