program a1799;
  var
    a,i,n:integer;
    x,r,j:real;
  begin
    readln(a);
    for i:=1to a do begin
      readln(x,n);
      j:=abs(cos(((n-2)/(2*n))*pi));
      r:=x*j/(1+j);
      writeln('Scenario #',i,':');
      writeln(r:0:3);
      writeln;
    end;
  end.