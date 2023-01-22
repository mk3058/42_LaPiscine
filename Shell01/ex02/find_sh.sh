#!/bin/bash
find . -type f -name '*.sh' | xargs basename | sed -e 's/\.sh//g'
