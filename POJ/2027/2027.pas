program a2027;
  var
    n,i,a,b:longint;
  begin
    readln(n);
    for i:=1to n do begin
      readln(a,b);
      if a<b
         then writeln('NO BRAINS')
         else writeln('MMM BRAINS');
    end;
  end.