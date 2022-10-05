# Git Learn

* ### add a file

  1. ` git add readme.txt`
  2. `git commit -m "message"`

* ### trace back

  1. ` git status `  //返回仓库实时状态

  2. `git diff test.txt `//查找被修改内容 

  3. `git log  `//读取log

  4. `git reset --hard HEAD^ / HEAD~3 / 1094a `//退回上一版本/往上3个版本/id为1094a...的版本

  5. `git reflog `//记录所有log，可查看未来版本的id

     > 退回版本会导致log也退回,但reflog不会退回
  
  6. ` git checkout -- test.txt `//可以丢掉工作区的修改，回到最近一次`git commit `  或`git add`的状态
  
     > 若已经`git add`还没`git commit`,想退回版本库，可使用方法7之后再使用方法6.    

  7. `git resetHEAD test.txt`//撤销暂存区的修改，重新放回工作区
  
  8. `git rm <filename> ` `git commit -m "message"`//删除版本库中的文件，若误删可用`git checkout`退回
  
* ### Remote Storage
  
    1.关联远程库：`git remote add <name> <网址>`
  
  ​	`git push -u <name> master`
  
    2.之后更新：`git push <name> master`
  
    3.查看远程库：`git remote -v`
  
    4.删除远程库：`git remote rm <name>` 
  
* ### branch

  > 分支是指向提交点的指针,HEAD是指向分支的指针

    1.创建并切换分支： `git checkout -b <name>`等价于

  ​     `git switch -c <name>`

  ​     `git branch <name>` `git checkout <name>`

    2.查看分支： `git branch`

    3.合并分支：`git merge <name>`

    4.删除分支：  `git branch -d <name>`

    5.切换分支：   `git switch <name>`

   

  #### 分支冲突：

  ​	分支合并是指在`当前分支`的基础上，把`被合并分支`里的修改加进来；但是可能会出现`当前分支`存在 `被合并分支`内没有的修改，此时需要把`当前分支`内容修改为与`被合并分支`内容一样方可合并。

  ​	禁用Fast forward merge：`git merge --no-ff <name>`
