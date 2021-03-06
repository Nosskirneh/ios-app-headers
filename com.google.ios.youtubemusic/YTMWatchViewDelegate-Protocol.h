//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;
@protocol YTMWatchViewProtocol;

@protocol YTMWatchViewDelegate <NSObject>
- (void)watchViewWillCollapse:(UIView<YTMWatchViewProtocol> *)arg1;
- (void)watchViewDidRetry:(UIView<YTMWatchViewProtocol> *)arg1;
- (void)watchViewDidCollapse:(UIView<YTMWatchViewProtocol> *)arg1;
- (void)watchViewDidExpand:(UIView<YTMWatchViewProtocol> *)arg1;
- (void)watchViewDidTapCloseButton:(UIView<YTMWatchViewProtocol> *)arg1;
- (void)watchViewDidDismissPlayer:(UIView<YTMWatchViewProtocol> *)arg1;
- (void)watchViewWillDismissPlayer:(UIView<YTMWatchViewProtocol> *)arg1;
- (void)watchViewDidTapPlayButton:(UIView<YTMWatchViewProtocol> *)arg1;
- (void)watchView:(UIView<YTMWatchViewProtocol> *)arg1 expansionCoefficientDidChange:(double)arg2;
- (void)watchViewDidEndTransitioning:(UIView<YTMWatchViewProtocol> *)arg1;
- (void)watchViewWillBeginTransitioning:(UIView<YTMWatchViewProtocol> *)arg1;
@end

