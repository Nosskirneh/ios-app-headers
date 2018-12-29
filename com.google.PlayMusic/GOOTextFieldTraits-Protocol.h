//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, QTMColorGroup, UIColor;
@protocol GOOTextFieldCharacterCounter, GOOTextFieldValidator;

@protocol GOOTextFieldTraits <NSObject>
@property(nonatomic) __weak id <GOOTextFieldValidator> validator;
@property(nonatomic) long long underlineViewMode;
@property(nonatomic) __weak id <GOOTextFieldCharacterCounter> characterCounter;
@property(nonatomic) unsigned long long characterLimit;
@property(retain, nonatomic) UIColor *borderColor;
@property(retain, nonatomic) UIColor *errorColor;
@property(retain, nonatomic) UIColor *placeholderColor;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) QTMColorGroup *colorGroup;
@property(nonatomic) long long presentationStyle;
@property(retain, nonatomic) UIColor *helperTextColor;
@property(copy, nonatomic) NSString *helperText;
@property(copy, nonatomic) NSString *placeholder;
@property(copy, nonatomic) NSString *text;
@end
