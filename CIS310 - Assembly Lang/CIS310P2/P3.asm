; By: Jason LU
; CIS 310 Program #3
; 3 / 7 / 2018
include irvine32.inc

.data

; Grading Message
msg BYTE "----GRADE SCALE----", 0dh, 0ah, 0
newline BYTE ' ', 10, 0, 0
NumGrade BYTE "ENTER GRADE SCORE: ", 0
GradeScore BYTE "SCORE: ", 0
CharGrade BYTE "GRADE: ", 0
Score BYTE ?

; Message for character grade
msgA BYTE "A", 10, 0
msgB BYTE "B", 10, 0
msgC BYTE "C", 10, 0
msgD BYTE "D", 10, 0
msgE BYTE "E", 10, 0

TRUE = 1
FALSE = 0

.code
main proc

mov eax, 0					; set the eax register to 0
mov edx, OFFSET msg			; move the message to edx register
call writestring			; diplay the message
mov edx, OFFSET NumGrade	; move the integer score message to edx register
call writestring			; display the message
call readint				; read the value

mov edx, OFFSET GradeScore	; move the character score message to edx register
call writestring			; diplay the message
call writeint				; read the input

mov edx, OFFSET newline		; new line
call writestring

;Using a else if statement
; If the score entered is less then 60
; display the integer score is character score of E
mov Score, FALSE
.IF eax < 60
	mov Score, true
	mov edx, OFFSET CharGrade
	call writestring
	mov edx, OFFSET msgE
	call writestring

; If the score entered is less greater or equal to 60 and less than 70
; display the integer score is character score of D
	.ELSEIF(eax >= 60) && (eax < 70)
	mov Score, TRUE
	mov edx, OFFSET CharGrade
	call writestring
	mov edx, OFFSET msgD
	call writestring

; If the score entered is less greater or equal to 70 and less than 80
; display the integer score is character score of C
	.ELSEIF(eax >= 70) && (eax < 80)
	mov Score, TRUE
	mov edx, OFFSET CharGrade
	call writestring
	mov edx, OFFSET msgC
	call writestring

; If the score entered is less greater or equal to 80 and less than 90
; display the integer score is character score of B
	.ELSEIF(eax >= 80) && (eax < 90)
	mov Score, TRUE
	mov edx, OFFSET CharGrade
	call writestring
	mov edx, OFFSET msgB
	call writestring

; If the score entered is less greater or equal to 90
; display the integer score is character score of A
	.ELSEIF(eax >= 90)
	mov Score, TRUE
	mov edx, OFFSET CharGrade
	call writestring
	mov edx, OFFSET msgA
	call writestring

; end the else and if statement
	.ENDIF

; new line
	mov edx, OFFSET newline
	call writestring

;exist the program
exit
main endp
end main