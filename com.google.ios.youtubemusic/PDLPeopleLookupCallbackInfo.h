//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, PDLPeopleLookupCallbackInfoMetadata;

@interface PDLPeopleLookupCallbackInfo : NSObject
{
    struct NSDictionary *_resultsDictionary;
    PDLPeopleLookupCallbackInfoMetadata *_metadata;
}

@property(readonly, nonatomic) PDLPeopleLookupCallbackInfoMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSDictionary *resultsDictionary; // @synthesize resultsDictionary=_resultsDictionary;
- (void).cxx_destruct;
- (id)initWithResultDictionary:(struct NSDictionary *)arg1 metadata:(id)arg2;

@end

