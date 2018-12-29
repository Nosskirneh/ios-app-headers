//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSDate, Urn;

@interface MobileApiRecentlyPlayedRecord : MTLModel <MTLJSONSerializing>
{
    Urn *_urn;
    NSDate *_playedAt;
}

+ (id)urnJSONTransformer;
+ (id)playedAtJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, copy, nonatomic) NSDate *playedAt; // @synthesize playedAt=_playedAt;
@property(readonly, copy, nonatomic) Urn *urn; // @synthesize urn=_urn;
- (void).cxx_destruct;
- (_Bool)validate:(id *)arg1;
- (id)initWithUrn:(id)arg1 playedAt:(id)arg2;

@end
