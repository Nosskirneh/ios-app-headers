//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface SSCheckMark : UIView
{
    _Bool _checked;
    unsigned long long _checkMarkStyle;
    UIColor *_checkedColor;
}

@property(retain) UIColor *checkedColor; // @synthesize checkedColor=_checkedColor;
@property unsigned long long checkMarkStyle; // @synthesize checkMarkStyle=_checkMarkStyle;
@property _Bool checked; // @synthesize checked=_checked;
- (void).cxx_destruct;
- (void)drawRectOpenCircle:(struct CGRect)arg1;
- (void)drawRectGrayedOut:(struct CGRect)arg1;
- (void)drawRectChecked:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end
