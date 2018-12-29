//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, Urn;

@interface MobileApiErrorAudioAd : MTLModel <MTLJSONSerializing>
{
    _Bool _isEmpty;
    Urn *_urn;
    NSArray *_errorTrackingUrlStrings;
    double _adTimerDuration;
    double _priority;
}

+ (id)urnJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool isEmpty; // @synthesize isEmpty=_isEmpty;
@property(nonatomic) double priority; // @synthesize priority=_priority;
@property(nonatomic) double adTimerDuration; // @synthesize adTimerDuration=_adTimerDuration;
@property(retain, nonatomic) NSArray *errorTrackingUrlStrings; // @synthesize errorTrackingUrlStrings=_errorTrackingUrlStrings;
@property(retain, nonatomic) Urn *urn; // @synthesize urn=_urn;
- (void).cxx_destruct;
- (_Bool)validate:(id *)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end
