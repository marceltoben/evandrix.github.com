#!/bin/bash
tmux new-session -d -s session_name

tmux new-window -t session_name:1 -n 'local'
tmux new-window -t session_name:2 -n 'login'  'ssh login'
tmux new-window -t session_name:3 -n 'backup' 'ssh backup'
tmux new-window -t session_name:4 -n 'devel'  'ssh devel'

tmux select-window -t session_name:1
tmux attach-session -t session_name
