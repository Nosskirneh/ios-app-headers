//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface UbiExpr2ImpressionNonAuth : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *app; // @dynamic app;
@property(retain, nonatomic) NSMutableArray *elementPathIdsArray; // @dynamic elementPathIdsArray;
@property(readonly, nonatomic) unsigned long long elementPathIdsArray_Count; // @dynamic elementPathIdsArray_Count;
@property(retain, nonatomic) NSMutableArray *elementPathNamesArray; // @dynamic elementPathNamesArray;
@property(readonly, nonatomic) unsigned long long elementPathNamesArray_Count; // @dynamic elementPathNamesArray_Count;
@property(retain, nonatomic) NSMutableArray *elementPathPosArray; // @dynamic elementPathPosArray;
@property(readonly, nonatomic) unsigned long long elementPathPosArray_Count; // @dynamic elementPathPosArray_Count;
@property(retain, nonatomic) NSMutableArray *elementPathReasonsArray; // @dynamic elementPathReasonsArray;
@property(readonly, nonatomic) unsigned long long elementPathReasonsArray_Count; // @dynamic elementPathReasonsArray_Count;
@property(retain, nonatomic) NSMutableArray *elementPathUrisArray; // @dynamic elementPathUrisArray;
@property(readonly, nonatomic) unsigned long long elementPathUrisArray_Count; // @dynamic elementPathUrisArray_Count;
@property(retain, nonatomic) NSMutableArray *errorsArray; // @dynamic errorsArray;
@property(readonly, nonatomic) unsigned long long errorsArray_Count; // @dynamic errorsArray_Count;
@property(copy, nonatomic) NSString *generatorCommitHash; // @dynamic generatorCommitHash;
@property(nonatomic) _Bool hasApp; // @dynamic hasApp;
@property(nonatomic) _Bool hasGeneratorCommitHash; // @dynamic hasGeneratorCommitHash;
@property(nonatomic) _Bool hasImpressionId; // @dynamic hasImpressionId;
@property(nonatomic) _Bool hasSpecificationCommitHash; // @dynamic hasSpecificationCommitHash;
@property(copy, nonatomic) NSString *impressionId; // @dynamic impressionId;
@property(retain, nonatomic) NSMutableArray *originAppArray; // @dynamic originAppArray;
@property(readonly, nonatomic) unsigned long long originAppArray_Count; // @dynamic originAppArray_Count;
@property(retain, nonatomic) NSMutableArray *originGeneratorCommitHashArray; // @dynamic originGeneratorCommitHashArray;
@property(readonly, nonatomic) unsigned long long originGeneratorCommitHashArray_Count; // @dynamic originGeneratorCommitHashArray_Count;
@property(retain, nonatomic) NSMutableArray *originPathIdsArray; // @dynamic originPathIdsArray;
@property(readonly, nonatomic) unsigned long long originPathIdsArray_Count; // @dynamic originPathIdsArray_Count;
@property(retain, nonatomic) NSMutableArray *originPathNamesArray; // @dynamic originPathNamesArray;
@property(readonly, nonatomic) unsigned long long originPathNamesArray_Count; // @dynamic originPathNamesArray_Count;
@property(retain, nonatomic) NSMutableArray *originPathPosArray; // @dynamic originPathPosArray;
@property(readonly, nonatomic) unsigned long long originPathPosArray_Count; // @dynamic originPathPosArray_Count;
@property(retain, nonatomic) NSMutableArray *originPathReasonsArray; // @dynamic originPathReasonsArray;
@property(readonly, nonatomic) unsigned long long originPathReasonsArray_Count; // @dynamic originPathReasonsArray_Count;
@property(retain, nonatomic) NSMutableArray *originPathUrisArray; // @dynamic originPathUrisArray;
@property(readonly, nonatomic) unsigned long long originPathUrisArray_Count; // @dynamic originPathUrisArray_Count;
@property(retain, nonatomic) NSMutableArray *originSpecificationCommitHashArray; // @dynamic originSpecificationCommitHashArray;
@property(readonly, nonatomic) unsigned long long originSpecificationCommitHashArray_Count; // @dynamic originSpecificationCommitHashArray_Count;
@property(copy, nonatomic) NSString *specificationCommitHash; // @dynamic specificationCommitHash;

@end

