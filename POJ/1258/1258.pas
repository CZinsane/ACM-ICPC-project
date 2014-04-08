var
  i,j,k,l,m,n,x,y,Ans:longint;
  e:array[1..100,1..100]of longint;
  v:array[1..100]of boolean;
  d:array[1..100]of longint;
function min(x,y:longint):longint;
  begin
    if x<y
       then exit(x)
       else exit(y);
  end;
begin
  while not eof do begin
  readln(n);Ans:=0;
  fillchar(e,sizeof(e),0);
  for i:=1to n do begin
    for j:=1to n do begin
      read(e[i][j]);
    end;
    readln;
  end;
  fillchar(v,sizeof(v),false);
  x:=1;v[1]:=true;
  for i:=1to n do d[i]:=e[1][i];
  while x<n do begin
    inc(x);
    y:=99999999;m:=0;
    for i:=1to n do begin
      if not v[i]
         then begin
           if y>d[i]
              then begin
                y:=d[i];m:=i;
              end;
         end;
    end;
    inc(Ans,y);
    v[m]:=true;
    for i:=1to n do begin
      d[i]:=min(e[m][i],d[i]);
    end;
  end;
  writeln(Ans);
  end;
end.