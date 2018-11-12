//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIImageView;

@interface DZRAnimatedArrow : UIView
{
    UIImageView *_arrowBody;
    UIImageView *_arrowHead;
    NSLayoutConstraint *_arrowBodyTopConstraint;
    NSLayoutConstraint *_arrowHeadWidthConstraint;
    NSLayoutConstraint *_arrowHeadHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *arrowHeadHeightConstraint; // @synthesize arrowHeadHeightConstraint=_arrowHeadHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *arrowHeadWidthConstraint; // @synthesize arrowHeadWidthConstraint=_arrowHeadWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *arrowBodyTopConstraint; // @synthesize arrowBodyTopConstraint=_arrowBodyTopConstraint;
@property(retain, nonatomic) UIImageView *arrowHead; // @synthesize arrowHead=_arrowHead;
@property(retain, nonatomic) UIImageView *arrowBody; // @synthesize arrowBody=_arrowBody;
- (void).cxx_destruct;
- (void)animate;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;

@end
