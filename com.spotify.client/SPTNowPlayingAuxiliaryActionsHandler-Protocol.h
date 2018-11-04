//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIButton, UIView, UIViewController;

@protocol SPTNowPlayingAuxiliaryActionsHandler <NSObject>
@property(readonly, nonatomic) _Bool isCurrentTrackBanned;
- (void)goToNowPlayingView:(UIButton *)arg1;
- (void)goToQueue:(UIButton *)arg1;
- (void)showEntityPage:(UIButton *)arg1;
- (void)presentContextMenuInViewController:(UIViewController *)arg1 sender:(UIButton *)arg2;
- (void)minimizeScrollingNowPlayingAnimated:(_Bool)arg1;
- (void)minimizePlayingView:(UIButton *)arg1;
- (void)presentShareMenu:(UIButton *)arg1;
- (void)presentConnectDevicePicker:(id)arg1;
- (void)presentSpeedControlMenuFromView:(UIView *)arg1 inViewController:(UIViewController *)arg2;
- (void)toggleBanStateFromViewController:(UIViewController *)arg1 andActionControl:(UIButton *)arg2;
- (void)toggleCollectionStateFromViewController:(UIViewController *)arg1 andActionControl:(UIButton *)arg2;
- (void)removeObserver:(id <SPTNowPlayingAuxiliaryActionsHandlerObserver>)arg1;
- (void)addObserver:(id <SPTNowPlayingAuxiliaryActionsHandlerObserver>)arg1;
@end
