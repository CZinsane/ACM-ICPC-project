var
  i,j,m,n,x:longint;
begin
  readln(n);
  m:=round(sqrt(2*n));
  for i:=1to m do begin
    if odd(i)
       then begin
         if n mod i=0
            then inc(x);
       end
       else begin
         if (n mod (i div 2)=0)and(n mod i<>0)
            then inc(x);
       end;
  end;
  writeln(x);
end.
