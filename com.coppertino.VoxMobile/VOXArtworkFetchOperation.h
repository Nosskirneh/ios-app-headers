//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSDictionary, NSOrderedSet, NSString;

@interface VOXArtworkFetchOperation : NSOperation
{
    _Bool _isExecuting;
    _Bool _isFinished;
    NSString *_artworkUrl;
    NSDictionary *_mediaItemDictionary;
    NSOrderedSet *_sources;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
@property _Bool isFinished; // @synthesize isFinished=_isFinished;
@property _Bool isExecuting; // @synthesize isExecuting=_isExecuting;
@property(copy, nonatomic) NSOrderedSet *sources; // @synthesize sources=_sources;
@property(retain, nonatomic) NSDictionary *mediaItemDictionary; // @synthesize mediaItemDictionary=_mediaItemDictionary;
@property(retain, nonatomic) NSString *artworkUrl; // @synthesize artworkUrl=_artworkUrl;
- (void).cxx_destruct;
- (id)initWithArtworkSources:(id)arg1;
- (void)setupFinishedState;
- (void)setupLoadingState;
- (void)start;

@end
