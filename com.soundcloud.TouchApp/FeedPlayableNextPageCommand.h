//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ApiCommand-Protocol.h"

@class CoreDataContextSaver, NSManagedObjectContext, NSString, StreamAdapter;

@interface FeedPlayableNextPageCommand : NSObject <ApiCommand>
{
    id _feedId;
    NSManagedObjectContext *_context;
    CoreDataContextSaver *_contextSaver;
    StreamAdapter *_streamAdapter;
}

@property(readonly, nonatomic) StreamAdapter *streamAdapter; // @synthesize streamAdapter=_streamAdapter;
@property(readonly, nonatomic) CoreDataContextSaver *contextSaver; // @synthesize contextSaver=_contextSaver;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) id feedId; // @synthesize feedId=_feedId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (unsigned long long)maxIndexForFeedId:(id)arg1 inContext:(id)arg2;
- (id)adapter;
- (id)executeWithObject:(id)arg1;
- (id)initWithFeedId:(id)arg1 managedObjectContext:(id)arg2 coreDataContextSaver:(id)arg3 streamAdapter:(id)arg4;
- (id)initWithFeedId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

