from tkinter import *
from tkinter import messagebox


def reset_entry():
    
    age_tf.delete(0, 'end')
    height_tf.delete(0, 'end')
    weight_tf.delete(0, 'end')


def calculate_bmi():
     kg = int(weight_tf.get())
     m = int(height_tf.get())/100
     bmi = kg/(m*m)
     bmi = round(bmi, 1)
     bmi_index(bmi)


def bmi_index(bmi):

    if bmi < 18.5:
        messagebox.showinfo('bmi-pythonguides', f'BMI = {bmi} ypu are Underweight')
    elif (bmi > 18.5) and (bmi < 24.9):
        messagebox.showinfo('bmi-pythonguides',
                            f'BMI = {bmi} you are healthy.')
    elif (bmi > 24.9) and (bmi < 29.9):
        messagebox.showinfo('bmi-pythonguides', f'BMI = {bmi} your are Over weight')
    elif (bmi <= 34.9):
        messagebox.showinfo('bmi-pythonguides',
                            f'BMI = {bmi} you are severely over weight.')

    elif (bmi <= 39.9):
        messagebox.showinfo('bmi-pythonguides',
                            f'BMI = {bmi} you are are obese.')

    else:
        messagebox.showerror('bmi-pythonguides', 'something went wrong!')


ws = Tk()
ws.title('PythonGuides')
ws.geometry('400x300')
ws.config(bg='#686e70')

var = IntVar()

frame = Frame(
    ws,
    padx=10,
    pady=10
)
frame.pack(expand=True)

age_lb = Label(
    frame,
    text="Enter Age (2 - 120)"
)
age_lb.grid(row=1, column=1)

age_tf = Entry(
    frame,
)
age_tf.grid(row=1, column=2, pady=5)

gen_lb = Label(
    frame,
    text='Select Gender'
)
gen_lb.grid(row=2, column=1)

frame2 = Frame(
    frame
)
frame2.grid(row=2, column=2, pady=5)

male_rb = Radiobutton(
    frame2,
    text='Male',
    variable=var,
    value=1
)
male_rb.pack(side=LEFT)