# Caesar-cipher
SETUP REQUIREMENTS: linux based OS or a C compiler in other platforms
Step 1: Save the File encrypted in shift cipher as encryptedData.txt 
Step 2: Run the following commands in windows or linux platform respectively..
If you don't have one encrypt the data with the encrypt.c file while running same commands  below... but with name encrypt instead of decrypt. Save the original file to be encrypted as "originalData.txt"

gcc -o decrypt decrypt.c
then, 
.\decrypt

or 
cc decrypt.c 
./a.out

Save your encrypted file in the same directory as the downloaded repository.

That's it!!

Concept:
Decrypting a cipher without using any key with assumptions of messsge being sufficiently long enough so that it will contain two letter words.
We use concept frequency of most used two letter words 
and the taking the difference of individual letters like for instance
 consider "of" the difference will be 9 which is 'o'-'f'
FLAW : there will be words which will have same differences
 We can overcome by using other cryptanalysis concepts which is under Implementation Process and will be added soon
... 

