//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZFlatButton.h"

@class UIActivityIndicatorView, UIImageView, UILabel, UIView;

@interface DZRChannelOnboardingGoButton : DZFlatButton
{
    UIActivityIndicatorView *_activityIndicator;
    UIView *_centerView;
    UILabel *_title;
    UIImageView *_arrowImageView;
}

@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIView *centerView; // @synthesize centerView=_centerView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
- (void).cxx_destruct;
- (void)setActive:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (void)addActivityIndicator;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)baseInit;

@end

