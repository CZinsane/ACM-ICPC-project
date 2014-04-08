var
  i,j,k,l,m,n,x,y,Ans:longint;
  opp:array[1..400]of longint;
  v:array[1..400]of boolean;
  e:array[1..400,1..400]of boolean;
function find(x:longint):boolean;
  var
    i:longint;
  begin
    for i:=n+1to n+m do begin
      if (e[x][i])and(not v[i])
         then begin
           v[i]:=true;
           if (opp[i]=0)or(find(opp[i]))
              then begin
                opp[i]:=x;
                exit(true);
              end;
         end;
    end;
    exit(false);
  end;
begin
  while not eof do begin
    fillchar(e,sizeof(e),false);
    fillchar(opp,sizeof(opp),0);
    Ans:=0;
    readln(n,m);
    for i:=1to n do begin
      read(x);
      for j:=1to x do begin
        read(y);
        e[i][y+n]:=true;e[y+n][i]:=true;
      end;
      readln;
    end;
    for i:=1to n do begin
      fillchar(v,sizeof(v),false);
      if find(i) then inc(Ans);
    end;
    writeln(Ans);
  end;
end.