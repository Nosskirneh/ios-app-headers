//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTMMusicDataBoundApplyContainerEntityProtocol-Protocol.h"

@class NSMutableArray, NSString, YTIMusicEntityReference, YTIRenderer;

@interface YTIMusicDataBoundDetailPageRenderer : GPBMessage <YTMMusicDataBoundApplyContainerEntityProtocol>
{
}

+ (id)descriptor;
- (void)ytm_applyContainerEntityReference:(id)arg1 index:(unsigned long long)arg2 cache:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSMutableArray *detailContentMoldsArray; // @dynamic detailContentMoldsArray;
@property(readonly, nonatomic) unsigned long long detailContentMoldsArray_Count; // @dynamic detailContentMoldsArray_Count;
@property(retain, nonatomic) YTIRenderer *detailHeaderMold; // @dynamic detailHeaderMold;
@property(retain, nonatomic) YTIMusicEntityReference *entityReference; // @dynamic entityReference;
@property(nonatomic) _Bool hasDetailHeaderMold; // @dynamic hasDetailHeaderMold;
@property(nonatomic) _Bool hasEntityReference; // @dynamic hasEntityReference;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

