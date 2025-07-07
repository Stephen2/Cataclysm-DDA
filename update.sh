git checkout master
git pull upstream master
git pull upstream master
git push origin master
git checkout sp-make
git rebase master
./sounds_pre.sh
./tiles_pre.sh
./make.sh
./sounds_post.sh
./tiles_post.sh
