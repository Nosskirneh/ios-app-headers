//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GWAForm-Protocol.h"

@class GWADocumentDownloadSection, GWAInfoMessageSection, GWALegalMessageFlowSection, NSString, OrchFormHeader;

@interface GWAMandateForm : NSObject <GWAForm>
{
    OrchFormHeader *_formHeader;
    GWAInfoMessageSection *_instructionSection;
    GWALegalMessageFlowSection *_legalMessageSection;
    GWADocumentDownloadSection *_documentDownloadSection;
}

- (void).cxx_destruct;
- (_Bool)didHandleErrorMessage:(id)arg1;
- (id)value;
- (id)sections;
- (id)initWithMandateForm:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
