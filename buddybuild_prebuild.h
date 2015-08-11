#!/usr/bin/env bash

echo INSIDE PREBUILD SCRIPT
echo `pwd`
echo hello > test.txt
echo "#define PARSE_APP_ID @\"YOUR_PARSE_APP_ID_KEY\"" > ./Onions-iOS/OCParseConstants.h
echo "#define PARSE_CLIENT_ID @\"YOUR_PARSE_CLIENT_ID_KEY\"" >> ./Onions-iOS/OCParseConstants.h
