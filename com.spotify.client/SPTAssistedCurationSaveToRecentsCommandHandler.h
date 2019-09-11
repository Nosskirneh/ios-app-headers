//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBCommandHandler-Protocol.h"

@class NSURL;
@protocol SPTSearchRecentsDataSource;

@interface SPTAssistedCurationSaveToRecentsCommandHandler : NSObject <HUBCommandHandler>
{
    NSURL *_playlistURI;
    id <SPTSearchRecentsDataSource> _searchRecentsDataSource;
}

@property(readonly, nonatomic) id <SPTSearchRecentsDataSource> searchRecentsDataSource; // @synthesize searchRecentsDataSource=_searchRecentsDataSource;
@property(readonly, nonatomic) NSURL *playlistURI; // @synthesize playlistURI=_playlistURI;
- (void).cxx_destruct;
- (void)handleCommand:(id)arg1 event:(id)arg2;
- (id)initWithPlaylistURI:(id)arg1 searchRecentsDataSource:(id)arg2;

@end

