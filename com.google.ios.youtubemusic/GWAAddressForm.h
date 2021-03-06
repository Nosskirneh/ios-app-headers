//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GWAForm-Protocol.h"

@class GWAAddressFormFlowSection, NSArray, NSString;

@interface GWAAddressForm : NSObject <GWAForm>
{
    GWAAddressFormFlowSection *_addressSection;
    NSArray *_sections;
    NSString *_formId;
}

- (void).cxx_destruct;
- (_Bool)didHandleErrorMessage:(id)arg1;
- (id)value;
- (id)sections;
- (id)initWithAddressForm:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

