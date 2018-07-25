#!/bin/bash

cat contacts_hard.txt | grep -i bauer | \
	grep -o '\(([0-9]\{3\})\|[0-9]\{3\}\)[ -]\?[0-9]\{3\}[ -]\?[0-9]\{4\}'
