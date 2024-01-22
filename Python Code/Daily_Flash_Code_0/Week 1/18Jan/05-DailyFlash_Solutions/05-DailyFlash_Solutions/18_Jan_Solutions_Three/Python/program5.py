try :
	a = raw_input()
except TypeError :
	print("Not a Number")

	if(a < 0) 
		exit(0);
	
	int s = a * a;
	for(int i = 1; i <= s; i++){
		if(i % a == 0) {
			printf("0\n");
		}
		else{
			printf("0 ");
		}
	}
}

