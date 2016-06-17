# PZQActionSheet
自定义ActionSheet，解决系统ActionSheet iOS7之后不能修改按钮颜色，字体等问题
自定义之后，标题，按钮的颜色，字体以及视图的宽度等都可以根据需求自己改动。


1.导入头文件 #import "PZQActionSheet.h"

2.如下

 PZQActionSheet *pzqActionSheet = [[PZQActionSheet alloc] initWithDelegate:self title:nil cancelButton:@"取消" otherTitle:title1,title2, title3, nil];
 pzqActionSheet.LastButtonColor = [UIColor redColor];
 [pzqActionSheet show];
