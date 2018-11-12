//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBPlaylist, DeezerRadio, OfflineCacheManager;

@interface OfflineCacheManagerWorker : NSObject
{
    DeezerRadio *playlist;
    DBPlaylist *dbplaylist;
    OfflineCacheManager *delegate;
}

@property __weak OfflineCacheManager *delegate; // @synthesize delegate;
@property(retain, nonatomic) DBPlaylist *dbplaylist; // @synthesize dbplaylist;
@property(retain, nonatomic) DeezerRadio *playlist; // @synthesize playlist;
- (void).cxx_destruct;
- (void)start;
- (id)initWithDBPlaylist:(id)arg1 delegate:(id)arg2;
- (id)initWithPlaylist:(id)arg1 delegate:(id)arg2;

@end
