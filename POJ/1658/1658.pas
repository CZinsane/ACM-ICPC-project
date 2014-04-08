program a005;   
  var  
    a,b,c,d,e,f:longint;   
    i:integer;   
  begin  
    readln(f);   
    for i:=1to f do  
    begin  
      readln(a,b,c,d);   
      if a-b=c-d   
         then e:=c+d-b   
         else if a/b=c/d   
              then begin  
                     e:=trunc(d*b/a);   
  
                   end;   
       writeln(a,' ',b,' ',c,' ',d,' ',e);   
       end;   
  end.