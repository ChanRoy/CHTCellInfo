//
//  CHTCellInfo.m
//  CHTCellInfoDemo
//
//  Created by Roy on 2018/5/24.
//  Copyright © 2018年 Roy. All rights reserved.
//

#import "CHTCellInfo.h"

@implementation CHTCellInfo

- (instancetype)initWithCreatMethod:(SEL)creatMethod
                     getHeightMehod:(SEL)getHeightMethod
                   didSelectedMehod:(SEL)didSelectedMehod
                      defaultHeight:(CGFloat)defaultHeight
{
    self = [super init];
    if (self) {
        
        _creatMethod = creatMethod;
        _getHeightMethod = getHeightMethod;
        _didSelectedMethod = didSelectedMehod;
        _cellDefaultHeight = defaultHeight;
    }
    return self;
}

@end
