//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTNowPlayingTestManagerObserver-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, SPStepScrollView, SPTNowPlayingFadeMaskView, SPTTheme, UIButton, UIImageView;
@protocol SPTGaiaDevicesAvailableView, SPTNowPlayingBarPlayButton, SPTNowPlayingBarVoiceCompanionDelegate, SPTNowPlayingTestManager;

@interface SPTNowPlayingBarContentView : UIView <SPTNowPlayingTestManagerObserver>
{
    _Bool _enabled;
    SPStepScrollView *_stepScrollView;
    UIButton<SPTNowPlayingBarPlayButton> *_playPauseButton;
    id <SPTNowPlayingBarVoiceCompanionDelegate> _voiceDelegate;
    SPTNowPlayingFadeMaskView *_fadeContentView;
    SPTTheme *_theme;
    NSArray *_layoutConstraints;
    UIView<SPTGaiaDevicesAvailableView> *_devicesAvailableView;
    id <SPTNowPlayingTestManager> _testManager;
    UIView *_voiceCompanionView;
    NSLayoutConstraint *_voiceCompanionWidthLayoutConstraint;
    UIImageView *_nowPlayingBarVoiceButtonImageView;
}

@property(retain, nonatomic) UIImageView *nowPlayingBarVoiceButtonImageView; // @synthesize nowPlayingBarVoiceButtonImageView=_nowPlayingBarVoiceButtonImageView;
@property(retain, nonatomic) NSLayoutConstraint *voiceCompanionWidthLayoutConstraint; // @synthesize voiceCompanionWidthLayoutConstraint=_voiceCompanionWidthLayoutConstraint;
@property(retain, nonatomic) UIView *voiceCompanionView; // @synthesize voiceCompanionView=_voiceCompanionView;
@property(readonly, nonatomic) id <SPTNowPlayingTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) UIView<SPTGaiaDevicesAvailableView> *devicesAvailableView; // @synthesize devicesAvailableView=_devicesAvailableView;
@property(copy, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTNowPlayingFadeMaskView *fadeContentView; // @synthesize fadeContentView=_fadeContentView;
@property(nonatomic) __weak id <SPTNowPlayingBarVoiceCompanionDelegate> voiceDelegate; // @synthesize voiceDelegate=_voiceDelegate;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) UIButton<SPTNowPlayingBarPlayButton> *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(readonly, nonatomic) SPStepScrollView *stepScrollView; // @synthesize stepScrollView=_stepScrollView;
- (void).cxx_destruct;
- (void)voiceCompanionViewTapped:(id)arg1;
- (void)showVoiceCompanionButton:(_Bool)arg1;
- (void)removeVoiceCompanionViewIfNeeded;
- (void)addVoiceCompanionViewIfNeeded;
- (void)nowPlayingTestManagerDidEnableBarImprovements:(id)arg1;
- (void)layoutSubviews;
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)forceLayout;
- (void)resetConstraints;
- (id)layoutConstraintsForContentView:(id)arg1 playButton:(id)arg2 voiceCompanionButton:(id)arg3;
- (id)devicesAvailableViewConstraints;
- (void)updateConstraints;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2 connectDevicesView:(id)arg3 testManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

