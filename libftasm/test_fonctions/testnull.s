section .data
hello: db 'Bonjour papi.', 10, 13, '$'


section .text
	global start
	global _main

start:
	call _main
	ret

_main:
	call _test
	ret

_test:
	mov dl, 'A'
	mov ah, 04
	int 21h
;	mov rsi, hello
;	mov rdx, 10
;	mov rax, 0x2000004
;	mov rdi, 1
;	syscall
;	int 0x21
	mov [rel sully_name + 6], r14
	mov [rel sully_name + 6], byte 14
	ret





rdi est le premier paramettre
rsi le second
si <= 6 param : ordre des paramettres : %rdi, %rsi, %rdx, %rcx, %r8 and %r9
ensuite stockage sur la stack ?
name size : BYTE, WORD, DWORD, QWORD et TWORD

	cx label a utiliser pour les boules
	loop => boucle
	ret => return

	pssage d'infos passe par : le passge de registres (ax et bx) (rapide mais peu de registres et peut etre deja utilises)
			ou le passage par la pile (mis sur la pile avant l'appel) => methode du C

	on utilise le registre BP de la manière suivante :
		on transfère la valeur de SP dans BP à l'aide de l'instruction “MOV BP, SP”.
		L'adresse de retour (qui sera dépilée quand le processeur rencontrera
		l'instruction “RET”) se trouve à l'adresse SS:[BP],
		le dernier paramètre est adressé par SS:[BP + 2],
		l'avant-dernier par SS:[BP + 4], etc.
		On peut ainsi lire n'importe quel paramètre sans le dépiler.

	! attention a bien depiler ses instructions avant ret : ladresse de ret est au bout de la pile
	MACRO => evite de recopier du code (comme en c) doit etre palcer au debut, peut contenir des instructions

	[] sert a dire qu'on utilise le fichier comme un pointeur sur une zone memoire


>> LES SECTIONS
	.data :
		section reservée aux données connues (non modifiables ?)
		exple :
				text db "ceci est un text"
	.bss :
		section reservée aux infos variables dont on aura besoin : on reserve un ou plusieurs blocs de x octets
		exple :
				name : resb 16
	.text


les words
	db => byte 8
	dw => double bytes (word) 16
	dd => 4 bytes (dbl word) 32
	dq => 8 bytes (quadriple word) 64
	BYTE	1
	WORD	2
	DWORD	4
	QWORD	8
	TBYTE	10
>>> LES REGISTRES
les pointeurs :
	rip : index pointer (pointeur de l'endroit ou le processeur lit l'instruction)
	rsp : stack pointer
	rbp : stack bottom pointeur


rax : registre general
rbx : registre general
rcx : registre general
rdx : registre general

rdi :
rsi :


>>> LES FONCTIONS
	jmp : jump sans condition
	cmp : compare (a utiliser avec les flags) => cmp modifie les flags
	syscall : appel le syscall corespondant au numero de "rax"(nom) avec en paramettres 1 => "rdi" 2 => "rsi" 3 => "rdx"
	ret => return

les jumps : (must be used with cmp)
	je : jmp if egal
	jne : jmp if not egal
	jg : jmp if sup (sign)
	ja : jmp if sup (unsign)
	jge : jmp if egal or sup (sign)
	jae : jmp if egal or sup (unsign)
	jl : jmp if inf (sign)
	jb :  jmp if inf (unsign)
	jz : jmp if 0
	jnz : jmpif not 0
	jo : overflow ?
	jno not overflow ?
	js : jmp if signed
	jns jmp if not signed

les operations :
	add (a b): ajout "b" à "a"
	sup (a b): supprime "b" à "a"
	adc (a b): ajout "b" et "CF" à "a"
	adc (a b): ajout "b" et "CF" à "a"
	mul ("reg"): (sign) multiplie "rax" à "reg"
	imul ("reg"):(unsign) multiplie "rax" à "reg"
	div ("reg"): (sign) divise "rax" avec "reg" (rdx doit etre a 0) rax contient le modulo de l'operation
	idiv ("reg"): (unsign) divise "rax" avec "reg" (rdx doit etre a 0)
	inc ("reg"): ajoute 1 à "reg"
	dec ("reg"): enleve 1 à "reg"

>>> ARGC ARGV
	les agrs sont stockés dans la pile au moment de l'execution du programme
	le premier (en haut) est argc (int)
	le second est le path
	les troisieme est l'argv[1] de argv
