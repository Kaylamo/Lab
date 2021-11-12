#phone book name

PHONEBOOK="phoneBook.txt"

        exit=0

        while [ $exit -ne 1 ]

        do

            echo "What OPERATION do you want to Perform?"

echo -e "adding, listing, finding, deleting, exit:

"            read Fanswer

          if [ "$Fanswer" = "adding" ]

            then
                ./adding.sh

            elif [ "$Fanswer" = "listing" ]

            then

                ./listing.sh

            elif [ "$Fanswer" = "finding" ]

    then

       ./finding.sh

            elif [ "$Fanswer" = "deleting" ]

           then

                ./deleting.sh

            elif [ "$Fanswer" = "exit" ]

            then

              #EXIT val set to 1

                exit=1
