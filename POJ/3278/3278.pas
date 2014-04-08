var
  i,j,k,l,m,n,x,y:longint;
  q,f:array[0..500000]of longint;
  v:array[0..500000]of boolean;
begin
  readln(n,m);
  q[1]:=n;v[n]:=true;
  x:=0;y:=1;
  while x<y do begin
    inc(x);
    if v[m]
       then begin
         writeln(f[m]);
         break;
       end;
    if q[x]>0
       then begin
         if not v[q[x]-1]
            then begin
              inc(y);q[y]:=q[x]-1;v[q[y]]:=true;f[q[y]]:=f[q[x]]+1;
            end;
       end;
    if q[x]<500000
       then begin
         if not v[q[x]+1]
            then begin
              inc(y);q[y]:=q[x]+1;v[q[y]]:=true;f[q[y]]:=f[q[x]]+1;
            end;
       end;
    if q[x]<=250000
       then begin
         if not v[q[x]*2]
            then begin
              inc(y);q[y]:=q[x]*2;v[q[y]]:=true;f[q[y]]:=f[q[x]]+1;
            end;
       end;
  end;
end.
