//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHPlayContext.h"

@interface RHRecommendedTastePlaylistContext : RHPlayContext
{
}

+ (id)deferredPlayerStateWithAppDelegate:(id)arg1 serializedState:(id)arg2;
+ (id)createPlayContextWithAppDelegate:(id)arg1 userProfile:(id)arg2;
- (id)serializedState;
- (id)createFetchedResultsController;
- (id)playbackSourceDescription;
- (id)metricsContentID;
- (id)metricsContentType;
- (id)modeName;
- (long long)mode;
- (id)initWithAppDelegate:(id)arg1 userProfile:(id)arg2;

@end
