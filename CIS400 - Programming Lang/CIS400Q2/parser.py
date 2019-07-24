import re
import string
import pandas as pd 


def parse(user_input,start_symbol,parsingTable):
	#appending dollar to end of input
	user_input = user_input + "$"
	stack = []
	stack.append("$")
	stack.append(start_symbol)
	input_len = len(user_input)
	index = 0
	while len(stack) > 0:

		#element at top of stack
		top = stack[len(stack)-1]
		print ("Top =>",top)
		#current input
		current_input = user_input[index]
		print ("Current_Input => ",current_input)

		if top == current_input:
			stack.pop()
			index = index + 1	
		else:

			#finding value for key in table
			key = top , current_input
			print (key)
			#top of stack terminal => not accepted
			if key not in parsingTable:
				flag = 1		
				break

			value = parsingTable[key]
			if value !='@':
				value = value[::-1]
				value = list(value)
	
				#poping top of stack
				stack.pop()

				#push value chars to stack
				for element in value:
					stack.append(element)
			else:
				stack.pop()		

	if flag == 0:
            
		print ("String accepted!")
	else:
		print ("String not accepted!")	


