//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTThemableView-Protocol.h"
#import "SPTVideoSurfaceDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SPTLayoutConstraintBuilder, SPTNowPlayingBaseHeadUnitView, SPTNowPlayingDurationView, SPTNowPlayingFullScreenVideoControlsConstraints, SPTNowPlayingNavigationBarView, SPTNowPlayingNavigationButtonsView, SPTNowPlayingVideoFooterView, SPTNowPlayingVideoHeaderView, SPTTheme, UIActivityIndicatorView;
@protocol SPTNowPlayingVideoViewDelegate, SPTThemableViewLayoutDelegate, SPTVideoSurface;

@interface SPTNowPlayingVideoView : UIView <SPTVideoSurfaceDelegate, UIGestureRecognizerDelegate, SPTThemableView>
{
    _Bool _controlsContainerHidden;
    _Bool _useAdvertisementControls;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    id <SPTNowPlayingVideoViewDelegate> _delegate;
    SPTNowPlayingNavigationBarView *_headerTitleView;
    SPTNowPlayingNavigationButtonsView *_headerButtonsView;
    SPTNowPlayingBaseHeadUnitView *_headUnitView;
    UIView<SPTVideoSurface> *_videoSurface;
    SPTNowPlayingDurationView *_durationView;
    UIActivityIndicatorView *_loadingActivityIndicatorView;
    SPTLayoutConstraintBuilder *_layout;
    SPTTheme *_theme;
    SPTNowPlayingVideoHeaderView *_headerView;
    SPTNowPlayingVideoFooterView *_footerView;
    SPTNowPlayingFullScreenVideoControlsConstraints *_fullScreenControlConstraints;
    UIView *_playbackControlsContainer;
    UIView *_controlsContainer;
}

@property(readonly, nonatomic) UIView *controlsContainer; // @synthesize controlsContainer=_controlsContainer;
@property(readonly, nonatomic) UIView *playbackControlsContainer; // @synthesize playbackControlsContainer=_playbackControlsContainer;
@property(readonly, nonatomic) SPTNowPlayingFullScreenVideoControlsConstraints *fullScreenControlConstraints; // @synthesize fullScreenControlConstraints=_fullScreenControlConstraints;
@property(readonly, nonatomic) SPTNowPlayingVideoFooterView *footerView; // @synthesize footerView=_footerView;
@property(readonly, nonatomic) SPTNowPlayingVideoHeaderView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *layout; // @synthesize layout=_layout;
@property(nonatomic) _Bool useAdvertisementControls; // @synthesize useAdvertisementControls=_useAdvertisementControls;
@property(readonly, nonatomic) UIActivityIndicatorView *loadingActivityIndicatorView; // @synthesize loadingActivityIndicatorView=_loadingActivityIndicatorView;
@property(readonly, nonatomic) SPTNowPlayingDurationView *durationView; // @synthesize durationView=_durationView;
@property(readonly, nonatomic) UIView<SPTVideoSurface> *videoSurface; // @synthesize videoSurface=_videoSurface;
@property(readonly, nonatomic) SPTNowPlayingBaseHeadUnitView *headUnitView; // @synthesize headUnitView=_headUnitView;
@property(readonly, nonatomic) SPTNowPlayingNavigationButtonsView *headerButtonsView; // @synthesize headerButtonsView=_headerButtonsView;
@property(readonly, nonatomic) SPTNowPlayingNavigationBarView *headerTitleView; // @synthesize headerTitleView=_headerTitleView;
@property(nonatomic) __weak id <SPTNowPlayingVideoViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)videoSurfaceDidDetachVideo:(id)arg1;
- (void)videoSurfaceDidAttachVideo:(id)arg1;
- (id)buttonWithIcon:(long long)arg1 iconSize:(struct CGSize)arg2;
- (void)visit:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)hideAllViews:(_Bool)arg1;
- (void)hideControls:(_Bool)arg1 animated:(_Bool)arg2;
- (void)toggleControlsVisibility;
- (void)handleTapGesture:(id)arg1;
- (void)updateConstraints;
- (void)applyThemeLayout;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2 videoSurface:(id)arg3 animationView:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

