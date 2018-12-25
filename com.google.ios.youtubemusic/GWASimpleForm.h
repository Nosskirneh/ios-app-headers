//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GWADependencyGraphComponent-Protocol.h"
#import "GWAForm-Protocol.h"
#import "GWAResultingComponent-Protocol.h"

@class GWAInfoMessageSection, GWALegalMessageFlowSection, NSArray, NSData, NSString, OrchImageWithCaption;

@interface GWASimpleForm : NSObject <GWAForm, GWADependencyGraphComponent, GWAResultingComponent>
{
    _Bool _isSubForm;
    NSString *_formID;
    NSData *_dataToken;
    long long _formUIReference;
    OrchImageWithCaption *_icon;
    NSArray *_formFields;
    NSArray *_subForms;
    GWAInfoMessageSection *_formHeaderSection;
    NSArray *_uiFieldsSections;
    NSArray *_fieldSelectorForms;
    NSArray *_uiFieldsSectionOffsets;
    NSArray *_addressForms;
    NSArray *_addressSelectorForms;
    NSArray *_nameForms;
    NSArray *_phoneForms;
    NSArray *_countrySelectors;
    NSArray *_countrySelectorIndices;
    NSArray *_formHeaderDescription;
    GWALegalMessageFlowSection *_legalMessageSection;
    NSArray *_sectionsInSimpleForm;
    _Bool _formHidden;
}

- (void).cxx_destruct;
- (id)fieldGroupingForFieldAtIndex:(unsigned long long)arg1 inAllFieldGroupings:(id)arg2;
- (_Bool)isFieldASubform:(id)arg1;
- (id)fieldValues;
- (_Bool)isFieldSelector:(id)arg1;
- (_Bool)isFieldAtIndex:(unsigned long long)arg1 forFields:(id)arg2 aUIFieldWithoutGrouping:(id)arg3;
- (id)orchFieldForField:(id)arg1;
- (void)applyResultingAction:(id)arg1 causedByTriggers:(id)arg2;
- (void)registerWithDependencyGraph:(id)arg1;
- (id)submitButtons;
- (_Bool)hasAddressSelector;
- (_Bool)didHandleErrorMessage:(id)arg1;
- (id)value;
- (void)setUpFormWithFields:(id)arg1 groupings:(id)arg2 context:(id)arg3;
- (id)initWithSubForm:(id)arg1 context:(id)arg2;
- (id)initWithSimpleForm:(id)arg1 context:(id)arg2;
- (id)sections;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

