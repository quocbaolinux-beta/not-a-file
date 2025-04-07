program demuoc1;

n: integer;
function demuoc(n:integer):integer;
begin
    if n = 1 then
        demuoc := 1
    else if n mod 2 = 0 then
        demuoc := demuoc(n div 2) + 1
    else if n mod 3 = 0 then
        demuoc := demuoc(n div 3) + 1
    else if n mod 5 = 0 then
        demuoc := demuoc(n div 5) + 1
    else if n mod 7 = 0 then
        demuoc := demuoc(n div 7) + 1
    else
        demuoc := -1;
end;

begin
    readln(n);
    writeln(demuoc(n));
end;