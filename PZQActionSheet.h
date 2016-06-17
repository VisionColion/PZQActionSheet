//
//  PZQActionSheet.h
//  mayc
//
//  Created by Vision on 16/3/18.
//  Copyright © 2016年 Vision. All rights reserved.
//

#import <UIKit/UIKit.h>
@class PZQActionSheet;
@protocol MyActionSheetDelegate <NSObject>

@optional
- (void)myActionSheet:(PZQActionSheet *)actionSheet parentView:(UIView *)parentView subLabel:(UILabel *)subLabel index:(NSInteger)index;
@end


@interface PZQActionSheet : UIView <MyActionSheetDelegate>

// 文本的字体
@property (nonatomic,strong) UIFont *labelFont;
// 文本的字体颜色
@property (nonatomic,strong) UIColor *labelTextColor;
// 每个按钮的高度
@property (nonatomic,assign) CGFloat labelHeight;
// 标题字体大小
@property (nonatomic,strong) UIFont *titleFont;
// 标题颜色
@property (nonatomic,strong) UIColor *titleTextColor;
// 最后一个按钮颜色
@property (nonatomic,strong) UIColor *LastButtonColor;
// 与最后一个按钮的距离
@property (nonatomic,assign) CGFloat LastButtonDistans;
//视图宽度
@property (nonatomic,assign) CGFloat ViewWidth;


@property (nonatomic,strong) UIWindow *mywindow;
@property (nonatomic, strong) UIView *parentView;
@property (nonatomic, assign) id<MyActionSheetDelegate> delgate;
@property (nonatomic, assign) CGRect paretViewFrame;
@property (nonatomic, copy) NSString *titleName;

@property (nonatomic, strong) NSMutableArray *titleNameArr;

- (void)show;

- (instancetype)initWithDelegate:(id)delegate title:(NSString *)title cancelButton:(NSString *)cancelButton otherTitle:(NSString *)otherTitle, ... NS_REQUIRES_NIL_TERMINATION;



@end
