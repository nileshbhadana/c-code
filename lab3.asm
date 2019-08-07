.data
str: .space 20
revstr: .space 20
message: .asciiz "Enter in string MAX 20 character"
.text
main:
	la $a0,message
	li $v0,4
	syscall
	li $v0,8
	la $a0,str
	li $a1,20
	syscall
	li $t0,0
#stack,first subtract 4 from stack
subu,$sp,$sp,4
sw $t0,($sp)
li $t1,0
Loop:
	lbu $t0,str($t1)
	beqz $t0,push
	subu $sp,$sp,4
	sw $t0,($sp)
	addu $t1,$t1,1
	j Loop
push:li $t1,0
pop:
	lw $t0,($sp)
	addu $sp,$sp,4
	beqz $t0,done
	sb $t0,str($t1)
	addu $t1,$t1,1
	j pop
done:
	li $v0,4
	la $a1,str
	syscall
	li $v0,10
	syscall