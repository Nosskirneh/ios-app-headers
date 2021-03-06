//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BasicCommand-Protocol.h"

@class AnalyticsBag, CoreDataContextSaver, NSArray, NSManagedObjectContext, NSString;

@interface EnqueueTracksByUrnCommand : NSObject <BasicCommand>
{
    NSManagedObjectContext *_context;
    CoreDataContextSaver *_saver;
    NSArray *_trackUrnStrings;
    AnalyticsBag *_analytics;
}

@property(readonly, nonatomic) AnalyticsBag *analytics; // @synthesize analytics=_analytics;
@property(readonly, nonatomic) NSArray *trackUrnStrings; // @synthesize trackUrnStrings=_trackUrnStrings;
@property(readonly, nonatomic) CoreDataContextSaver *saver; // @synthesize saver=_saver;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)fetchTracksByUrn;
- (id)fetchPlayQueue;
- (void)appendTracksToPlayQueue:(id)arg1;
- (id)execute;
- (id)initWithTrackUrnStrings:(id)arg1 context:(id)arg2 saver:(id)arg3 analytics:(id)arg4;
- (id)initWithTrackUrnStrings:(id)arg1 analytics:(id)arg2;
- (id)initWithTrackUrnStrings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

