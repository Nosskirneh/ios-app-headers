//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;

@protocol SPTQueueAnimation <NSObject>
@property(readonly, nonatomic) UIView *queueTableView;
@property(readonly, nonatomic) UIView *queueNavigationBarButtonsView;
@property(readonly, nonatomic) UIView *queueNavigationBarView;
@property(readonly, nonatomic) struct CGSize nowPlayingCoverArtSize;
@property(readonly, nonatomic) UIView *nowPlayingCoverArtView;
- (void)animationDidFinish;
- (void)animationDidStart;
@end

