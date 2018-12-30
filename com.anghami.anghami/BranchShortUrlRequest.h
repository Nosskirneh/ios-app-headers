//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BNCServerRequest.h"

@class BNCLinkCache, BNCLinkData, NSArray, NSDictionary, NSString;

@interface BranchShortUrlRequest : BNCServerRequest
{
    _Bool _isSpotlightRequest;
    NSArray *_tags;
    NSString *_alias;
    unsigned long long _type;
    long long _matchDuration;
    NSString *_channel;
    NSString *_feature;
    NSString *_stage;
    NSString *_campaign;
    NSDictionary *_params;
    BNCLinkCache *_linkCache;
    BNCLinkData *_linkData;
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) BNCLinkData *linkData; // @synthesize linkData=_linkData;
@property(retain, nonatomic) BNCLinkCache *linkCache; // @synthesize linkCache=_linkCache;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *campaign; // @synthesize campaign=_campaign;
@property(retain, nonatomic) NSString *stage; // @synthesize stage=_stage;
@property(retain, nonatomic) NSString *feature; // @synthesize feature=_feature;
@property(retain, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(nonatomic) long long matchDuration; // @synthesize matchDuration=_matchDuration;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(nonatomic) _Bool isSpotlightRequest; // @synthesize isSpotlightRequest=_isSpotlightRequest;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)createLongUrlForUserUrl:(id)arg1;
- (void)processResponse:(id)arg1 error:(id)arg2;
- (void)makeRequest:(id)arg1 key:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)initWithTags:(id)arg1 alias:(id)arg2 type:(unsigned long long)arg3 matchDuration:(long long)arg4 channel:(id)arg5 feature:(id)arg6 stage:(id)arg7 campaign:(id)arg8 params:(id)arg9 linkData:(id)arg10 linkCache:(id)arg11 callback:(CDUnknownBlockType)arg12;

@end
