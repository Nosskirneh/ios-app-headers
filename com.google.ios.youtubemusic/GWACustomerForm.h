//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GWAForm-Protocol.h"

@class GWAButtonFlowSection, GWALegalMessageFlowSection, GWASimpleForm, NSArray, NSString;
@protocol GWAForm;

@interface GWACustomerForm : NSObject <GWAForm>
{
    id <GWAForm> _creditCardForm;
    id <GWAForm> _legalAddressForm;
    GWALegalMessageFlowSection *_legalMessageSection;
    GWAButtonFlowSection *_buttonSection;
    GWASimpleForm *_contactForm;
    NSArray *_sections;
}

- (void).cxx_destruct;
- (_Bool)shouldReplaceLegalAddressWithAddressHint:(id)arg1;
- (long long)formType;
- (_Bool)didHandleErrorMessage:(id)arg1;
- (id)value;
- (id)sections;
- (id)initWithCustomerForm:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

