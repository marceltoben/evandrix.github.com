#!/bin/sh
html="$TARGET_BUILD_DIR/$UNLOCALIZED_RESOURCES_FOLDER_PATH/HTML"
rm -rf "$html/socket.io"
mkdir "$html/socket.io"
cp -r ../../Node/node_modules/socket.io-client/* "$html/socket.io"
