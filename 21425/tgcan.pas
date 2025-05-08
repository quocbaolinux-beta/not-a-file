program tgcan;
var
    x, y, z1, z2: longint;
    cv1, cv2: longint;
    valid1, valid2: boolean;
begin
    readln(x);
    readln(y);

    z1 := x;
    z2 := y; 

    cv1 := 2 * x + y;
    cv2 := 2 * y + x;
    valid1 := (x + y > x) and (x + x > y) and (y + x > x);
    valid2 := (x + y > y) and (y + y > x) and (x + y > y);

    if valid1 and valid2 then
    begin
        if cv1 > cv2 then writeln(z1)
        else writeln(z2);
    end
    else if valid1 then writeln(z1)
    else if valid2 then writeln(z2)
    else writeln(-1); 
end.
