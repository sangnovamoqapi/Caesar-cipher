# Caesar-cipher
SETUP:
You need a C compiler.
Run the code in the terminal with command

gcc -o decrypt decrypt.c
then, 
.\decrypt

or 
cc main.c 
./a.out

Save your encrypted file in the same directory as the downloaded repo, and name it "file2.txt".
If you don't have one encrypt the data with the encrypt.c file while running same commands as above... 
That's it!!

Concept:
Decrypting a cipher without using any key with assumptions of messsge being sufficiently long enough so that it will contain two letter words.
We use concept frequency of most used two letter words 
and the taking the difference of individual letters like for instance
 consider "of" the difference will be 9 which is 'o'-'f'
FLAW : there will be words which will have same differences
 We can overcome by using other cryptanalysis concepts which is under Implementation Process
... 

