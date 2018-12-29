//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, UIColor;

@interface SwrveConversationUIButton : UIButton
{
    float swrveBorderRadius;
    NSString *swrveButtonType;
    UIColor *swrveForegroundColor;
    UIColor *swrveBackgroundColor;
    UIColor *swrveForegroundPressedColor;
    UIColor *swrveBackgroundPressedColor;
}

+ (id)lighterOrDarkerColor:(id)arg1;
@property(nonatomic) float swrveBorderRadius; // @synthesize swrveBorderRadius;
@property(retain, nonatomic) UIColor *swrveBackgroundPressedColor; // @synthesize swrveBackgroundPressedColor;
@property(retain, nonatomic) UIColor *swrveForegroundPressedColor; // @synthesize swrveForegroundPressedColor;
@property(retain, nonatomic) UIColor *swrveBackgroundColor; // @synthesize swrveBackgroundColor;
@property(retain, nonatomic) UIColor *swrveForegroundColor; // @synthesize swrveForegroundColor;
@property(retain, nonatomic) NSString *swrveButtonType; // @synthesize swrveButtonType;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateButtonType:(id)arg1 withForegroundColor:(id)arg2 withBackgroundColor:(id)arg3 withBorderRadius:(float)arg4;
- (void)initButtonType:(id)arg1 withForegroundColor:(id)arg2 withBackgroundColor:(id)arg3 withBorderRadius:(float)arg4;

@end
