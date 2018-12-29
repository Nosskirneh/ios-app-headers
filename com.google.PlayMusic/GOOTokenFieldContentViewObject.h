//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentViewObject.h"

@class NSArray, NSString, UIColor;
@protocol GOOTokenFieldContentViewObjectDelegate, GOOTokenFieldDelegate;

@interface GOOTokenFieldContentViewObject : GOOBaseContentViewObject
{
    _Bool _showPlaceholderWithTokens;
    _Bool _showDeleteButtons;
    _Bool _shouldLayoutForRTL;
    id <GOOTokenFieldDelegate> _tokenFieldDelegate;
    NSString *_placeholder;
    double _minTextFieldWidth;
    unsigned long long _delimiter;
    long long _underlineViewMode;
    NSString *_textFieldAccessibilityValue;
    NSArray *_tokens;
    UIColor *_focusedColor;
    UIColor *_textColor;
    UIColor *_placeholderColor;
    id <GOOTokenFieldContentViewObjectDelegate> _tokenFieldContentViewObjectDelegate;
    struct UIEdgeInsets _contentEdgeInsets;
}

@property(nonatomic) __weak id <GOOTokenFieldContentViewObjectDelegate> tokenFieldContentViewObjectDelegate; // @synthesize tokenFieldContentViewObjectDelegate=_tokenFieldContentViewObjectDelegate;
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIColor *focusedColor; // @synthesize focusedColor=_focusedColor;
@property(nonatomic) _Bool shouldLayoutForRTL; // @synthesize shouldLayoutForRTL=_shouldLayoutForRTL;
@property(nonatomic) _Bool showDeleteButtons; // @synthesize showDeleteButtons=_showDeleteButtons;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(copy, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;
@property(copy, nonatomic) NSString *textFieldAccessibilityValue; // @synthesize textFieldAccessibilityValue=_textFieldAccessibilityValue;
@property(nonatomic) long long underlineViewMode; // @synthesize underlineViewMode=_underlineViewMode;
@property(nonatomic) unsigned long long delimiter; // @synthesize delimiter=_delimiter;
@property(nonatomic) double minTextFieldWidth; // @synthesize minTextFieldWidth=_minTextFieldWidth;
@property(nonatomic) _Bool showPlaceholderWithTokens; // @synthesize showPlaceholderWithTokens=_showPlaceholderWithTokens;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) __weak id <GOOTokenFieldDelegate> tokenFieldDelegate; // @synthesize tokenFieldDelegate=_tokenFieldDelegate;
- (void).cxx_destruct;
- (void)clearTextFieldInput;
- (void)addToken:(id)arg1;
- (Class)contentViewClass;
- (id)init;

@end
