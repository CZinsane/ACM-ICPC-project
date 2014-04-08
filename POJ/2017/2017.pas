program a2017;
  var
    a:array[1..10000]of longint;
    n:array[0..10000]of longint;
    c,i,g:longint;
  begin
    repeat
      readln(c);
      if c>=0
         then begin
           for i:=1to c do begin
             readln(a[i],n[i])
           end;
           n[0]:=0;
           g:=0;
           for i:=1to c do begin
             g:=g+(n[i]-n[i-1])*a[i];
           end;
           writeln(g,' miles');
         end;
    until c<0;
  end.
