#!/bin/bash

DATA=$1

AUTH=`cat auth-token`

# Encode the model name.
model=`echo $DATA | perl -pe 's:/:%2F:g'`

# Train a model.
curl -X POST \
-H "Content-Type:application/json" \
-H "Authorization: GoogleLogin auth=$AUTH" \
-d "{data:{}}" \
https://www.googleapis.com/prediction/v1.1/training?data=$model
echo

