#!/bin/sh

ifconfig -a | grep 'inet' | cut -d ' ' -f2
