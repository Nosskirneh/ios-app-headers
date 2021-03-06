//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PlayQueueDataSourceFactory;

@interface SearchLauncherFactory : NSObject
{
    PlayQueueDataSourceFactory *_dataSourceFactory;
}

@property(readonly, nonatomic) PlayQueueDataSourceFactory *dataSourceFactory; // @synthesize dataSourceFactory=_dataSourceFactory;
- (void).cxx_destruct;
- (id)playQueueDataSourceForEntity:(id)arg1 isSingleTrack:(_Bool)arg2 paginationConfig:(id)arg3 searchConfiguration:(id)arg4;
- (id)launcherForTrack:(id)arg1 isSuggestion:(_Bool)arg2 paginationConfig:(id)arg3 searchConfiguration:(id)arg4 taggingContext:(id)arg5;
- (id)launcherForSearchEntity:(id)arg1 isSuggestion:(_Bool)arg2 paginationConfig:(id)arg3 searchConfiguration:(id)arg4 context:(id)arg5;
- (id)initWithDataSourceFactory:(id)arg1;
- (id)init;

@end

