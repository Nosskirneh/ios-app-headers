//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface PlayStateBadge : UIView
{
    _Bool viewsSetUp;
    int state;
    UIImageView *bgFill;
    UIView *fill;
    UIView *progressFill;
}

- (void).cxx_destruct;
- (void)refreshColorsForHighlighted:(_Bool)arg1;
- (void)setPlayState:(int)arg1;
- (void)updateUIMode;
- (void)layoutSubviews;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

