program kiemtra;
var
    a, b, c, maxs: integer;
begin
    readln(a, b, c);
    maxs := a + b;
    if a + c > maxs then
        maxs := a + c;
    if b + c > maxs then
        maxs := b + c;
    writeln(maxs);
end.
