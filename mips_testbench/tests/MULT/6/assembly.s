li $5, 0x80000000; #-2,147,483,648
li $6, 0x2;
mult $5, $6;
mfhi $2;
jr $0;