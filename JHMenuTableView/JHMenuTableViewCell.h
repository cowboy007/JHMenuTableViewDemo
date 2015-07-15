//
//  JHMenuTableViewCell.h
//  JHMenuTableViewCell
//
//  Created by Jiahai on 15/3/27.
//  Copyright (c) 2015年 Jiahai. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JHMenuAction.h"
@class JHMenuActionLeftView;
@class JHMenuActionRightView;
/**
 *  JHMenuTableViewCellState
 */
typedef NS_ENUM(NSInteger, JHMenuTableViewCellState){
    /**
     *  正常状态
     */
    JHMenuTableViewCellState_Common         = 0,
    /**
     *  正在拨动，显示LeftActionView
     */
    JHMenuTableViewCellState_TogglingLeft,
    /**
     *  LeftActionView展示状态
     */
    JHMenuTableViewCellState_ToggledLeft,
    /**
     *  正在拨动，显示RightActionView
     */
    JHMenuTableViewCellState_TogglingRight,
    /**
     *  RightActionView展示状态
     */
    JHMenuTableViewCellState_ToggledRight,
    
    JHMenuTableViewCellState_All_TogglingLeft,
    JHMenuTableViewCellState_All_ToggledLeft,
    JHMenuTableViewCellState_All_TogglingRight,
    JHMenuTableViewCellState_All_ToggledRight
};


@interface JHMenuTableViewCell : UITableViewCell <JHMenuActionViewDelegate,UIGestureRecognizerDelegate>

@property (nonatomic, assign)   JHMenuTableViewCellState    menuState;

@property (nonatomic, strong)   UIView                      *customView;

@property (nonatomic, strong)   NSArray                     *leftActions;
@property (nonatomic, strong)   JHMenuActionLeftView        *leftActionsView;

@property (nonatomic, strong)   NSArray                     *rightActions;
@property (nonatomic, strong)   JHMenuActionRightView       *rightActionsView;



@property (nonatomic, assign)   CGFloat                     deltaX;

- (void)swipeBeganWithDeltaX:(CGFloat)deltaX;

- (void)swipeEndWithDeltaX:(CGFloat)deltaX;
@end
