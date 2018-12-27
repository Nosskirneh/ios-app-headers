//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BasicCommand-Protocol.h"

@class AnalyticsBag, CoreDataContextSaver, NSManagedObjectContext, NSString, Urn;

@interface EnqueuePlaylistTracksCommand : NSObject <BasicCommand>
{
    NSManagedObjectContext *_context;
    CoreDataContextSaver *_saver;
    Urn *_playlistUrn;
    AnalyticsBag *_attachedAnalytics;
}

@property(readonly, nonatomic) AnalyticsBag *attachedAnalytics; // @synthesize attachedAnalytics=_attachedAnalytics;
@property(readonly, nonatomic) Urn *playlistUrn; // @synthesize playlistUrn=_playlistUrn;
@property(readonly, nonatomic) CoreDataContextSaver *saver; // @synthesize saver=_saver;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)sortDescriptorsForPlaylistTracks;
- (id)predicateForPlaylistTracks;
- (id)requestForPlaylistTracks;
- (id)storageRequest;
- (unsigned long long)numberOfTracksForPlaylist;
- (void)sendSyncsWithSubscriber:(id)arg1;
- (id)execute;
- (id)initWithPlaylistUrn:(id)arg1 context:(id)arg2 saver:(id)arg3 analytics:(id)arg4;
- (id)initWithPlaylistUrn:(id)arg1 analytics:(id)arg2;
- (id)initWithPlaylistUrn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

