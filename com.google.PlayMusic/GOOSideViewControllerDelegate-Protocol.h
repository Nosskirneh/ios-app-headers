//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GOOSideViewController, NSIndexPath, NSString, UIImage;
@protocol GOOSideViewProfile;

@protocol GOOSideViewControllerDelegate <NSObject>

@optional
- (void)sideViewController:(GOOSideViewController *)arg1 didSwitchToViewMode:(long long)arg2;
- (void)sideViewController:(GOOSideViewController *)arg1 performAction:(long long)arg2;
- (NSString *)overrideTitleForSignInButtonInSideViewController:(GOOSideViewController *)arg1;
- (UIImage *)overrideImageForSignInButtonInSideViewController:(GOOSideViewController *)arg1;
- (_Bool)sideViewControllerAccountViewRequiresAttention:(GOOSideViewController *)arg1;
- (void)sideViewControllerShowProductSettingsView:(GOOSideViewController *)arg1;
- (void)sideViewControllerShowSignInView:(GOOSideViewController *)arg1;
- (void)sideViewControllerShowManageProfilesView:(GOOSideViewController *)arg1;
- (void)sideViewControllerDidEndScrollingAnimation:(GOOSideViewController *)arg1;
- (void)sideViewControllerDidFinishSwitchingProfile:(GOOSideViewController *)arg1;
- (void)sideViewController:(GOOSideViewController *)arg1 requestedSwitchToProfile:(id <GOOSideViewProfile>)arg2 profileIndex:(long long)arg3 completion:(void (^)(_Bool))arg4;
- (void)sideViewController:(GOOSideViewController *)arg1 willDisplayItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)sideViewController:(GOOSideViewController *)arg1 shouldDeselectItemAfterTap:(NSIndexPath *)arg2;
- (void)sideViewController:(GOOSideViewController *)arg1 didTapItemAtIndexPath:(NSIndexPath *)arg2;
- (void)sideViewController:(GOOSideViewController *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2;
@end

