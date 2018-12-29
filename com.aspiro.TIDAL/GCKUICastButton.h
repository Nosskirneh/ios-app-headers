//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSArray, UIImage;

@interface GCKUICastButton : UIButton
{
    NSArray *_animationIcons;
    UIImage *_inactiveIcon;
    UIImage *_activeIcon;
    unsigned long long _castState;
    _Bool _triggersDefaultCastDialog;
}

@property(nonatomic) _Bool triggersDefaultCastDialog; // @synthesize triggersDefaultCastDialog=_triggersDefaultCastDialog;
- (void).cxx_destruct;
- (void)setAccessibilityLabelWithCastState:(unsigned long long)arg1;
- (void)applyTintColorToIcons;
- (void)didTap:(id)arg1;
- (void)castStateDidChange:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setInactiveIcon:(id)arg1 activeIcon:(id)arg2 animationIcons:(id)arg3;
- (void)dealloc;
- (void)privateInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

