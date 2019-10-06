//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface UbiExpr1Impression : GPBMessage
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
@property(retain, nonatomic) NSMutableArray *elementPathUrisArray; // @dynamic elementPathUrisArray;
@property(readonly, nonatomic) unsigned long long elementPathUrisArray_Count; // @dynamic elementPathUrisArray_Count;
@property(retain, nonatomic) NSMutableArray *errorsArray; // @dynamic errorsArray;
@property(readonly, nonatomic) unsigned long long errorsArray_Count; // @dynamic errorsArray_Count;
@property(copy, nonatomic) NSString *generatorCommitHash; // @dynamic generatorCommitHash;
@property(nonatomic) _Bool hasApp; // @dynamic hasApp;
@property(nonatomic) _Bool hasGeneratorCommitHash; // @dynamic hasGeneratorCommitHash;
@property(nonatomic) _Bool hasImpressionId; // @dynamic hasImpressionId;
@property(nonatomic) _Bool hasImpressionType; // @dynamic hasImpressionType;
@property(nonatomic) _Bool hasNavigationPageUri; // @dynamic hasNavigationPageUri;
@property(nonatomic) _Bool hasSpecificationCommitHash; // @dynamic hasSpecificationCommitHash;
@property(nonatomic) _Bool hasSpecificationId; // @dynamic hasSpecificationId;
@property(copy, nonatomic) NSString *impressionId; // @dynamic impressionId;
@property(copy, nonatomic) NSString *impressionType; // @dynamic impressionType;
@property(copy, nonatomic) NSString *navigationPageUri; // @dynamic navigationPageUri;
@property(copy, nonatomic) NSString *specificationCommitHash; // @dynamic specificationCommitHash;
@property(copy, nonatomic) NSString *specificationId; // @dynamic specificationId;

@end

