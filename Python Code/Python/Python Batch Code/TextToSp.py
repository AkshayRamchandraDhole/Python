from gtts import gTTS
import os
mytext='Welcome'
lan='en'
myobj=gTTS(text=mytext,lang=lan,slow=false)
myobj.save("wel.mp3")
os.system("mpg321 wel.mp3")
