#!/bin/bash

DATA=$1

AUTH=`cat auth-token`

# Encode the model name.
model=`echo $DATA | perl -pe 's:/:%2F:g'`

# Get model metadata.
curl \
-H "Authorization: GoogleLogin auth=$AUTH" \
"https://www.googleapis.com/prediction/v1.1/training/$model"
echo

