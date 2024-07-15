#!/bin/bash

if [ -f "$HOME/.bashrc" ]; then
  echo "export HELLO=\$HOSTNAME" >> "$HOME/.bashrc"
  echo "export LOCAL=\$(whoami)" >> "$HOME/.bashrc"
  gnome-terminal &
else
  echo ".bashrc file does not exist in the user's home directory."
fi
# when the new terminal is created it can see the new environment varialbes from the .bashrc file