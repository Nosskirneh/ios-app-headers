//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class GOOHUDMessageAction, NSAttributedString, NSString, QTMColorGroup, UIColor, UIView;
@protocol OS_dispatch_queue;

@interface GOOHUDMessage : NSObject <NSCopying>
{
    _Bool _focusOnShow;
    _Bool _hasSetTextAlignment;
    NSAttributedString *_attributedText;
    UIColor *_backgroundColor;
    UIColor *_buttonTextColor;
    UIColor *_highlightedButtonTextColor;
    GOOHUDMessageAction *_action;
    long long _displayType;
    double _duration;
    CDUnknownBlockType _completionHandler;
    NSString *_category;
    NSString *_accessibilityLabel;
    UIView *_elementToFocusOnDismiss;
    QTMColorGroup *_colorGroup;
}

+ (id)messageWithAttributedText:(id)arg1;
+ (id)messageWithText:(id)arg1;
@property(retain, nonatomic) QTMColorGroup *colorGroup; // @synthesize colorGroup=_colorGroup;
@property(nonatomic) _Bool hasSetTextAlignment; // @synthesize hasSetTextAlignment=_hasSetTextAlignment;
@property(nonatomic) __weak UIView *elementToFocusOnDismiss; // @synthesize elementToFocusOnDismiss=_elementToFocusOnDismiss;
@property(nonatomic) _Bool focusOnShow; // @synthesize focusOnShow=_focusOnShow;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) long long displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) GOOHUDMessageAction *action; // @synthesize action=_action;
@property(retain, nonatomic) UIColor *highlightedButtonTextColor; // @synthesize highlightedButtonTextColor=_highlightedButtonTextColor;
@property(retain, nonatomic) UIColor *buttonTextColor; // @synthesize buttonTextColor=_buttonTextColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (void).cxx_destruct;
- (void)executeActionHandler:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)executeCompletionHandlerWithUserInteraction:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSString *voiceNotificationText;
@property(copy, nonatomic) NSString *text;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (Class)viewClass;
- (id)init;

@end
