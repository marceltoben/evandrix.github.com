#!/bin/bash

DATA=$1
INPUT="$2"

AUTH=`cat auth-token`

# Encode the model name.
model=`echo $DATA | perl -pe 's:/:%2F:g'`
data="{data: {\"input\" : { \"mixture\" : [ $INPUT ]}}}"

echo $data

# Get a prediction.
curl -X POST \
-H "Content-Type:application/json" \
-H "Authorization: GoogleLogin auth=$AUTH" \
-d "$data" \
https://www.googleapis.com/prediction/v1.1/training/$model/predict
echo

