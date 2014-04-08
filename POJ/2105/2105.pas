program a2015;
  var
    a,b,c,d:string[8];
    e,f,g,h,w,x,y,z:longint;
    i,j,n:longint;
  begin
    readln(n);
    for i:=1to n do begin
      readln(a,b,c,d);
      e:=0;
      f:=0;
      g:=0;
      h:=0;
      for j:=8downto 1do begin
        val(a[9-j],w);
        val(b[9-j],x);
        val(c[9-j],y);
        val(d[9-j],z);
        e:=e+round(w*exp(j*ln(2)));
        f:=f+round(x*exp(j*ln(2)));
        g:=g+round(y*exp(j*ln(2)));
        h:=h+round(z*exp(j*ln(2)));
      end;
      writeln(round(e/2),'.',round(f/2),'.',round(g/2),'.',round(h/2));
    end;
  end.