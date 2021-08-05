#!/bin/bash
tx=$HOME/thepakv4

cd $tx
 source etc/folder.sh

    cd $tx
    if [[ -d 'SU' ]]
     then 
      rm -rf SU
      echo 'cache clear'
    else
      echo 'cache clear'
    fi
    
    cd $down
    echo 'removing output cache'
    if [[ -d 'output' ]]
     then
       rm -rf output
       echo 'success'
    else
       echo 'success'
    fi
    
    
    cd $tx
    mv cache etc/cache.h
