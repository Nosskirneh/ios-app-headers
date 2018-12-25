//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class QTMButton, YTMNowPlayingViewController;

@protocol YTMNowPlayingViewControllerDelegate <NSObject>
- (void)nowPlayingViewControllerDidCollapseExpandedViews:(YTMNowPlayingViewController *)arg1;
- (void)nowPlayingViewController:(YTMNowPlayingViewController *)arg1 didTapOverflowMenuButton:(QTMButton *)arg2;
- (void)nowPlayingViewControllerDidChangeExpansionCoefficient:(YTMNowPlayingViewController *)arg1;
- (void)nowPlayingViewController:(YTMNowPlayingViewController *)arg1 didChangeExpansionCoefficient:(double)arg2 animated:(_Bool)arg3;
- (void)nowPlayingViewControllerWillChangeExpansionCoefficient:(YTMNowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerDidTapPrev:(YTMNowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerDidTapNext:(YTMNowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerDidTapPlay:(YTMNowPlayingViewController *)arg1;
@end

