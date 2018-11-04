//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTService.h"

@class SPTNowPlayingEntityDecorationController, UIViewController;

@protocol SPTQueueService <SPTService>
- (id <SPTQueueLogger>)provideQueueLogger;
- (id <SPTQueuePlaybackDelegateRegistry>)provideQueuePlaybackDelegateRegistry;
- (id <SPTQueueHeadUnitRegistry>)provideQueueHeadUnitRegistry;
- (id <SPTQueueInteractor>)provideQueueInteractor;
- (struct UIViewController *)provideQueueViewControllerWithDelegate:(id <SPTQueueViewControllerDelegate>)arg1 headUnitProvider:(id <SPTNowPlayingUnitProvider>)arg2 modeResolver:(id <SPTNowPlayingModeResolver>)arg3 navigationBarUnitProvider:(id <SPTNowPlayingUnitProvider>)arg4 navigationBarButtonsUnitProvider:(id <SPTNowPlayingUnitProvider>)arg5 navigationBarViewControllerV2:(UIViewController *)arg6 queueInteractor:(id <SPTQueueInteractor>)arg7 entityDecorationController:(SPTNowPlayingEntityDecorationController *)arg8;
@end
