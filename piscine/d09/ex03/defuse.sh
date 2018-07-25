#!/bin/bash

touch -A '-01' bomb.txt
stat -x bomb.txt | grep 'Access:' | cut -c 9-
