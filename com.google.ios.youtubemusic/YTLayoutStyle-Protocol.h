//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol YTLayoutStyle <NSObject>
@property(nonatomic) double NGWatchMiniBarAppBottomOffset;
@property(nonatomic) double NGWatchMiniBarInsetBottom;
@property(readonly, nonatomic) long long inlineSignInStyle;
@property(readonly, nonatomic) _Bool restrictPivotBarTabWidths;
@property(readonly, nonatomic) long long navigationBarTitleTextAlignment;
@property(readonly, nonatomic) double pivotBarHeight;
@property(readonly, nonatomic) double navigationBarHeight;
@property(readonly, nonatomic) long long innerTubeCollectionViewLayout;
@property(readonly, nonatomic) long long innerTubeCollectionViewFormat;
@property(readonly, nonatomic) long long tabStyle;
- (long long)maximumTabCountForStyleContext:(NSString *)arg1;
- (long long)tabStyleForStyleContext:(NSString *)arg1;
- (struct UIEdgeInsets)innerTubeCollectionViewContentInsetForStyleContext:(NSString *)arg1;
@end

