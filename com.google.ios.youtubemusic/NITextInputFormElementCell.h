//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NIFormElementCell.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UITextField;

@interface NITextInputFormElementCell : NIFormElementCell <UITextFieldDelegate>
{
    UITextField *_textField;
}

@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)textFieldDidChangeValue;
- (_Bool)shouldUpdateCellWithObject:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

