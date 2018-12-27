//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ABKInAppMessageViewController.h"

@class NSLayoutConstraint, UIImageView;

@interface ABKInAppMessageSlideupViewController : ABKInAppMessageViewController
{
    UIImageView *_arrowImage;
    NSLayoutConstraint *_slideConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *slideConstraint; // @synthesize slideConstraint=_slideConstraint;
@property(nonatomic) __weak UIImageView *arrowImage; // @synthesize arrowImage=_arrowImage;
- (void).cxx_destruct;
- (void)setInAppMessage:(id)arg1;
- (void)moveInAppMessageViewOffScreen;
- (void)beforeMoveInAppMessageViewOffScreen;
- (void)moveInAppMessageViewOnScreen;
- (void)beforeMoveInAppMessageViewOnScreen;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)setupConstraintsWithSuperView;
- (void)setupImageOrLabelView;
- (void)setupChevron;
- (void)viewWillAppear:(_Bool)arg1;

@end

