//cr
creation of a single linked list
//here avail point s to a sin4572gly linked list which  contain free nodes only. PTR simply point a newly created node

1. If Avail = Null             //then write overflow & Return.
2. Set PTR:= Avail & 
   Set Avail := Link[Avail]    //Link[avail] means to say = Avail--> Link
3. Read data into info[PTR] & 
   Set Link[PTR] := Null &
   Set Header := PTR & 
   Set last := PTR
4. Repeat  step 5 while ch=1
5.  If Avail := Null          //then write node creation not possible and retrum.
    Set PTR := Avail &
	Set AVAIL := Link[Avail]
	Read data into Info[PTR]
	Set Link[LAST]:= PTRSet Last := PTR 
    //Again ask choice to start it again it in ch
6.  STOP

// Insertion at first 
1. If Avail = NUll then write 
   Node creation not possible & Then return 
2. Set PTR := Avail & 
   Set Avail := Link[Avail]
3. Read data into INFO[PTR]
4. Set Link[PTR] := Header & 
   Set Header := PTR 
   If Last = Null then
   Set Last := PTR
5. STOP
