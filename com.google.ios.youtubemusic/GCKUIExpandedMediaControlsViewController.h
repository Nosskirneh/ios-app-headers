//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GCKRemoteMediaClientListener-Protocol.h"
#import "GCKSessionManagerListener-Protocol.h"
#import "GCKUIMediaButtonBarProtocol-Protocol.h"

@class CAGradientLayer, GCKAnalyticsEventLogger, GCKSessionManager, GCKUIButtonBarViewController, GCKUICastButton, GCKUIMediaController, GCKUIPlaybackPositionSlider, GCKUIStyleAttributes, NSString, NSURL, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView, UIVisualEffectView;

@interface GCKUIExpandedMediaControlsViewController : UIViewController <GCKRemoteMediaClientListener, GCKSessionManagerListener, GCKUIMediaButtonBarProtocol>
{
    GCKAnalyticsEventLogger *_analyticsEventLogger;
    GCKSessionManager *_sessionManager;
    GCKUIMediaController *_mediaController;
    GCKUIButtonBarViewController *_buttonBarViewController;
    CAGradientLayer *_darkGradientLayer;
    UIVisualEffectView *_blurEffectView;
    GCKUIStyleAttributes *_styleAttributes;
    NSString *_castingToLabelText;
    NSURL *_currentAdImageURL;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_backgroundImage;
    UIButton *_downArrowButton;
    UIView *_barContainerView;
    UILabel *_castingToLabel;
    GCKUIPlaybackPositionSlider *_streamPositionSlider;
    UILabel *_streamPositionLabel;
    UILabel *_streamDurationLabel;
    UIView *_adContainerView;
    UIActivityIndicatorView *_mediaLoadingIndicator;
    GCKUICastButton *_castButton;
    UIImageView *_adImageView;
    UILabel *_adLabel;
    UILabel *_adInProgressLabel;
    UIButton *_skipAdButton;
    UILabel *_skipAdLabel;
}

- (void).cxx_destruct;
- (void)applyStyleAttributes;
- (void)sessionManager:(id)arg1 session:(id)arg2 didUpdateDevice:(id)arg3;
- (void)sessionManager:(id)arg1 didEndSession:(id)arg2 withError:(id)arg3;
- (void)sessionManager:(id)arg1 didResumeSession:(id)arg2;
- (void)sessionManager:(id)arg1 didStartSession:(id)arg2;
- (void)remoteMediaClient:(id)arg1 didUpdateMediaStatus:(id)arg2;
- (void)downArrowTapped:(id)arg1;
- (id)customButtonAtIndex:(unsigned long long)arg1;
- (void)setCustomButton:(id)arg1 atIndex:(unsigned long long)arg2;
- (long long)buttonTypeAtIndex:(unsigned long long)arg1;
- (void)setButtonType:(long long)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)buttonCount;
- (unsigned long long)internalIndexForClientIndex:(unsigned long long)arg1;
- (void)syncWithMediaStatus:(id)arg1;
- (void)syncWithSession:(id)arg1;
- (void)attachToSession:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)dismissMediaControls;
- (void)applyGradientEffect;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (void)viewDidLoad;
@property(nonatomic) _Bool hideStreamPositionControlsForLiveContent;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

