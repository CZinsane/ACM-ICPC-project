var
  i,j,k,l,m,n,x,y:longint;
  a,b:array[1..26]of char;
  st:string;
begin
  for i:=1to 26do read(a[i]);readln;
  for i:=1to 26do b[i]:=chr(ord(a[i])-32);
  readln(st);
  n:=length(st);
  for i:=1to n do begin
    if (ord(st[i])>=97)and(ord(st[i])<=122)
       then begin
         st[i]:=a[ord(st[i])-96];
       end;
    if (ord(st[i])>=65)and(ord(st[i])<=90)
       then begin
         st[i]:=b[ord(st[i])-64];
       end;
  end;
  writeln(st);
end.