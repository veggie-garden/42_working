#!/bin/sh

ifconfig | grep "ether " | tr -d " " | sed 's/ether//' | awk '{print $1}'
