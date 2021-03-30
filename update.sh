git checkout master
git pull
git pull
git checkout sp-make
git rebase master
./sounds_pre.sh
./tiles_pre.sh
./make.sh
./sounds_post.sh
./tiles_post.sh
