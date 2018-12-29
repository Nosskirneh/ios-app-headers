//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSString, Urn;

@interface MobileApiTrackPolicy : MTLModel <MTLJSONSerializing>
{
    _Bool _monetizable;
    _Bool _snipped;
    _Bool _blocked;
    _Bool _subMidTier;
    _Bool _subHighTier;
    _Bool _syncable;
    Urn *_urn;
    NSString *_monetizationModel;
    NSString *_policy;
}

+ (id)urnJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool syncable; // @synthesize syncable=_syncable;
@property(nonatomic) _Bool subHighTier; // @synthesize subHighTier=_subHighTier;
@property(nonatomic) _Bool subMidTier; // @synthesize subMidTier=_subMidTier;
@property(nonatomic) _Bool blocked; // @synthesize blocked=_blocked;
@property(nonatomic) _Bool snipped; // @synthesize snipped=_snipped;
@property(nonatomic) _Bool monetizable; // @synthesize monetizable=_monetizable;
@property(copy, nonatomic) NSString *policy; // @synthesize policy=_policy;
@property(copy, nonatomic) NSString *monetizationModel; // @synthesize monetizationModel=_monetizationModel;
@property(retain, nonatomic) Urn *urn; // @synthesize urn=_urn;
- (void).cxx_destruct;
- (_Bool)validate:(id *)arg1;

@end
