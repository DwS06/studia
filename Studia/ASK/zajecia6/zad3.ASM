clo
mov al,48
cmp al,47
js loop
jns notloop
loop:
inc al
cmp al,47
js loop

notloop:
end