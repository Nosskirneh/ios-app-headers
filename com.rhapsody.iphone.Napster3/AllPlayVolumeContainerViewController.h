//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AllPlayGroupViewControllerDelegate-Protocol.h"

@class APPlayerManager, AllPlayController, AllPlayGroupVolumeViewController, AllPlayVolumeSlider, NSString, UIImageView, UINavigationController, UIView;

@interface AllPlayVolumeContainerViewController : UIViewController <AllPlayGroupViewControllerDelegate>
{
    _Bool _volumeControllerVisible;
    _Bool _previousBarStyle;
    AllPlayVolumeSlider *_volumeSlider;
    UIView *_volumeSliderContainer;
    UINavigationController *_contentNavigationController;
    AllPlayGroupVolumeViewController *_volumeController;
    UIImageView *_volumeIcon;
    AllPlayController *_allPlayController;
    APPlayerManager *_playerManager;
    UINavigationController *_volumeNavController;
}

@property(nonatomic) _Bool previousBarStyle; // @synthesize previousBarStyle=_previousBarStyle;
@property(retain, nonatomic) UINavigationController *volumeNavController; // @synthesize volumeNavController=_volumeNavController;
@property(nonatomic) APPlayerManager *playerManager; // @synthesize playerManager=_playerManager;
@property(nonatomic) AllPlayController *allPlayController; // @synthesize allPlayController=_allPlayController;
@property(retain, nonatomic) UIImageView *volumeIcon; // @synthesize volumeIcon=_volumeIcon;
@property(nonatomic) _Bool volumeControllerVisible; // @synthesize volumeControllerVisible=_volumeControllerVisible;
@property(retain, nonatomic) AllPlayGroupVolumeViewController *volumeController; // @synthesize volumeController=_volumeController;
@property(retain, nonatomic) UINavigationController *contentNavigationController; // @synthesize contentNavigationController=_contentNavigationController;
@property(readonly) UIView *volumeSliderContainer; // @synthesize volumeSliderContainer=_volumeSliderContainer;
@property(readonly) AllPlayVolumeSlider *volumeSlider; // @synthesize volumeSlider=_volumeSlider;
- (void)viewDidUnload;
- (void)allPlayGroupViewControllerCancel:(id)arg1;
- (void)updateVolumeView;
- (void)volumeSliderTouchDown;
- (void)revealVolumeController;
- (void)clearVolumeNavigationController;
- (struct CGRect)finalFrameForVolumeController:(id)arg1;
- (struct CGRect)initialFrameForVolumeController;
- (void)clearContentNavigationController;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithAllPlayController:(id)arg1 withPlayerManager:(id)arg2 withRootViewController:(id)arg3;
- (struct CGRect)frameForChildController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

