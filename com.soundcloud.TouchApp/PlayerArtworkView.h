//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class Blurring, ClipView, ImageDownloadQueue, ImageSwappingView, RACDisposable, UIImage, UIImageView;
@protocol ArtworkViewSnapshotObserving;

@interface PlayerArtworkView : UIView
{
    _Bool _animating;
    id <ArtworkViewSnapshotObserving> _artworkViewSnapshotDelegate;
    double _trackDuration;
    UIImage *_artworkImage;
    ImageDownloadQueue *_imageDownloadQueue;
    RACDisposable *_imageDownloadDisposable;
    Blurring *_blurring;
    ImageSwappingView *_artworkImageView;
    ImageSwappingView *_blurredImageView;
    UIImageView *_transitionImageView;
    ClipView *_clipView;
    double _trackProgress;
}

+ (void)initialize;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) double trackProgress; // @synthesize trackProgress=_trackProgress;
@property(retain, nonatomic) ClipView *clipView; // @synthesize clipView=_clipView;
@property(retain, nonatomic) UIImageView *transitionImageView; // @synthesize transitionImageView=_transitionImageView;
@property(retain, nonatomic) ImageSwappingView *blurredImageView; // @synthesize blurredImageView=_blurredImageView;
@property(retain, nonatomic) ImageSwappingView *artworkImageView; // @synthesize artworkImageView=_artworkImageView;
@property(retain, nonatomic) Blurring *blurring; // @synthesize blurring=_blurring;
@property(retain, nonatomic) RACDisposable *imageDownloadDisposable; // @synthesize imageDownloadDisposable=_imageDownloadDisposable;
@property(retain, nonatomic) ImageDownloadQueue *imageDownloadQueue; // @synthesize imageDownloadQueue=_imageDownloadQueue;
@property(retain, nonatomic) UIImage *artworkImage; // @synthesize artworkImage=_artworkImage;
@property(nonatomic) double trackDuration; // @synthesize trackDuration=_trackDuration;
@property(nonatomic) __weak id <ArtworkViewSnapshotObserving> artworkViewSnapshotDelegate; // @synthesize artworkViewSnapshotDelegate=_artworkViewSnapshotDelegate;
- (void).cxx_destruct;
- (_Bool)isInWindow;
- (void)didMoveToWindow;
- (struct CGRect)clipViewBounds;
- (_Bool)clipViewNeedsLayout;
- (void)layoutSubviews;
- (double)animationDistance;
- (double)progressForClipOffset:(double)arg1;
- (double)clipOffsetForProgress:(double)arg1;
- (void)setClipBoundsForProgress:(double)arg1;
- (double)currentClipViewOffset;
- (_Bool)viewIsRotating;
- (_Bool)clipViewIsAnimating;
- (_Bool)shouldRestartAnimationForProgress:(double)arg1;
- (void)stopArtworkAnimation;
- (void)startArtworkAnimationAt:(double)arg1;
- (void)removeBlurAnimation;
- (void)completeBlurredTransition;
- (void)setBlurredTransitionAlpha:(double)arg1;
- (void)startBlurredTransition;
- (void)setImageScale:(double)arg1;
- (void)setImageScale:(double)arg1 animated:(_Bool)arg2;
- (void)setBlurredArtworkVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)unblurArtworkImageAnimated:(_Bool)arg1;
- (void)blurArtworkImageAnimated:(_Bool)arg1;
- (void)stopAnimating;
- (void)startAnimating;
- (void)updateProgress:(double)arg1;
- (id)subscribeArtworkDownloadForUrn:(id)arg1;
- (void)setupWithUrn:(id)arg1;
- (void)initArtworkView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
