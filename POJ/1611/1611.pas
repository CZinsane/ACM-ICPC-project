var
  father:array[0..30000]of longint;
  i,j,k,l,m,n,x,y:longint;
function getfather(x:longint):longint;
  begin
    if father[x]=x
       then exit(x)
       else getfather:=getfather(father[x]);
  end;
procedure judge(x,y:longint);
  begin
    if getfather(x)<>getfather(y)
       then father[getfather(x)]:=getfather(y);
  end;
begin
  while not eof do begin
    readln(n,m);
    if (n=0)and(m=0)
       then break;
    for j:=0to n do
      father[j]:=j;
    for i:=1to m do begin
      read(k,l);
      for j:=0to k-2 do begin
	read(x);
	if father[x]=x
	   then father[x]:=l
	   else judge(l,x);
      end;
    end;y:=1;
    for j:=1to n-1 do begin
      if getfather(j)=getfather(0)
	 then inc(y);
    end;
    writeln(y);
  end;
end.