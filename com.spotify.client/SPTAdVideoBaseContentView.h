//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class GLUEButton, GLUELabel, SPTLayoutConstraintBuilder, SPTTheme, UIButton, UIProgressView, UIView<SPTVideoSurface>;

@interface SPTAdVideoBaseContentView : UIView
{
    SPTLayoutConstraintBuilder *_layout;
    _Bool _showsVideoControls;
    _Bool _skippable;
    GLUELabel *_titleLabel;
    UIView<SPTVideoSurface> *_videoSurfaceView;
    UIButton *_videoPlaybackButton;
    UIProgressView *_durationProgressView;
    GLUEButton *_actionButton;
    GLUEButton *_skipButton;
    GLUELabel *_advertisementLabel;
    SPTTheme *_theme;
    UIView *_headerContentView;
    UIView *_videoContentView;
    UIView *_footerContentView;
    UIView *_videoControlsContainer;
    unsigned long long _skipDelaySeconds;
    CDUnknownBlockType _onSkipCallback;
}

@property(nonatomic) __weak CDUnknownBlockType onSkipCallback; // @synthesize onSkipCallback=_onSkipCallback;
@property(nonatomic, getter=isSkippable) _Bool skippable; // @synthesize skippable=_skippable;
@property(nonatomic) unsigned long long skipDelaySeconds; // @synthesize skipDelaySeconds=_skipDelaySeconds;
@property(readonly, nonatomic) UIView *videoControlsContainer; // @synthesize videoControlsContainer=_videoControlsContainer;
@property(readonly, nonatomic) UIView *footerContentView; // @synthesize footerContentView=_footerContentView;
@property(readonly, nonatomic) UIView *videoContentView; // @synthesize videoContentView=_videoContentView;
@property(readonly, nonatomic) UIView *headerContentView; // @synthesize headerContentView=_headerContentView;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) GLUELabel *advertisementLabel; // @synthesize advertisementLabel=_advertisementLabel;
@property(readonly, nonatomic) GLUEButton *skipButton; // @synthesize skipButton=_skipButton;
@property(readonly, nonatomic) GLUEButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) _Bool showsVideoControls; // @synthesize showsVideoControls=_showsVideoControls;
@property(readonly, nonatomic) UIProgressView *durationProgressView; // @synthesize durationProgressView=_durationProgressView;
@property(readonly, nonatomic) UIButton *videoPlaybackButton; // @synthesize videoPlaybackButton=_videoPlaybackButton;
@property(readonly, nonatomic) UIView<SPTVideoSurface> *videoSurfaceView; // @synthesize videoSurfaceView=_videoSurfaceView;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
@property(readonly, nonatomic) double headerPadding;
- (void)setShowsVideoControls:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateSkipCountdownString:(int)arg1;
- (void)skipButtonTapped;
- (void)setupSkipButtonWithAnimation:(_Bool)arg1;
- (void)updateConstraints;
- (id)initWithVideoSurface:(id)arg1 theme:(id)arg2 isSkippable:(_Bool)arg3;

@end
