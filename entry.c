#!/bin/sh

        #this particular script can be used for entry purpose

        echo -n "Enter the name of the person: "
        read name

        echo -n "Provide the address of respective person: "
        read address

        echo -n "Provide the phone number of respective person: "
        read telephone_number

        echo "$name ; $address ; $telephone_number" >>book.txt
