mov al,0
push al
mov al,1
loop:
push al 
add al,bl
pop bl
push al
jno loop
end