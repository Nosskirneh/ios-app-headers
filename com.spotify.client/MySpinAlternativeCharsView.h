//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KeyboardAlternativesView.h"

#import "MySpinFocusControlDelegate-Protocol.h"

@class NSArray, NSString, UIButton, UIView;
@protocol UITextInput;

@interface MySpinAlternativeCharsView : KeyboardAlternativesView <MySpinFocusControlDelegate>
{
    NSString *_charWithAlternatives;
    NSArray *_alternatives;
    NSArray *_alternativesButtons;
    struct _NSRange _visibleButtonsRange;
    UIView *_altCharButtonsContainer;
    UIButton *_leftButton;
    UIButton *_rightButton;
    long long _focusSelectedBtnIndex;
    id <UITextInput> _textWidget;
}

@property __weak id <UITextInput> textWidget; // @synthesize textWidget=_textWidget;
- (void).cxx_destruct;
- (void)handleFocusEvent:(id)arg1;
- (void)updateBackground;
- (void)layoutSubviews;
- (void)alternativeButtonPressed:(id)arg1;
- (void)setAlternatives:(id)arg1 forChar:(id)arg2;
- (void)updateButtonsForVisibleRange;
- (void)leftButtonPressed:(id)arg1;
- (void)rightButtonPressed:(id)arg1;
- (void)updateLeftRightButtonState;
- (void)setHidden:(_Bool)arg1;
- (void)createAltButtonsContainer;
- (void)createLeftAndRightButtons;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

