.data
	msg1: .asciiz "Informe o numero do quanrto: "
	msg2: .asciiz "Seu quarto esta no corredor a DIREITA"
	msg3: .asciiz "Seu quarto esta no corredor a ESQUERDA"
.text
main:
	li $v0, 4
	la $a0, msg1
	syscall
	
	li $v0, 5
	syscall
	
	add $t1, $v0, $zero
	
	rem $t2, $t1, 2
	beq $t2, 0, se
	j senao
	
	se:
	li $v0, 4
	la $a0, msg2
	syscall
	j fimse
	
	senao:
	li $v0, 4
	la $a0, msg3
	syscall
	fimse:
