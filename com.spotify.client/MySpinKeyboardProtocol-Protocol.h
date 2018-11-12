//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, UIView;
@protocol MySpinKeyboardDelegate, UITextInput;

@protocol MySpinKeyboardProtocol <NSObject>
@property unsigned long long shiftType;
@property unsigned long long keyboardType;
@property __weak id <MySpinKeyboardDelegate> delegate;
@property __weak id <UITextInput> textWidget;
@property(readonly) long long writingDirection;
@property(readonly) NSString *keyboardID;
@property(readonly) UIView *keyboardView;

@optional
- (void)informationFromPreviousKeyboard:(NSDictionary *)arg1;
- (void)textDidChange;
- (void)selectionDidChange;
- (void)keyboardDidHide;
- (void)keyboardWillHide;
- (void)keyboardDidShow;
- (void)keyboardWillShow;
@end

