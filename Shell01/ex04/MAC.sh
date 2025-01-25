#!/bin/bash
ifconfig -a ether | grep -o -E ..:..:..:..:..:..
