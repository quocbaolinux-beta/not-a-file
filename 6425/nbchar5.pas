program DemChuCai;

var
  aChar, bChar: char;
  startCode, endCode, count: integer;

begin
  readln(aChar);
  readln(bChar);
  if (aChar >= 'a') and (aChar <= 'z') and (bChar >= 'a') and (bChar <= 'z') then
  begin
    if aChar > bChar then
    begin
      writeln(0);
    end
    else if aChar = bChar then
    begin
      writeln(0);
    end
    else
    begin
      startCode := ord(aChar) + 1;
      endCode := ord(bChar);
      count := endCode - startCode;
      writeln(count);
    end;
  end;

  readln;
end.