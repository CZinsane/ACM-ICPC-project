var
  i,j,n,Ans:longint;
  a,b:array[0..20]of longint;
  ch:char;
begin
  while true do begin
    read(ch);
    if ch=' '
       then break
       else begin
         inc(a[0]);val(ch,a[a[0]]);
       end;
  end;
  while not eof do begin
    read(ch);
    if ch=' '
       then break
       else begin
         if (ch>='0')and(ch<='9')
            then begin
              inc(b[0]);val(ch,b[b[0]]);
            end
            else break;
       end;
  end;
  for i:=1to a[0]do
    for j:=1to b[0]do inc(Ans,a[i]*b[j]);
  writeln(Ans);
end.