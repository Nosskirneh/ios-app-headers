//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, UIColor;

@interface RHButton : UIButton
{
    unsigned long long customState;
    NSString *_selectedAccessibilityIdentifier;
    NSString *_notSelectedAccessibilityIdentifier;
    NSString *_normalBackgroundColorString;
    UIColor *_normalBackgroundColor;
    NSString *_highlightedBackgroundColorString;
    UIColor *_highlightedBackgroundColor;
    NSString *_disabledBackgroundColorString;
    UIColor *_disabledBackgroundColor;
}

+ (unsigned long long)customStateForInteger:(unsigned long long)arg1;
@property(retain, nonatomic) UIColor *disabledBackgroundColor; // @synthesize disabledBackgroundColor=_disabledBackgroundColor;
@property(copy, nonatomic) NSString *disabledBackgroundColorString; // @synthesize disabledBackgroundColorString=_disabledBackgroundColorString;
@property(retain, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(copy, nonatomic) NSString *highlightedBackgroundColorString; // @synthesize highlightedBackgroundColorString=_highlightedBackgroundColorString;
@property(retain, nonatomic) UIColor *normalBackgroundColor; // @synthesize normalBackgroundColor=_normalBackgroundColor;
@property(copy, nonatomic) NSString *normalBackgroundColorString; // @synthesize normalBackgroundColorString=_normalBackgroundColorString;
@property(copy, nonatomic) NSString *notSelectedAccessibilityIdentifier; // @synthesize notSelectedAccessibilityIdentifier=_notSelectedAccessibilityIdentifier;
@property(copy, nonatomic) NSString *selectedAccessibilityIdentifier; // @synthesize selectedAccessibilityIdentifier=_selectedAccessibilityIdentifier;
- (void).cxx_destruct;
- (unsigned long long)state;
- (void)activate:(_Bool)arg1 customState:(unsigned long long)arg2;
- (_Bool)isCustomStateActive:(unsigned long long)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setDisabledBackgroundColor:(id)arg1 string:(id)arg2;
- (void)setHighlightedBackgroundColor:(id)arg1 string:(id)arg2;
- (void)setNormalBackgroundColor:(id)arg1 string:(id)arg2;
- (void)setSelected:(_Bool)arg1;
- (void)setStyle;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

