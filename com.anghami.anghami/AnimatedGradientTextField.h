//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@class NSArray, NSString;

@interface AnimatedGradientTextField : UITextField
{
    _Bool firstTime;
    _Bool _preventCursorMove;
    NSArray *_colors;
    NSArray *_borderColors;
    NSString *_emptyString;
}

@property(nonatomic) _Bool preventCursorMove; // @synthesize preventCursorMove=_preventCursorMove;
@property(retain, nonatomic) NSString *emptyString; // @synthesize emptyString=_emptyString;
@property(retain, nonatomic) NSArray *borderColors; // @synthesize borderColors=_borderColors;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)layoutSubviews;
- (void)initialSetup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
