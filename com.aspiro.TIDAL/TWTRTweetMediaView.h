//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, TWTRPlayIcon, TWTRTweet, TWTRTweetImageView, TWTRTweetMediaEntity, TWTRVideoPlayerView, UIImage, UITapGestureRecognizer, UIViewController;
@protocol TWTRTweetMediaViewDelegate;

@interface TWTRTweetMediaView : UIView
{
    double _aspectRatio;
    unsigned long long _style;
    UIViewController *_presenterViewController;
    id <TWTRTweetMediaViewDelegate> _delegate;
    UITapGestureRecognizer *_tapGestureRecognizer;
    TWTRTweet *_tweet;
    TWTRPlayIcon *_playIcon;
    TWTRTweetImageView *_imageView;
    TWTRVideoPlayerView *_videoPlayerView;
    NSLayoutConstraint *_aspectRatioConstraint;
}

@property(readonly, nonatomic) NSLayoutConstraint *aspectRatioConstraint; // @synthesize aspectRatioConstraint=_aspectRatioConstraint;
@property(readonly, nonatomic) TWTRVideoPlayerView *videoPlayerView; // @synthesize videoPlayerView=_videoPlayerView;
@property(readonly, nonatomic) TWTRTweetImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) TWTRPlayIcon *playIcon; // @synthesize playIcon=_playIcon;
@property(readonly, nonatomic) TWTRTweet *tweet; // @synthesize tweet=_tweet;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) __weak id <TWTRTweetMediaViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *presenterViewController; // @synthesize presenterViewController=_presenterViewController;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)viewControllerForPresenting;
- (_Bool)shouldPresentMediaEntity:(id)arg1;
- (void)presentVideoFromViewController:(id)arg1;
- (void)presentImageFromViewController:(id)arg1;
- (_Bool)presentDetailedMediaView;
- (_Bool)isShowingMedia;
- (_Bool)isShowingVideoThumbnail;
- (void)updatePlayIcon;
- (void)configureWithTweet:(id)arg1 style:(unsigned long long)arg2;
@property(readonly, nonatomic) TWTRTweetMediaEntity *mediaEntity;
@property(readonly, nonatomic) UIImage *image;
- (void)setAspectRatioConstraintNeedsUpdate;
- (void)updateConstraints;
- (void)addAspectRatioConstraint;
- (void)preparePlayIcon;
- (void)prepareImageView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
