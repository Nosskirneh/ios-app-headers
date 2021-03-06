//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BasicApiQueue, RequestCreator;

@interface RecentlyPlayedCallFactory : NSObject
{
    BasicApiQueue *_apiQueue;
    RequestCreator *_requestCreator;
}

@property(readonly, nonatomic) RequestCreator *requestCreator; // @synthesize requestCreator=_requestCreator;
@property(readonly, nonatomic) BasicApiQueue *apiQueue; // @synthesize apiQueue=_apiQueue;
- (void).cxx_destruct;
- (id)deleteRequestObjectWithPath:(id)arg1;
- (id)postRequestObjectForRecentlyPlayed:(id)arg1;
- (id)apiCallForDeletingRecentTracks;
- (id)apiCallForDeletingRecentlyPlayedContexts;
- (id)apiCallForFetchingRecentlyPlayed;
- (id)apiCallForPostingRecentlyPlayed:(id)arg1;
- (id)initWithRequestCreator:(id)arg1 apiQueue:(id)arg2;
- (id)init;

@end

