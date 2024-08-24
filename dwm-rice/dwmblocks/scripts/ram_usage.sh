#!/bin/sh
# Get total and used memory in bytes
total=$(free -b | awk '/Mem:/ {print $2}')
used=$(free -b | awk '/Mem:/ {print $3}')

# Convert bytes to gigabytes and format to one decimal place
used_gb=$(echo "$used" | awk '{print $1/1024/1024/1024}')

# Output used memory in GB with one decimal place
printf "[  %.1fGi ]\n" "$used_gb" 
