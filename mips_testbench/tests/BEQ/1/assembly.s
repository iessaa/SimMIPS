lui $26, 0x0fff;
lui $25, 0xfff0;
beq $26, $25, $L;

#code that is executed if false
addi $2, $0, 5; 
jr $0;

#code that is executed if true
$L:
addi $2, $0, 7;
jr $0; 
