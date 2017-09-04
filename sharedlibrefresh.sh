#!/usr/bin/env bash
sudo ldconfig
ldconfig -p | grep libgreet
ldd ./main
