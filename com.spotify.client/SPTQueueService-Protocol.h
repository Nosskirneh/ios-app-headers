//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTService-Protocol.h"

@class SPTNowPlayingEntityDecorationController, UIViewController;
@protocol SPTNowPlayingModeResolver, SPTQueueInteractor, SPTQueueLogger, SPTQueuePlaybackDelegateRegistry, SPTQueueViewControllerDelegate;

@protocol SPTQueueService <SPTService>
- (id <SPTQueueLogger>)provideQueueLogger;
- (id <SPTQueuePlaybackDelegateRegistry>)provideQueuePlaybackDelegateRegistry;
- (id <SPTQueueInteractor>)provideQueueInteractor;
- (struct UIViewController *)provideQueueViewControllerWithDelegate:(id <SPTQueueViewControllerDelegate>)arg1 modeResolver:(id <SPTNowPlayingModeResolver>)arg2 navigationBarViewControllerV2:(UIViewController *)arg3 queueInteractor:(id <SPTQueueInteractor>)arg4 entityDecorationController:(SPTNowPlayingEntityDecorationController *)arg5;
@end

