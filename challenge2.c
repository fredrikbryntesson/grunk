







			// Fredrik B
			const char code[] = 
			"\xeb\x19\x31\xc0\x31\xdb\x31\xd2\x31\xc9\xb0\x04\xb3\x01"
			"\x59\xb2\x08\xcd\x80\x31\xc0\xb0\x01\x31\xdb\xcd\x80\xe8"
			"\xe2\xff\xff\xff\x76\x69\x64\x68\x61\x6e\x63\x65";
			int main(int argc, char **argv)
			{
				int (*write)();
				write = (int (*)()) code;

				(int)(*write)();
			}
			/*
			fbryntesson@artemis:~$ gcc challenge2.c -o challenge2
			fbryntesson@artemis:~$ ./challenge2 
			vidhance
			*/
