//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class YTMWatchViewController;

@protocol YTMWatchViewControllerObserver <NSObject>
- (void)watchViewDidDismissPlayer:(YTMWatchViewController *)arg1;
- (void)watchViewControllerDidCollapse:(YTMWatchViewController *)arg1;
- (void)watchViewControllerDidExpand:(YTMWatchViewController *)arg1;
- (void)watchViewControllerDidTransitionToFullscreen:(YTMWatchViewController *)arg1;
- (void)watchViewController:(YTMWatchViewController *)arg1 expansionCoefficientDidChange:(double)arg2;
@end

