//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHPlayContext.h"

@interface RHTrackHighlightPlayContext : RHPlayContext
{
}

+ (id)deferredPlayerStateWithAppDelegate:(id)arg1 serializedState:(id)arg2;
- (id)serializedState;
- (_Bool)isEqual:(id)arg1;
- (id)playbackSourceDescription;
- (id)topTracksString:(id)arg1;
- (id)createFetchedResultsController;
- (id)metricsContentID;
- (id)metricsContentType;
- (id)modeName;
- (long long)mode;
- (id)loadContentBeforePlayback;
- (id)initWithAppDelegate:(id)arg1 genre:(id)arg2 artist:(id)arg3 album:(id)arg4 highlightScope:(long long)arg5 params:(id)arg6;

@end

