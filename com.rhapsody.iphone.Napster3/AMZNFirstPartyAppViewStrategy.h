//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMZNWebUIViewStrategy-Protocol.h"

@class NSString;

@interface AMZNFirstPartyAppViewStrategy : NSObject <AMZNWebUIViewStrategy>
{
}

- (id)URLForSSOv3Viewable:(id)arg1;
- (id)URLForSSOv2Viewable:(id)arg1;
- (id)URLForViewable:(id)arg1;
- (void)close;
- (_Bool)open:(id)arg1;
- (_Bool)shouldAttempt;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
