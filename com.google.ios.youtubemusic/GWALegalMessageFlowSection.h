//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GWAFlowSection-Protocol.h"

@class GWAComponentGroup, GWAFlowContext, GWALegalMessageView, NSArray, NSDictionary, NSString, OrchLegalMessage, UIColor, UIImage;
@protocol GWACardComponentDelegate, GWAFlowSectionDelegate;

@interface GWALegalMessageFlowSection : NSObject <GWAFlowSection>
{
    NSString *_selectedCountry;
    NSDictionary *_messagesByCountry;
    OrchLegalMessage *_defaultMessage;
    GWALegalMessageView *_legalMessageView;
    GWAFlowContext *_context;
    id <GWAFlowSectionDelegate> _delegate;
    GWAComponentGroup *_parentComponentGroup;
}

@property(nonatomic) __weak GWAComponentGroup *parentComponentGroup; // @synthesize parentComponentGroup=_parentComponentGroup;
@property(nonatomic) __weak id <GWAFlowSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)createViewObjectForMessage:(id)arg1;
- (id)createCountryDictionary:(id)arg1;
- (id)messageForCountryCode:(id)arg1;
- (void)validate;
- (void)setCountryCode:(id)arg1;
- (void)countryChanged:(id)arg1 addressFormatJSON:(id)arg2;
- (id)opaqueData;
@property(readonly, nonatomic, getter=isFocusable) _Bool focusable;
@property(readonly, nonatomic) _Bool hasErrors;
@property(readonly, nonatomic, getter=isSubmittable) _Bool submittable;
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
@property(readonly, copy, nonatomic) NSArray *rows;
- (id)initWithLegalMessage:(id)arg1 context:(id)arg2;
- (id)initWithLegalMessageSet:(id)arg1 initialCountryCode:(id)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(nonatomic) __weak id <GWACardComponentDelegate> cardComponentDelegate;
@property(readonly, nonatomic) unsigned long long cellDividerStyleInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long fieldDisplayType;
@property(retain, nonatomic) UIImage *fieldGroupIcon;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool wantsCellDividers;

@end

