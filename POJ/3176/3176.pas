var
  i,j,k,l,m,n:longint;
  f:array[1..350,0..350]of longint;
function max(x,y:longint):longint;
  begin
    if x>y
       then exit(x)
       else exit(y);
  end;
begin
  readln(n);
  for i:=1to n do begin
    for j:=1to i do begin
      read(f[i][j]);
    end;
    readln;
  end;
  for i:=n-1 downto 1do begin
    for j:=1to n do begin
      f[i][j]:=max(f[i+1][j],f[i+1][j+1])+f[i][j];
    end;
  end;
  writeln(f[1][1]);
end.