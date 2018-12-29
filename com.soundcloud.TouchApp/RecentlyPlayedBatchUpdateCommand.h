//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BasicCommand-Protocol.h"

@class CoreDataAtomicOperation, MobileApiRequestRecentlyPlayed, NSString;

@interface RecentlyPlayedBatchUpdateCommand : NSObject <BasicCommand>
{
    MobileApiRequestRecentlyPlayed *_apiRecents;
    CoreDataAtomicOperation *_atomicOperation;
}

@property(retain, nonatomic) CoreDataAtomicOperation *atomicOperation; // @synthesize atomicOperation=_atomicOperation;
@property(retain, nonatomic) MobileApiRequestRecentlyPlayed *apiRecents; // @synthesize apiRecents=_apiRecents;
- (void).cxx_destruct;
- (id)fetchEntitiesOfType:(Class)arg1 withUrns:(id)arg2 fromContext:(id)arg3;
- (id)fetchEntity:(Class)arg1 withUrn:(id)arg2 fromContext:(id)arg3;
- (_Bool)hasSupportedContextUrn:(id)arg1;
- (id)deduplicatedRecentsForUrnsWithRecents:(id)arg1;
- (id)createAndInsertRecentContextFromRecord:(id)arg1 inContext:(id)arg2 withYou:(id)arg3;
- (id)fetchEntitiesOfType:(Class)arg1 fromUrns:(id)arg2 withPredicateFormat:(id)arg3 fromContext:(id)arg4;
- (void)createRecentContextsInManagedContext:(id)arg1 withYou:(id)arg2;
- (void)createRecentsTracksInManagedContext:(id)arg1 withYou:(id)arg2;
- (void)deleteSyncedRecentEntitiesWithClass:(Class)arg1 fromContext:(id)arg2;
- (id)execute;
- (id)initWithRecentContexts:(id)arg1 atomicOperation:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
