//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BasicCommand-Protocol.h"

@class AnalyticsBag, CoreDataContextSaver, NSFetchRequest, NSManagedObjectContext, NSString, PlayQueueShuffler, Urn;

@interface EnqueueSortedTracksCommand : NSObject <BasicCommand>
{
    NSManagedObjectContext *_context;
    NSFetchRequest *_fetchRequest;
    Urn *_initialTrackUrn;
    CoreDataContextSaver *_contextSaver;
    PlayQueueShuffler *_queueShuffler;
    AnalyticsBag *_analytics;
}

@property(readonly, nonatomic) AnalyticsBag *analytics; // @synthesize analytics=_analytics;
@property(readonly, nonatomic) PlayQueueShuffler *queueShuffler; // @synthesize queueShuffler=_queueShuffler;
@property(readonly, nonatomic) CoreDataContextSaver *contextSaver; // @synthesize contextSaver=_contextSaver;
@property(readonly, nonatomic) Urn *initialTrackUrn; // @synthesize initialTrackUrn=_initialTrackUrn;
@property(readonly, nonatomic) NSFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)fetchQueue;
- (id)fetchRequestForStorageRequest:(id)arg1;
- (id)fetchTracks;
- (void)copyTracks:(id)arg1 toQueue:(id)arg2;
- (void)performCommandWithSubscriber:(id)arg1;
- (id)execute;
- (id)initWithInitialTrackUrn:(id)arg1 storageRequest:(id)arg2 context:(id)arg3 contextSaver:(id)arg4 queueShuffler:(id)arg5 analytics:(id)arg6;
- (id)initWithInitialTrackUrn:(id)arg1 storageRequest:(id)arg2 analytics:(id)arg3;
- (id)initWithInitialTrackUrn:(id)arg1 storageRequest:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

