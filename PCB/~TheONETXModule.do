#
# DO file created by ELECTRA Demo version V5.10 made 08/30/2018 at 20:45:57
# 
bus diagonal
rule pcb (via_at_smd on (fit on))
proute
fanout 5
proute
route 10
clean 5
route 10 16
clean 5
filter 9
recorner diagonal
status_file
