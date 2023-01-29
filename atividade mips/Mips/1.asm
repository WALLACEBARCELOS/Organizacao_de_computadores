.data
	kg: .asciiz "\nPor favor, digite a sua massa corportal(kg): \n"
	a: .asciiz "\nDigite a sua altura: \n"
	inf: .asciiz "\n     Seu indidice de massa corporal he   \n"
	magreza_grave: .asciiz "\MAGREZA GRAVE \n"
	magreza_moderada: .asciiz "\MAGREZA MODERADA \n"
	magreza_leve: .asciiz "\MAGREZA GRAVE \n"
	saudavel: .asciiz "\SAUDAVEL \n"
	sobrepeso: .asciiz "\SOBREPESO\n"
	obesidade1: .asciiz "\OBESIDADE GRAU I\n"
	obesidade2: .asciiz "\OBESIDADE GRAU II(SEVERA)\n"
	obesidade3: .asciiz "\OBESIDADE GRAU III(MORBIDA)\n"
	
	n1: .float 16.0
	n2: .float 17.0
	n3: .float 18.5
	n4: .float 25.0
	n5: .float 30.0
	n6: .float 35.0
	n7: .float 40.0
.text
main:
	
	l.s $f5, n1 
	l.s $f6, n2
	l.s $f7, n3
	l.s $f8, n4
	l.s $f9, n5
	l.s $f10,n6
	l.s $f11, n7

	
	#solicitar peso
	#escreva
	li $v0, 4
	la $a0, kg
	syscall
	
	#leia
	li $v0,6
	syscall
	mov.s $f1, $f0
	
	#solicitar altura
	#escreva
	li $v0, 4
	la $a0, a
	syscall
	
	#leia
	li $v0,6
	syscall
	mov.s $f2, $f0
	
	#calculo IMC
	mul.s $f3, $f2,$f2
	div.s $f4, $f1,$f3
	
	#li  $v0,2 
	#mov.s $f12,$f4
	#syscall
	
	
	#MAGREZA GRAVE
		c.lt.s $f4, $f5 #menor que
		bc1t label  #if
		bc1f senao1 #else
		label:	
			li $v0, 4
			la $a0, magreza_grave
			syscall
			j fimse
		
		fimse:
			li $v0,10
        		syscall
        	
	#MAGREZA MODERADA
		senao1:	
			c.le.s $f4, $f6 # menor ou igual
			bc1t label1
			bc1f senao2 
		
		label1:
			li $v0, 4
			la $a0, magreza_moderada
			syscall
			j fimse
		

        	
        #MAGREZA LEVE	
		senao2:	
			c.le.s $f4, $f7 
			bc1t label2
			bc1f senao3
	
		label2:
			li $v0, 4
			la $a0, magreza_leve
			syscall
			j fimse
		
        
        #SAUDAVEL	
		senao3:	
			c.le.s $f4, $f8 
			bc1t label3
			bc1f senao4
		
		label3:
			li $v0, 4
			la $a0, saudavel
			syscall
			j fimse
	
	#SOBREBESO			
		senao4:
			c.le.s $f4, $f9
			bc1t label4
			bc1f senao5
		
		label4:
			li $v0, 4
			la $a0, sobrepeso
			syscall
			j fimse

	#OBESIDADE GRAU I			
		senao5:
			c.le.s $f4, $f10
			bc1t label5
			bc1f senao6
		
		label5:
			li $v0, 4
			la $a0, obesidade1
			syscall
			j fimse

	#OBESIDADE GRAU II			
		senao6:
			c.le.s $f4, $f11
			bc1t label6
			bc1f senao7
		
		label6:
			li $v0, 4
			la $a0, obesidade2
			syscall
			j fimse

	#OBESIDADE GRAU III			
		senao7:
			c.le.s $f4, $f12
			bc1t label
			#bc1f senao7
		
		label7:
			li $v0, 4
			la $a0, obesidade3
			syscall
			j fimse




