#!/bin/bash
sudo port install autoconf
sudo port install ruby && sudo mv /opt/local/bin/ruby /opt/local/bin/rb
sudo ./restore_ports.tcl installed_ports.txt
