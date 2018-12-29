//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ContentPresenter-Protocol.h"
#import "FooterPresenter-Protocol.h"

@class EmptyStateFooter, NSString;

@interface UserRelationshipsSectionPresenter : NSObject <ContentPresenter, FooterPresenter>
{
    EmptyStateFooter *_emptyStateFooter;
}

@property(readonly, nonatomic) EmptyStateFooter *emptyStateFooter; // @synthesize emptyStateFooter=_emptyStateFooter;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldAlwaysShowFooter;
- (id)footerIdentifierForInfo:(id)arg1;
- (struct CGSize)footerSizeForInfo:(id)arg1 inContentView:(id)arg2;
- (void)displayInfo:(id)arg1 inFooter:(id)arg2;
- (id)identifierForContent:(id)arg1;
- (struct CGSize)sizeForContent:(id)arg1 inContentView:(id)arg2;
- (void)displayContent:(id)arg1 inCell:(id)arg2;
- (void)registerInContentView:(id)arg1;
- (id)initWithEmptyStateFooter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
