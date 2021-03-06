//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface VOXStreamSoundCloudModelsSynchronizer : NSObject
{
    long long _pendingRequestsCount;
    NSMutableArray *_processedModels;
    NSMutableArray *_requestsContainer;
    CDUnknownBlockType _resultBlock;
}

@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property(retain, nonatomic) NSMutableArray *requestsContainer; // @synthesize requestsContainer=_requestsContainer;
@property(retain, nonatomic) NSMutableArray *processedModels; // @synthesize processedModels=_processedModels;
@property(nonatomic) long long pendingRequestsCount; // @synthesize pendingRequestsCount=_pendingRequestsCount;
- (void).cxx_destruct;
- (void)syncFinished;
- (void)requestPlaylistTracks:(id)arg1;
- (void)cancel;
- (void)syncModels:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

