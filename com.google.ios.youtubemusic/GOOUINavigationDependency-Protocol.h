//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GOOUINavigationController, UIView;

@protocol GOOUINavigationDependency <NSObject>

@optional
@property(retain, nonatomic) UIView *headerView;
@property(retain, nonatomic) GOOUINavigationController *goo_navigationController;
- (void)setBottomShadowOffset:(double)arg1;
- (void)setBottomShadowHidden:(_Bool)arg1 animated:(_Bool)arg2;
@end

