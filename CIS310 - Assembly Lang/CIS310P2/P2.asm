; By Jason Lu
;CIS310 Program 2
INCLUDE Irvine32.inc

.data
list DWORD 8, 19, 14, 27, 6, 20, 18, 12, 23, 27, 31, 22, 17, 26, 7
diff DWORD 15 DUP(? )
square DWORD 15 DUP(? )
mean DWORD ?
variance DWORD ?

newline BYTE ' ', 13, 10, 0
meanHeader BYTE "MEAN: ", 0
varHeader BYTE "VARIANCE: ", 0

.code
main proc
mov esi, offset list		; 1: address of the array
mov ecx, lengthof list		; 2: initialize loop counter
mov bx, lengthof diff
mov eax, 0					; 4:set eax register to 0


L1:							; 5: beginning of the loop
	add eax, [esi]			; 6: add an integer into the eax register
	add esi, TYPE list		; 7: pointer to the next element
	mov diff, eax			; 8: move the value in eax register to diff
	loop L1					; 9: loop end

	mov eax, diff			; 10: mov diff into eax reg
	mov edx, 0				; 11: set edx reg to 0
	div bx					; 12: div the register by the size of the array
	mov mean, eax			; 13: move value in eax register to the mean
	mov edx, offset meanHeader
	call writeString		; print the label
	mov edx, offset newline	; new line
	call writeint			; print the integer
	call writestring

	mov eax, 0				; 14: reset the register to 0
	mov edi, offset list	; 15: EDI = address of intarray
	mov ecx, lengthof diff	; 16: initialize loop counter

	L2 :					; 1: beginning of the loop for variance
	mov eax, [edi]			; 2: move the array into eax register
	sub eax, mean			; 3: subtrace mean from the eax register
	mul eax					; 4: multiply itself
	add square, eax			; 5: add the value in eax register to the sqaure value
	add edi, TYPE list		; 6: point to the next element
	loop L2					; loop end

	mov edx, 0				; 7: reset the eax to 0
	mov eax, square			; 8: move the square value into the eax register
	div bx				; 9: divid the size of the array
	mov variance, eax		; 10: move the variance value to eax register
	mov edx, offset varHeader
	call writestring		; print the header
	call writeint			; 11: display the variance value
	mov edx, offset newline
	call writestring

	exit
	main endp
	end main				; end the program
