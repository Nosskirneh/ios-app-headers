//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GWAForm-Protocol.h"

@class GWABankAccountVerificationForm, GWAMandateForm, NSData, NSString;

@interface GWAInstrumentActivationForm : NSObject <GWAForm>
{
    GWABankAccountVerificationForm *_verificationForm;
    GWAMandateForm *_mandateForm;
    NSData *_dataToken;
}

- (void).cxx_destruct;
- (long long)formType;
- (_Bool)didHandleErrorMessage:(id)arg1;
- (id)sections;
- (id)value;
- (id)initWithForm:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
