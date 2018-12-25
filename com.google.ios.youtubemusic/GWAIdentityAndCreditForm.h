//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWAPage.h"

#import "GWADependencyGraphComponent-Protocol.h"
#import "GWAResultingComponent-Protocol.h"

@class NSArray, NSString;
@protocol GWAIdentityAndCreditFormDelegate;

@interface GWAIdentityAndCreditForm : GWAPage <GWAResultingComponent, GWADependencyGraphComponent>
{
    NSArray *_topInfoMessageSections;
    NSArray *_bottomInfoMessageSections;
    id <GWAIdentityAndCreditFormDelegate> _delegate;
}

@property(nonatomic) __weak id <GWAIdentityAndCreditFormDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)documentUploadSection;
- (id)infoMessageSectionsFromProtos:(id)arg1 inContext:(id)arg2;
- (_Bool)formUsesScreenTypeComponentGroup:(id)arg1;
- (void)applyResultingAction:(id)arg1 causedByTriggers:(id)arg2;
- (void)registerWithDependencyGraph:(id)arg1;
- (long long)firstSectionToFocus;
- (void)fillFormValuesInPageValue:(id)arg1 component:(id)arg2;
- (id)valueWithDependencyGraphActionToken:(id)arg1;
- (id)value;
- (struct NSDictionary *)uiReferenceToComponentMetadataMap;
- (id)componentGroupProtos;
- (id)pageSections;
- (id)webViewComponent;
- (unsigned long long)firstSectionToFocusWithExpandedSummary:(id)arg1;
- (id)initWithPage:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
