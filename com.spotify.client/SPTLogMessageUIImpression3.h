//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageUIImpression3 : SPTLogMessage
{
    NSString *_requestIdValue;
    NSString *_featureIdValue;
    NSString *_pageUriValue;
    NSString *_sectionIdValue;
    long long _blockIndexValue;
    long long _itemIndexValue;
    NSString *_targetUriValue;
    NSString *_impressionTypeValue;
    double _msSinceEpochValue;
    NSString *_renderTypeValue;
}

+ (id)messageWithRequestId:(id)arg1 featureId:(id)arg2 pageUri:(id)arg3 sectionId:(id)arg4 blockIndex:(long long)arg5 itemIndex:(long long)arg6 targetUri:(id)arg7 impressionType:(id)arg8 msSinceEpoch:(double)arg9 renderType:(id)arg10;
@property(retain, nonatomic) NSString *renderTypeValue; // @synthesize renderTypeValue=_renderTypeValue;
@property(nonatomic) double msSinceEpochValue; // @synthesize msSinceEpochValue=_msSinceEpochValue;
@property(retain, nonatomic) NSString *impressionTypeValue; // @synthesize impressionTypeValue=_impressionTypeValue;
@property(retain, nonatomic) NSString *targetUriValue; // @synthesize targetUriValue=_targetUriValue;
@property(nonatomic) long long itemIndexValue; // @synthesize itemIndexValue=_itemIndexValue;
@property(nonatomic) long long blockIndexValue; // @synthesize blockIndexValue=_blockIndexValue;
@property(retain, nonatomic) NSString *sectionIdValue; // @synthesize sectionIdValue=_sectionIdValue;
@property(retain, nonatomic) NSString *pageUriValue; // @synthesize pageUriValue=_pageUriValue;
@property(retain, nonatomic) NSString *featureIdValue; // @synthesize featureIdValue=_featureIdValue;
@property(retain, nonatomic) NSString *requestIdValue; // @synthesize requestIdValue=_requestIdValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

