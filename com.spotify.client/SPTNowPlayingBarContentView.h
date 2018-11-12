//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SPStepScrollView, SPTLayoutConstraintBuilder, SPTNowPlayingFadeMaskView, SPTTheme, UIButton;
@protocol SPTGaiaDevicesAvailableView, SPTNowPlayingBarContentProvider, SPTNowPlayingBarPlayButton;

@interface SPTNowPlayingBarContentView : UIView
{
    _Bool _enabled;
    SPStepScrollView *_stepScrollView;
    UIButton<SPTNowPlayingBarPlayButton> *_playPauseButton;
    SPTNowPlayingFadeMaskView *_fadeContentView;
    id <SPTNowPlayingBarContentProvider> _barContentProvider;
    SPTTheme *_theme;
    SPTLayoutConstraintBuilder *_layout;
    UIView<SPTGaiaDevicesAvailableView> *_devicesAvailableView;
}

@property(retain, nonatomic) UIView<SPTGaiaDevicesAvailableView> *devicesAvailableView; // @synthesize devicesAvailableView=_devicesAvailableView;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *layout; // @synthesize layout=_layout;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <SPTNowPlayingBarContentProvider> barContentProvider; // @synthesize barContentProvider=_barContentProvider;
@property(readonly, nonatomic) SPTNowPlayingFadeMaskView *fadeContentView; // @synthesize fadeContentView=_fadeContentView;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) UIButton<SPTNowPlayingBarPlayButton> *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(readonly, nonatomic) SPStepScrollView *stepScrollView; // @synthesize stepScrollView=_stepScrollView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)forceLayout;
- (void)resetConstraints;
- (id)layoutConstraintsForNowPlayingBarView:(id)arg1 contentView:(id)arg2 playButton:(id)arg3;
- (void)updateConstraints;
- (void)setupSubviews;
- (void)useBarContentProvider:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2 connectDevicesView:(id)arg3;

@end

