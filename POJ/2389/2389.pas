var
  i,j,k,l,m,n,x,y:longint;
  a,b,t:array[0..200]of longint;
  f:array[1..200,0..200]of longint;
  ch:char;
begin
  while not eoln do begin
    read(ch);
    if (ch<='9')and(ch>='0')
       then begin
         inc(a[0]);
         val(ch,a[a[0]]);
       end;
  end;
  readln;
  for i:=1to a[0]do t[i]:=a[i];
  for i:=1to a[0]do a[a[0]-i+1]:=t[i];
  while not eoln do begin
    read(ch);
    if (ch<='9')and(ch>='0')
       then begin
         inc(b[0]);
         val(ch,b[b[0]]);
       end;
  end;
  for i:=1to b[0]do t[i]:=b[i];
  for i:=1to b[0]do b[b[0]-i+1]:=t[i];
  readln;
  for i:=1to a[0]do begin
    m:=0;f[i][0]:=i+b[0]+1;inc(b[0],2);
    for j:=1to b[0]do begin
      k:=(a[i]*b[j]+m)div 10;
      f[i][j+i-1]:=(a[i]*b[j]+m)mod 10;
      m:=k;
    end;
    while (f[i][f[i][0]]=0)and(f[i][0]>1)do dec(f[i][0]);
  end;
  for i:=1to a[0]do a[i]:=0;
  a[0]:=a[0]+b[0]+2;
  for i:=1to a[0]do begin
    m:=0;
    for j:=1to b[0]+1do begin
      k:=(a[i+j-1]+f[i][i+j-1]+m)div 10;
      a[i+j-1]:=(a[i+j-1]+f[i][i+j-1]+m)mod 10;
      m:=k;
    end;
  end;
  while (a[a[0]]=0)and(a[0]>1)do dec(a[0]);
  for i:=a[0]downto 1do begin
    write(a[i]);
  end;
  writeln;
end.
