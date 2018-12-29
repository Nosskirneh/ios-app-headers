//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BasicCommand-Protocol.h"

@class CoreDataAtomicOperation, NSString, Urn;

@interface RecentTrackSaveCommand : NSObject <BasicCommand>
{
    Urn *_recentTrackUrn;
    Urn *_recentContextUrn;
    CoreDataAtomicOperation *_atomicOperation;
}

@property(readonly, nonatomic) CoreDataAtomicOperation *atomicOperation; // @synthesize atomicOperation=_atomicOperation;
@property(readonly, nonatomic) Urn *recentContextUrn; // @synthesize recentContextUrn=_recentContextUrn;
@property(readonly, nonatomic) Urn *recentTrackUrn; // @synthesize recentTrackUrn=_recentTrackUrn;
- (void).cxx_destruct;
- (id)fetchEntity:(Class)arg1 withUrn:(id)arg2 fromContext:(id)arg3;
- (_Bool)hasSupportedContextUrn;
- (id)createAndInsertRecentContextInContext:(id)arg1 withYou:(id)arg2;
- (void)createAndInsertUserContextWithUrn:(id)arg1 inContext:(id)arg2 withYou:(id)arg3;
- (void)createAndInsertStationContextWithUrn:(id)arg1 inContext:(id)arg2 withYou:(id)arg3;
- (void)createAndInsertPlaylistContextWithUrn:(id)arg1 inContext:(id)arg2 withYou:(id)arg3;
- (void)createHistoryContextIfNeededInContext:(id)arg1 withYou:(id)arg2;
- (void)createRecentTrackInContext:(id)arg1 withYou:(id)arg2;
- (id)execute;
- (id)initWithRecentTrackUrn:(id)arg1 contextRecentContextUrn:(id)arg2 atomicOperation:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
