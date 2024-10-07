def arrange_strings(text):
  t=text.split()
  s_t=sorted(t,key=len)
  txt= ' '.join(s_t)
  return txt.lower()

t1= arrange_strings("This is a cool sentence")
print(t1)
