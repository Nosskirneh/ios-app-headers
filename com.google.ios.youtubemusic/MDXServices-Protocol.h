//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GPCPromise, MDXAppStateRecorder, MDXScreenManager, MDXSeamlessSignIn, MDXVideoProgressController, MDXWatchNextEndpointDecorator, UIViewController;
@protocol YTMenuItemVisibilityController, YTPlaybackRouteButtonController;

@protocol MDXServices <NSObject>
- (GPCPromise *)fetchScreensAndMaybeSendNotificationRequest;
- (MDXSeamlessSignIn *)seamlessSignIn;
- (MDXAppStateRecorder *)appStateRecorder;
- (MDXVideoProgressController *)videoProgressController;
- (id <YTPlaybackRouteButtonController>)playbackRouteButtonController;
- (id <YTMenuItemVisibilityController>)menuItemVisibilityController;
- (MDXWatchNextEndpointDecorator *)watchNextEndpointDecorator;
- (UIViewController *)smartPairingMainViewController;
- (MDXScreenManager *)screenManager;
@end

