//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "VOXCompositeFRCDelegate-Protocol.h"

@class NSFetchedResultsController, NSMutableArray, NSString, VOXCompositeFRC;

@interface VOXMusicLibraryLikesFacade : NSObject <VOXCompositeFRCDelegate>
{
    NSFetchedResultsController *_soundCloudLikedAlbumsFRC;
    NSFetchedResultsController *_soundCloudLikedTracksFRC;
    VOXCompositeFRC *_compositeFetchedResultsController;
    NSMutableArray *_identifiers;
}

@property(retain, nonatomic) NSMutableArray *identifiers; // @synthesize identifiers=_identifiers;
@property(retain, nonatomic) VOXCompositeFRC *compositeFetchedResultsController; // @synthesize compositeFetchedResultsController=_compositeFetchedResultsController;
@property(retain, nonatomic) NSFetchedResultsController *soundCloudLikedTracksFRC; // @synthesize soundCloudLikedTracksFRC=_soundCloudLikedTracksFRC;
@property(retain, nonatomic) NSFetchedResultsController *soundCloudLikedAlbumsFRC; // @synthesize soundCloudLikedAlbumsFRC=_soundCloudLikedAlbumsFRC;
- (void).cxx_destruct;
- (id)composedLikedId:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)initFetchedResultsController;
- (_Bool)mediaItemIsLiked:(id)arg1 musicLibrarySourceType:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
