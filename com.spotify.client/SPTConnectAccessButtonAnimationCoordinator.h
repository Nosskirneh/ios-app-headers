//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer, SPTTheme;
@protocol SPTConnectAccessButtonAnimationCoordinatorDelegate, SPTGaiaConnectAPI;

@interface SPTConnectAccessButtonAnimationCoordinator : NSObject
{
    id <SPTConnectAccessButtonAnimationCoordinatorDelegate> _delegate;
    SPTTheme *_theme;
    id <SPTGaiaConnectAPI> _connectManager;
    NSTimer *_animationStepTimer;
}

@property(retain, nonatomic) NSTimer *animationStepTimer; // @synthesize animationStepTimer=_animationStepTimer;
@property(readonly, nonatomic) id <SPTGaiaConnectAPI> connectManager; // @synthesize connectManager=_connectManager;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <SPTConnectAccessButtonAnimationCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)invalidateCurrentAnimation;
- (void)executeAfterDelay:(double)arg1 animation:(CDUnknownBlockType)arg2;
- (void)requestCompactAnimationAfterDelay:(double)arg1;
- (void)performNudge;
- (void)applicationStateDidChangeToActive:(_Bool)arg1;
- (void)buttonVisibilityDidChangeToVisible:(_Bool)arg1;
- (void)connectionStateDidChange:(long long)arg1;
- (id)initWithTheme:(id)arg1 connectManager:(id)arg2;

@end

