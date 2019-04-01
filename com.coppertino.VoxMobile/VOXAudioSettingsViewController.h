//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UINavigationControllerDelegate-Protocol.h"
#import "VOXAnimatorDelegate-Protocol.h"
#import "VOXPEQViewControllerDelegate-Protocol.h"
#import "VOXPopoverPresenterDelegate-Protocol.h"
#import "VOXSettingsViewControllerDelegate-Protocol.h"
#import "VOXTransitionControllerDataSource-Protocol.h"

@class NSArray, NSString, UIButton, UILabel, VOXMenuTransitionAnimator, VOXOverscrollPresenter, VOXPopoverPresenter, VOXTabSwitcher, VXBass;

@interface VOXAudioSettingsViewController : UIViewController <VOXAnimatorDelegate, VOXPopoverPresenterDelegate, VOXSettingsViewControllerDelegate, VOXPEQViewControllerDelegate, UINavigationControllerDelegate, VOXTransitionControllerDataSource>
{
    NSArray *_modes;
    VOXMenuTransitionAnimator *_animator;
    long long _mode;
    VXBass *_bass;
    UIButton *_dotsButton;
    UIViewController *_currentViewController;
    VOXPopoverPresenter *_settingsPopoverPresenter;
    VOXOverscrollPresenter *_overscrollPresenter;
    UIButton *_closeButton;
    UILabel *_headerLabel;
    VOXTabSwitcher *_modeTabSwitcher;
}

@property(retain, nonatomic) VOXTabSwitcher *modeTabSwitcher; // @synthesize modeTabSwitcher=_modeTabSwitcher;
@property(nonatomic) __weak UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(nonatomic) __weak UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) VOXOverscrollPresenter *overscrollPresenter; // @synthesize overscrollPresenter=_overscrollPresenter;
@property(retain, nonatomic) VOXPopoverPresenter *settingsPopoverPresenter; // @synthesize settingsPopoverPresenter=_settingsPopoverPresenter;
@property(retain, nonatomic) UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) UIButton *dotsButton; // @synthesize dotsButton=_dotsButton;
@property(retain, nonatomic) VXBass *bass; // @synthesize bass=_bass;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) VOXMenuTransitionAnimator *animator; // @synthesize animator=_animator;
- (void).cxx_destruct;
- (void)onPresetsSelector:(id)arg1;
- (void)infoButtonPressed:(id)arg1;
- (void)onCloseButton:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)popoverPresenter:(id)arg1 willDismissViewController:(id)arg2;
- (void)settingsViewController:(id)arg1 didUpdateSettings:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)onDotsButton:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

