ldapsearch -LLL -Q "sn=*bon*" sn | grep -Ec "sn:.*bon"
