@echo off
setlocal enabledelayedexpansion
set "string=abcdefghijklmnopqrstuvwxyz"

set /a x=%random% %% 26 
set no1=%result%!string:~%x%,1!
set /a x=%random% %% 26 
set no2=%result%!string:~%x%,1!
set /a x=%random% %% 26 
set no3=%result%!string:~%x%,1!
set /a x=%random% %% 26 
set no4=%result%!string:~%x%,1!
set /a x=%random% %% 26 
set no5=%result%!string:~%x%,1!
set /a x=%random% %% 26 
set no6=%result%!string:~%x%,1!

set result=CKPT_%no1%%no2%%no3%%no4%%no5%%no6%
echo %result%

git status
git add .
git commit -m "%result%"
git push
git status

echo "Successfully pushed to remote repository, with commit message: %result%"