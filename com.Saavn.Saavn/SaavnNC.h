//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "UINavigationControllerDelegate-Protocol.h"

@class NSString, PlaylistBuilderBar;

@interface SaavnNC : UINavigationController <UINavigationControllerDelegate>
{
    _Bool forceLightStatusBar;
    _Bool forceDarkStatusBar;
    PlaylistBuilderBar *playlistBuilderBar;
}

+ (long long)currentStatusBarStyle;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)showPlaylistBuilderBar;
- (id)getPlaylistBuilderBar;
- (long long)preferredRootStatusBarStyle;
- (void)resetStatusBar;
- (void)showDarkStatusBar;
- (void)showLightStatusBar;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

