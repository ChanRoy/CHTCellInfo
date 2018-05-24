//
//  CHTCellInfo.h
//  CHTCellInfoDemo
//
//  Created by Roy on 2018/5/24.
//  Copyright © 2018年 Roy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/**
 *  存放 cell info 的类，解耦有多个自定义cell的情况
 */
@interface CHTCellInfo : NSObject

@property (nonatomic, assign) SEL creatMethod; ///< 获取创建cell的方法

@property (nonatomic, assign) SEL getHeightMethod; ///< 获取创建cell高度方法

@property (nonatomic, assign) SEL didSelectedMethod; ///< cell的点击事件SEL

@property (nonatomic, assign) CGFloat cellDefaultHeight; ///< cell的默认高度


/**
 *  初始化方法
 *
 *  @param creatMethod      创建cell的SEL
 *  @param getHeightMethod  获取cell高度的SEL
 *  @param didSelectedMehod 选中了cell的SEL
 *  @param defaultHeight    获取cell默认高度的SEL
 *
 *  @return CHTCellInfo 实例
 */
- (instancetype)initWithCreatMethod:(SEL)creatMethod
                     getHeightMehod:(SEL)getHeightMethod
                   didSelectedMehod:(SEL)didSelectedMehod
                      defaultHeight:(CGFloat)defaultHeight;

@end
