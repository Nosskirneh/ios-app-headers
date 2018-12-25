//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol GVROverlayViewControllerDelegate <NSObject>

@optional
- (void)shouldRefreshDeviceProfile;
- (void)shouldDisableIdleTimer:(_Bool)arg1;
- (void)resumeRenderer;
- (void)pauseRenderer;
- (void)didEnableVRMode:(_Bool)arg1;
- (void)didDismissViewController;
@end

