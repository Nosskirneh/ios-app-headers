//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageUIImpression4 : SPTLogMessage
{
    NSString *_requestIdValue;
    NSString *_featureIdValue;
    NSString *_sectionIdValue;
    long long _blockIndexValue;
    long long _itemIndexValue;
    NSString *_targetUriValue;
    NSString *_impressionTypeValue;
    NSString *_renderTypeValue;
    double _timestampValue;
}

+ (id)messageWithRequestId:(id)arg1 featureId:(id)arg2 sectionId:(id)arg3 blockIndex:(long long)arg4 itemIndex:(long long)arg5 targetUri:(id)arg6 impressionType:(id)arg7 renderType:(id)arg8 timestamp:(double)arg9;
@property(nonatomic) double timestampValue; // @synthesize timestampValue=_timestampValue;
@property(retain, nonatomic) NSString *renderTypeValue; // @synthesize renderTypeValue=_renderTypeValue;
@property(retain, nonatomic) NSString *impressionTypeValue; // @synthesize impressionTypeValue=_impressionTypeValue;
@property(retain, nonatomic) NSString *targetUriValue; // @synthesize targetUriValue=_targetUriValue;
@property(nonatomic) long long itemIndexValue; // @synthesize itemIndexValue=_itemIndexValue;
@property(nonatomic) long long blockIndexValue; // @synthesize blockIndexValue=_blockIndexValue;
@property(retain, nonatomic) NSString *sectionIdValue; // @synthesize sectionIdValue=_sectionIdValue;
@property(retain, nonatomic) NSString *featureIdValue; // @synthesize featureIdValue=_featureIdValue;
@property(retain, nonatomic) NSString *requestIdValue; // @synthesize requestIdValue=_requestIdValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

