import tkinter
window = tkinter.Tk()


def save(self):
    contents = self.textbox.get(1.0,"end-1c") #store the contents of the text widget in a str
    try:                                       #this try/except block checks to
        with open(self.f, 'w') as outputFile:  #see if the str containing the output
            outputFile.write(contents)         #file (self.f) exists, and we can write to it,
    except AttributeError:                     #and if it doesn't,
        self.save_as()                         #call save_as

def save_as(self):
    contents = self.textbox.get(1.0,"end-1c")
    self.f = tkFileDialog.asksaveasfilename(   #this will make the file path a string
        defaultextension=".z",                 #so it's easier to check if it exists
        filetypes = (("ztext file", "*.z"),    #in the save function
                     ("zytext", "*.zy")))
    with open(self.f, 'w') as outputFile:
        outputFile.write(contents)
def custName():
    cusName = " "
    firstName = nameEntry.get()

    try:
        cusName = firstName
        lvl.configure(text = cusName)
    except:
        lbl.configure(text = "Invalid")

lbl = tkinter.Label(window, text = "Customer Name")
lbl.grid(row = 0, column = 0)
nameEntry = tkinter.Entry(window)
nameEntry.grid(row = 1, column = 0)

lbl = tkinter.Label(window, text = "Contact Info")
lbl.grid(row = 0, column = 1)
contactEntry = tkinter.Entry(window)
contactEntry.grid(row = 1, column = 1)

lbl = tkinter.Label(window, text = "Address")
lbl.grid(row = 0, column = 2)
addressEntry = tkinter.Entry(window)
addressEntry.grid(row = 1, column = 2)

lbl = tkinter.Label(window, text = "Priority No.")
lbl.grid(row = 0, column = 3)
priorityEntry = tkinter.Entry(window)
priorityEntry.grid(row = 1, column = 3)

lbl = tkinter.Label(window, text = "Amount Due")
lbl.grid(row = 0, column = 4)
priorityEntry = tkinter.Entry(window)
priorityEntry.grid(row = 1, column = 4)

lbl = tkinter.Label(window, text = "Current Credit")
lbl.grid(row = 0, column = 5)
priorityEntry = tkinter.Entry(window)
priorityEntry.grid(row = 1, column = 5)


btn = tkinter.Button(window, text = "Save", command = save(custName))
btn.grid(row = 3, column = 2)


btn2 = tkinter.Button(window, text = "Cancel")
btn2.grid(row = 3, column = 4)

window.mainloop()
