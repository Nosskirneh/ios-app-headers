//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MLCuepointSource-Protocol.h"
#import "MLHLSPlaylistCacheResolver-Protocol.h"

@class NSString;
@protocol MLCuepointRelay;

@interface MLHLSPlaylistCacheResolverLive : NSObject <MLCuepointSource, MLHLSPlaylistCacheResolver>
{
    _Bool _parsePlaylist;
    _Bool _parseCondensedURLExpander;
    int _deterministicOutputVersion;
    id <MLCuepointRelay> _cuepointRelay;
}

@property(nonatomic) __weak id <MLCuepointRelay> cuepointRelay; // @synthesize cuepointRelay=_cuepointRelay;
- (void).cxx_destruct;
- (void)updateStalePlaylistData:(id)arg1 forStream:(id)arg2 withFreshData:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)URLForStream:(id)arg1 withStalePlaylistData:(id)arg2;
- (id)initWithParsePlaylist:(_Bool)arg1 parseCondensedURLExpander:(_Bool)arg2 deterministicOutputVersion:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

