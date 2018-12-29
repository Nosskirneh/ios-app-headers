//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AdViewModel.h"

@class NSLayoutConstraint, UIActivityIndicatorView, UIButton, VideoAdView;

@interface VideoAdViewModel : AdViewModel
{
    _Bool _isVerticalVideo;
    unsigned long long _currentState;
    VideoAdView *_videoAdView;
    UIButton *_fullScreenButton;
    UIButton *_shrinkScreenButton;
    NSLayoutConstraint *_learnMoreButtonBottomConstraint;
    NSLayoutConstraint *_videoAdWidthConstraint;
    NSLayoutConstraint *_videoAdHeightConstraint;
    NSLayoutConstraint *_advertisementLabelToShrinkScreenButtonHorizontalSpacingConstraint;
    UIActivityIndicatorView *_activityIndicator;
}

@property(nonatomic) __weak UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(nonatomic) __weak NSLayoutConstraint *advertisementLabelToShrinkScreenButtonHorizontalSpacingConstraint; // @synthesize advertisementLabelToShrinkScreenButtonHorizontalSpacingConstraint=_advertisementLabelToShrinkScreenButtonHorizontalSpacingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *videoAdHeightConstraint; // @synthesize videoAdHeightConstraint=_videoAdHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *videoAdWidthConstraint; // @synthesize videoAdWidthConstraint=_videoAdWidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *learnMoreButtonBottomConstraint; // @synthesize learnMoreButtonBottomConstraint=_learnMoreButtonBottomConstraint;
@property(nonatomic) __weak UIButton *shrinkScreenButton; // @synthesize shrinkScreenButton=_shrinkScreenButton;
@property(nonatomic) __weak UIButton *fullScreenButton; // @synthesize fullScreenButton=_fullScreenButton;
@property(nonatomic) __weak VideoAdView *videoAdView; // @synthesize videoAdView=_videoAdView;
@property(nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
@property(nonatomic) _Bool isVerticalVideo; // @synthesize isVerticalVideo=_isVerticalVideo;
- (void).cxx_destruct;
- (id)allFadeableElements;
- (id)fadeableElements;

@end
