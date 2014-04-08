var
  i,j,k,l,m,n,x,y:longint;
  st:string;
  f:array[1..26]of longint;
  v:array[1..26,1..288]of boolean;
begin
  for i:=1to 4 do begin
    readln(st);
    n:=length(st);
    for j:=1to n do begin
      if (ord(st[j])<=90)and(ord(st[j])>=65)
         then begin
           inc(f[ord(st[j])-64]);
         end;
    end;
  end;
  fillchar(v,sizeof(v),false);
  for i:=1to 26 do begin
    for j:=1to f[i]do begin
      v[i][j]:=true;
    end;
    if f[i]>x
       then x:=f[i];
  end;
  for i:=x downto 1do begin
    for j:=1to 26do begin
      if v[j][i]
         then write('*')
         else write(' ');
      if j=26
         then writeln
         else write(' ');
    end;
  end;
  for i:=1to 25do write(chr(64+i),' ');
  writeln('Z');
end.