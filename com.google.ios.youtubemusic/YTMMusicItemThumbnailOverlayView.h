//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTMDownloadStateBadgeViewDelegate-Protocol.h"
#import "YTMMusicPlayButtonViewDelegate-Protocol.h"

@class CAGradientLayer, NSString, YTIMusicItemThumbnailOverlayRenderer;
@protocol YTMMusicItemThumbnailOverlayViewDelegate, YTMMusicPlayButtonViewDelegate;

@interface YTMMusicItemThumbnailOverlayView : UIView <YTMDownloadStateBadgeViewDelegate, YTMMusicPlayButtonViewDelegate>
{
    CAGradientLayer *_scrim;
    UIView *_contentView;
    _Bool _isDisplayingOfflineItem;
    YTIMusicItemThumbnailOverlayRenderer *_renderer;
    id <YTMMusicItemThumbnailOverlayViewDelegate> _delegate;
    id <YTMMusicPlayButtonViewDelegate> _playButtonDelegate;
    struct CGSize _iconSize;
}

@property(nonatomic) _Bool isDisplayingOfflineItem; // @synthesize isDisplayingOfflineItem=_isDisplayingOfflineItem;
@property(nonatomic) __weak id <YTMMusicPlayButtonViewDelegate> playButtonDelegate; // @synthesize playButtonDelegate=_playButtonDelegate;
@property(nonatomic) __weak id <YTMMusicItemThumbnailOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) YTIMusicItemThumbnailOverlayRenderer *renderer; // @synthesize renderer=_renderer;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
- (void).cxx_destruct;
- (void)setHidden:(_Bool)arg1;
- (void)downloadStateBadgeViewDidChangeVisibility:(id)arg1;
- (void)downloadStateBadgeView:(id)arg1 didChangeToState:(long long)arg2;
- (void)removeThumbnailBackground;
- (void)addThumbnailBackground:(id)arg1;
- (void)removeEnclosingItemBackground;
- (void)addEnclosingItemBackground:(id)arg1;
- (void)playButtonViewDidDisplayIcon:(id)arg1;
- (void)playButtonViewDidHideIcon:(id)arg1;
- (void)removePlayerObservationForPlayButtonView:(id)arg1 playbackIDMatcher:(id)arg2;
- (void)addPlayerObservationForPlayButtonView:(id)arg1 playbackIDMatcher:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

