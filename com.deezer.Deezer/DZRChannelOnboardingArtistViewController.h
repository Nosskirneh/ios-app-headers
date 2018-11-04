//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonController.h"

#import "DZRChannelOnboardingArtistViewDelegate-Protocol.h"

@class DZRChannelOnboardingArtistView, DZRChannelOnboardingGoButton, DZRChannelOnboardingProgressView, NSArray, NSLayoutConstraint, NSMutableArray, NSString, UIBarButtonItem, UIButton, UILabel, UIPanGestureRecognizer, UIView;
@protocol DZRChannelOnboardingArtistsSelection;

@interface DZRChannelOnboardingArtistViewController : CommonController <DZRChannelOnboardingArtistViewDelegate>
{
    _Bool _autoplay;
    _Bool _shouldAutomaticPlay;
    _Bool _hasSwiped;
    _Bool _isPlaying;
    _Bool _hasPlayPaused;
    UIPanGestureRecognizer *_panGestureRecognizer;
    id <DZRChannelOnboardingArtistsSelection> _delegate;
    NSString *_onboardingType;
    NSArray *_artists;
    DZRChannelOnboardingArtistView *_channelOnboardingArtistView;
    NSMutableArray *_selectedArtists;
    UIBarButtonItem *_skipNavigationItem;
    DZRChannelOnboardingGoButton *_goButton;
    UIView *_likeButtonMask;
    UIView *_dislikeButtonMask;
    UILabel *_explanationLine;
    UIButton *_dislikeButton;
    UIButton *_likeButton;
    UILabel *_likeConfirmationLabel;
    NSLayoutConstraint *_likeConfirmationLabelVerticalCenterConstraint;
    UILabel *_titleLabel;
    UIView *_contentView;
    DZRChannelOnboardingProgressView *_progressView;
}

@property(retain, nonatomic) DZRChannelOnboardingProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSLayoutConstraint *likeConfirmationLabelVerticalCenterConstraint; // @synthesize likeConfirmationLabelVerticalCenterConstraint=_likeConfirmationLabelVerticalCenterConstraint;
@property(retain, nonatomic) UILabel *likeConfirmationLabel; // @synthesize likeConfirmationLabel=_likeConfirmationLabel;
@property(retain, nonatomic) UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UIButton *dislikeButton; // @synthesize dislikeButton=_dislikeButton;
@property(retain, nonatomic) UILabel *explanationLine; // @synthesize explanationLine=_explanationLine;
@property(retain, nonatomic) UIView *dislikeButtonMask; // @synthesize dislikeButtonMask=_dislikeButtonMask;
@property(retain, nonatomic) UIView *likeButtonMask; // @synthesize likeButtonMask=_likeButtonMask;
@property(retain, nonatomic) DZRChannelOnboardingGoButton *goButton; // @synthesize goButton=_goButton;
@property(retain, nonatomic) UIBarButtonItem *skipNavigationItem; // @synthesize skipNavigationItem=_skipNavigationItem;
@property(nonatomic) _Bool hasPlayPaused; // @synthesize hasPlayPaused=_hasPlayPaused;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) _Bool hasSwiped; // @synthesize hasSwiped=_hasSwiped;
@property(nonatomic) _Bool shouldAutomaticPlay; // @synthesize shouldAutomaticPlay=_shouldAutomaticPlay;
@property(retain, nonatomic) NSMutableArray *selectedArtists; // @synthesize selectedArtists=_selectedArtists;
@property(retain, nonatomic) DZRChannelOnboardingArtistView *channelOnboardingArtistView; // @synthesize channelOnboardingArtistView=_channelOnboardingArtistView;
@property(retain, nonatomic) NSArray *artists; // @synthesize artists=_artists;
@property(nonatomic) _Bool autoplay; // @synthesize autoplay=_autoplay;
@property(retain, nonatomic) NSString *onboardingType; // @synthesize onboardingType=_onboardingType;
@property(nonatomic) __weak id <DZRChannelOnboardingArtistsSelection> delegate; // @synthesize delegate=_delegate;
@property(retain) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)isInLandscapeMode;
- (void)playerDidFinishTrack:(id)arg1;
- (void)playerDidChangeDuration:(id)arg1;
- (void)playerStateDidChange:(id)arg1;
- (void)pausePlayPreview;
- (void)stopPreview;
- (void)startPreviewIfNeeded;
- (void)playPreview;
- (void)onboardingDidSwipeArtist:(id)arg1 like:(_Bool)arg2;
- (void)like:(_Bool)arg1;
- (void)animateButtonUserDidLike:(_Bool)arg1;
- (void)animateBounceOnView:(id)arg1 duration:(double)arg2 bigRatio:(double)arg3 smallRatio:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)orientationChanged:(id)arg1;
- (void)actionButtonPressed:(id)arg1;
- (void)updateProgressViewStepWithNumberOfArtists:(long long)arg1;
- (void)updateGoButtonTitle;
- (void)goButtonTouched:(id)arg1;
- (void)skip:(id)arg1;
- (struct CGRect)mainActionButtonFrame;
- (struct CGRect)explanationLineFrame;
- (void)addExplanationLine;
- (struct CGRect)titleFrame;
- (void)setupContentView;
- (void)setupGoButton;
- (void)addTitleWithName:(id)arg1;
- (void)setupNavigationBar;
- (void)addProgressView;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (_Bool)shouldAutorotate;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithArtists:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

