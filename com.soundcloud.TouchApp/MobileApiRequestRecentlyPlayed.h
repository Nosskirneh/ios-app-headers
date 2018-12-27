//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray;

@interface MobileApiRequestRecentlyPlayed : MTLModel <MTLJSONSerializing>
{
    NSArray *_recentTracks;
    NSArray *_recentContexts;
}

+ (id)recentContextsJSONTransformer;
+ (id)recentTracksJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, copy, nonatomic) NSArray *recentContexts; // @synthesize recentContexts=_recentContexts;
@property(readonly, copy, nonatomic) NSArray *recentTracks; // @synthesize recentTracks=_recentTracks;
- (void).cxx_destruct;
- (_Bool)validate:(id *)arg1;
- (id)initWithRecentTracks:(id)arg1 recentContexts:(id)arg2;

@end

