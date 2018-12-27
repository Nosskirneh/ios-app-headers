//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIActivityIndicatorView, UILabel;

@interface ActivityButton : UIControl
{
    UILabel *_titleLabel;
    UIActivityIndicatorView *_activityIndicator;
}

@property(nonatomic) __weak UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
@property(readonly, nonatomic, getter=isAnimating) _Bool animating;
- (void)stopAnimating;
- (void)startAnimating;

@end

