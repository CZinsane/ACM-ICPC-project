const
  tt:array[1..8,1..2]of longint=((1,0),(1,1),(-1,0),(-1,1),(0,1),(1,-1),(0,-1),(-1,-1));
var
  i,j,k,l,m,n,x,y,Ans:longint;
  map:array[1..100,1..100]of char;
  v:array[0..101,0..101]of boolean;
  q:array[0..10000,1..2]of longint;
procedure bfs(x,y:longint);
  var
    i,j,l,r:longint;
  begin
    l:=0;r:=1;q[1][1]:=x;q[1][2]:=y;
    while l<r do begin
      inc(l);
      for i:=1to 8do begin
        if (not v[q[l][1]+tt[i][1]][q[l][2]+tt[i][2]])and(map[q[l][1]+tt[i][1]][q[l][2]+tt[i][2]]='W')
           then begin
             v[q[l][1]+tt[i][1]][q[l][2]+tt[i][2]]:=true;
             inc(r);
             q[r][1]:=q[l][1]+tt[i][1];q[r][2]:=q[l][2]+tt[i][2];
           end;
      end;
    end;
  end;
begin
  readln(n,m);Ans:=0;
  for i:=1to n do begin
    for j:=1to m do begin
      read(map[i][j]);
    end;
    readln;
  end;
  for i:=0to n+1 do begin
    v[i][0]:=true;v[i][m+1]:=true;
  end;
  for i:=0to m+1do begin
    v[0][i]:=true;v[n+1][i]:=true;
  end;
  for i:=1to n do begin
    for j:=1to m do begin
      if (not v[i][j])and(map[i][j]='W')
         then begin
           inc(Ans);
           bfs(i,j);
         end;
    end;
  end;
  writeln(Ans);
end.