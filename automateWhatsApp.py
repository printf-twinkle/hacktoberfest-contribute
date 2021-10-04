import pyautogui
import webbrowser as wb
import time

chrome_path = '/usr/bin/google-chrome %s'
wb.get(chrome_path).open("web.whatsapp.com")

time.sleep(50)

for i in range(1500):
    pyautogui.typewrite('''This is an automated message''')
    pyautogui.press("enter") 
