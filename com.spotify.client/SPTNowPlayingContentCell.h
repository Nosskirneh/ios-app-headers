//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTNowPlayingCarouselContentProviderDelegate-Protocol.h"
#import "SPTNowPlayingCoverArtContentViewDelegate-Protocol.h"
#import "SPTNowPlayingVideoTimerDelegate-Protocol.h"
#import "SPTVideoSurfaceDelegate-Protocol.h"

@class NSArray, NSString, NSURL, SPTNowPlayingCarouselGradientView, SPTNowPlayingVideoTimer, SPTPlayerTrack, UIActivityIndicatorView, UIButton, UIImage, UIImageView;
@protocol SPTNowPlayingContentCellDelegate, SPTNowPlayingContentCellRefreshDelegate, SPTNowPlayingCoverArtContentView, SPTVideoSurface, SPTVideoSurfaceManager;

@interface SPTNowPlayingContentCell : UIView <SPTVideoSurfaceDelegate, SPTNowPlayingCoverArtContentViewDelegate, SPTNowPlayingVideoTimerDelegate, SPTNowPlayingCarouselContentProviderDelegate>
{
    _Bool _shouldOverrideVideoAppearance;
    _Bool _selected;
    _Bool _showActivityView;
    _Bool _fullscreen;
    _Bool _transitioning;
    _Bool _hasVideoShow;
    long long _cellAppearance;
    UIButton *_accessoryButton;
    NSArray *_contentProviders;
    UIView<SPTNowPlayingCoverArtContentView> *_coverArtContent;
    SPTPlayerTrack *_track;
    id <SPTNowPlayingContentCellDelegate> _delegate;
    id <SPTNowPlayingContentCellRefreshDelegate> _refreshDelegate;
    UIView *_contentView;
    UIView *_contentUnitView;
    UIImageView *_placeholderImageView;
    UIView<SPTVideoSurface> *_videoSurfaceView;
    id <SPTVideoSurfaceManager> _videoSurfaceManager;
    UIActivityIndicatorView *_activityView;
    long long _placeholderIconType;
    SPTNowPlayingCarouselGradientView *_gradientView;
    UIView *_overlayView;
    SPTNowPlayingVideoTimer *_dismissControlsTimer;
    struct CGSize _cellSize;
}

@property(nonatomic) _Bool hasVideoShow; // @synthesize hasVideoShow=_hasVideoShow;
@property(readonly, nonatomic) SPTNowPlayingVideoTimer *dismissControlsTimer; // @synthesize dismissControlsTimer=_dismissControlsTimer;
@property(nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
@property(readonly, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(readonly, nonatomic) SPTNowPlayingCarouselGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(nonatomic) long long placeholderIconType; // @synthesize placeholderIconType=_placeholderIconType;
@property(nonatomic) _Bool fullscreen; // @synthesize fullscreen=_fullscreen;
@property(readonly, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
@property(readonly, nonatomic) id <SPTVideoSurfaceManager> videoSurfaceManager; // @synthesize videoSurfaceManager=_videoSurfaceManager;
@property(readonly, nonatomic) UIView<SPTVideoSurface> *videoSurfaceView; // @synthesize videoSurfaceView=_videoSurfaceView;
@property(retain, nonatomic) UIImageView *placeholderImageView; // @synthesize placeholderImageView=_placeholderImageView;
@property(readonly, nonatomic) UIView *contentUnitView; // @synthesize contentUnitView=_contentUnitView;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <SPTNowPlayingContentCellRefreshDelegate> refreshDelegate; // @synthesize refreshDelegate=_refreshDelegate;
@property(nonatomic) __weak id <SPTNowPlayingContentCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SPTPlayerTrack *track; // @synthesize track=_track;
@property(nonatomic) _Bool showActivityView; // @synthesize showActivityView=_showActivityView;
@property(retain, nonatomic) UIView<SPTNowPlayingCoverArtContentView> *coverArtContent; // @synthesize coverArtContent=_coverArtContent;
@property(copy, nonatomic) NSArray *contentProviders; // @synthesize contentProviders=_contentProviders;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
@property(retain, nonatomic) UIButton *accessoryButton; // @synthesize accessoryButton=_accessoryButton;
@property(nonatomic) _Bool shouldOverrideVideoAppearance; // @synthesize shouldOverrideVideoAppearance=_shouldOverrideVideoAppearance;
@property(nonatomic) long long cellAppearance; // @synthesize cellAppearance=_cellAppearance;
- (void).cxx_destruct;
- (void)contentDidFailToLoad:(id)arg1;
- (void)videoTimerDidFire:(id)arg1;
- (void)contentViewIsReadyForDisplay:(id)arg1;
- (void)dealloc;
- (void)videoSurfaceDidDetachVideo:(id)arg1;
- (void)videoSurfaceDidAttachVideo:(id)arg1;
- (void)videoSurfaceDidChangeVideoRect:(id)arg1;
- (void)contentViewTapped;
- (double)aspectRatioMultiplier;
- (double)smallestMetric;
@property(readonly, nonatomic) _Bool isCoverArtHidden;
@property(readonly, nonatomic) NSURL *cellContentURI;
@property(readonly, nonatomic) UIImage *cellContentRepresentation;
- (id)placeholderImage;
- (void)positionAccessoryButton;
- (void)positionOverlayView;
- (void)positionSupplementaryViews;
- (void)updateVideoGravityAnimated:(_Bool)arg1;
- (_Bool)isFullScreenAppearance;
- (void)updateFullscreen;
- (void)setView:(id)arg1 visible:(_Bool)arg2 animated:(_Bool)arg3;
- (void)adjustCoverArtShadowLayout;
- (void)setViewInContentUnit:(id)arg1;
- (void)setCoverArtContent:(id)arg1 hideCoverArt:(_Bool)arg2 isVideo:(_Bool)arg3 track:(id)arg4 imageURL:(id)arg5 animated:(_Bool)arg6;
- (void)setEnableVideoSurface:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setTransitioning:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateContentUnitFrame:(struct CGRect)arg1;
- (void)accessoryButtonTapped:(id)arg1;
@property(readonly, nonatomic) id <SPTVideoSurface> videoSurface;
- (void)invalidatePlaceholderImage;
- (void)updateLayerVisibilities:(_Bool)arg1;
- (_Bool)isOverlayViewVisible;
- (_Bool)shouldContentProvidersReplaceCoverArt;
@property(readonly, nonatomic) _Bool shouldShowCoverArtView;
@property(readonly, nonatomic) _Bool shouldShowPlaceholderView;
@property(readonly, nonatomic) _Bool shouldShowVideo;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 videoSurfaceManager:(id)arg2 surfaceFactory:(id)arg3 defaultFrame:(struct CGRect)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

