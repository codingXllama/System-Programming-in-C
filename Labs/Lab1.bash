#!/bin/bash

echo "Good Morning: This is my first shell script"
today=`date`
echo "Today is $today"
name='osama'
dataFields=('name is')
echo "Total field count is ${#dataFields[@]}"

for field in ${dataFields[@]}
do
    echo $field
done

# for field in ${dateFields[@]}
# do  
    
# done 