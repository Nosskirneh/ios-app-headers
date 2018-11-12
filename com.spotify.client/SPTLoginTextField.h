//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

#import "GLUEStyleable-Protocol.h"

@class NSString, UIColor;

@interface SPTLoginTextField : UITextField <GLUEStyleable>
{
    _Bool _disableInputCaret;
    unsigned long long _validationState;
    NSString *_identifier;
    UIColor *_outOfFocusBackgroundColor;
    UIColor *_onFocusBackgroundColor;
    UIColor *_validTextColor;
    UIColor *_invalidTextColor;
    UIColor *_invalidBackgroundColor;
    struct CGSize _rightViewSize;
    struct UIEdgeInsets _edgeInsets;
}

@property(nonatomic) struct CGSize rightViewSize; // @synthesize rightViewSize=_rightViewSize;
@property(retain, nonatomic) UIColor *invalidBackgroundColor; // @synthesize invalidBackgroundColor=_invalidBackgroundColor;
@property(retain, nonatomic) UIColor *invalidTextColor; // @synthesize invalidTextColor=_invalidTextColor;
@property(retain, nonatomic) UIColor *validTextColor; // @synthesize validTextColor=_validTextColor;
@property(retain, nonatomic) UIColor *onFocusBackgroundColor; // @synthesize onFocusBackgroundColor=_onFocusBackgroundColor;
@property(retain, nonatomic) UIColor *outOfFocusBackgroundColor; // @synthesize outOfFocusBackgroundColor=_outOfFocusBackgroundColor;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic, getter=shouldDisableInputCaret) _Bool disableInputCaret; // @synthesize disableInputCaret=_disableInputCaret;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long validationState; // @synthesize validationState=_validationState;
- (void).cxx_destruct;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (id)loadingStateRightView;
- (id)validStateRightView;
- (void)setupWhiteStyle;
- (void)setupRightViewForState:(unsigned long long)arg1;
- (void)glue_applyStyle:(id)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

