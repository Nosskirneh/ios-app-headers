//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOTextContentViewObject.h"

@class NSString, SKTContact, UIColor;
@protocol SKTContactContentViewDelegate, SKTContactListColorOverrides, SKTInteractionLogger, SKTSendKitCoreOptions;

@interface SKTContactContentViewObjectBase : GOOTextContentViewObject
{
    _Bool _expanded;
    id <SKTContactContentViewDelegate> _viewDelegate;
    SKTContact *_contact;
    id <SKTSendKitCoreOptions> _uiOptions;
    id <SKTInteractionLogger> _interactionLogger;
    long long _contactSource;
    id <SKTContactListColorOverrides> _colorOverrides;
}

+ (id)objectWithContact:(id)arg1 uiOptions:(id)arg2 interactionLogger:(id)arg3 contactSource:(long long)arg4;
@property(retain, nonatomic) id <SKTContactListColorOverrides> colorOverrides; // @synthesize colorOverrides=_colorOverrides;
@property(nonatomic) long long contactSource; // @synthesize contactSource=_contactSource;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) id <SKTInteractionLogger> interactionLogger; // @synthesize interactionLogger=_interactionLogger;
@property(retain, nonatomic) id <SKTSendKitCoreOptions> uiOptions; // @synthesize uiOptions=_uiOptions;
@property(retain, nonatomic) SKTContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak id <SKTContactContentViewDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
- (void).cxx_destruct;
- (id)mainlineContactMethod;
@property(readonly, nonatomic) UIColor *selectedIndicationColor;
- (id)selectedContactMethods;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
@property(readonly, nonatomic) NSString *secondaryCollationName;
@property(readonly, nonatomic) NSString *primaryCollationName;

@end

