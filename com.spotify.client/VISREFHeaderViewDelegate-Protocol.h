//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class VISREFHeaderView;

@protocol VISREFHeaderViewDelegate <NSObject>
- (double)minimumHeight;
- (void)headerViewViewHierarchyDidChange:(VISREFHeaderView *)arg1;
- (void)headerView:(VISREFHeaderView *)arg1 headerViewVisibleAreaChanged:(double)arg2;
- (void)headerView:(VISREFHeaderView *)arg1 foregroundViewVisibleAreaChanged:(double)arg2;
- (void)headerView:(VISREFHeaderView *)arg1 backgroundViewVisibleAreaChanged:(double)arg2;
- (void)headerView:(VISREFHeaderView *)arg1 contentViewVisibleAreaChanged:(double)arg2;
- (void)headerView:(VISREFHeaderView *)arg1 topAccessoryViewVisibleAreaChanged:(double)arg2;
- (void)headerView:(VISREFHeaderView *)arg1 heightDidChangeToTotalHeaderHeight:(double)arg2 safeAreaTopInset:(double)arg3 contentViewHeight:(double)arg4 topAccessoryViewHeight:(double)arg5;
@end

