ifconfig | grep -E "ether" | awk '{print $2}'
