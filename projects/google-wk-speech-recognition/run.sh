#!/bin/bash

sox apple.wav apple.flac
curl --data-binary @apple.flac --header 'Content-type: audio/x-flac; rate=44000'   'https://www.google.com/speech-api/v1/recognize?xjerr=1&client=chromium&pfilter=2&lang=en-US&maxresults=6'

# {"status":0,"id":"d9df0ff20ad273337a29c731e2c19a0f-1","hypotheses":[{"utterance":"apple","confidence":0.7898886},{"utterance":"apples"},{"utterance":"appleone"},{"utterance":"apple off"},{"utterance":"apple inc"}]}