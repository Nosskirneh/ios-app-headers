//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTMPlaybackPublishControllerObserver-Protocol.h"

@class NSString, UIImageView, YTIMusicBackgroundOverlayStyle, YTIMusicPlayButtonRenderer, YTMEqualizerView;
@protocol YTMMusicPlayButtonViewDelegate;

@interface YTMMusicPlayButtonView : UIView <YTMPlaybackPublishControllerObserver>
{
    UIImageView *_iconView;
    YTMEqualizerView *_equalizerView;
    YTIMusicPlayButtonRenderer *_renderer;
    id <YTMMusicPlayButtonViewDelegate> _delegate;
    YTIMusicBackgroundOverlayStyle *_enclosingItemBackgroundOverlayStyle;
}

@property(retain, nonatomic) YTIMusicBackgroundOverlayStyle *enclosingItemBackgroundOverlayStyle; // @synthesize enclosingItemBackgroundOverlayStyle=_enclosingItemBackgroundOverlayStyle;
@property(nonatomic) __weak id <YTMMusicPlayButtonViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) YTIMusicPlayButtonRenderer *renderer; // @synthesize renderer=_renderer;
- (void).cxx_destruct;
@property(readonly, nonatomic) YTMEqualizerView *equalizerView; // @synthesize equalizerView=_equalizerView;
- (id)defaultThumbnailBackground;
- (void)removeEmptyStateThumbnailBackground;
- (void)addEmptyStateThumbnailBackground;
- (void)addEnclosingItemBackground;
- (void)removeEnclosingItemBackground;
- (void)didDisplayIcon;
- (void)didHideIcon;
- (void)showPlayingIcon;
- (void)showPausedIcon;
- (void)showEmptyState;
- (void)showEqualizerAnimating:(_Bool)arg1;
- (void)hideEqualizer;
- (void)hideIcon;
- (void)playbackPublishControllerDidObservePlayerFinish:(id)arg1;
- (void)playbackPublishControllerDidObservePlayerPause:(id)arg1;
- (void)playbackPublishControllerDidObservePlayerPlay:(id)arg1;
- (void)removePlayerObservationForAllPlaybackIDMatchers;
- (void)addPlayerObservationForAllPlaybackIDMatchers;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
