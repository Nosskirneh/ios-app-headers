//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GWAUiFieldConfiguration, NSString, OrchUiField, OrchUiFieldValue, UIImage;
@protocol GWAUIFieldDelegate;

@protocol GWAUiField <NSObject>
@property(nonatomic) _Bool formComponentHidden;
@property(retain, nonatomic) id <GWAUIFieldDelegate> uiFieldDelegate;
@property(readonly, nonatomic) long long completionState;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic, getter=isFocusable) _Bool focusable;
@property(readonly, nonatomic) NSString *validationMessage;
@property(readonly, nonatomic) OrchUiFieldValue *value;
@property(readonly, nonatomic) long long uiReference;
- (id)initWithUiField:(OrchUiField *)arg1 configuration:(GWAUiFieldConfiguration *)arg2;

@optional
@property(retain, nonatomic) UIImage *image;
- (void)validate;
- (NSString *)placeholder;
- (NSString *)displayValue;
- (id)initWithUiField:(OrchUiField *)arg1 widgetStyle:(unsigned long long)arg2 configuration:(GWAUiFieldConfiguration *)arg3;
@end
