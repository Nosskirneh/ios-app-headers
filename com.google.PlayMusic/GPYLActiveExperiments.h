//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ExperimentIds, GPBInt32Array, GPBInt64Array, NSMutableArray;

@interface GPYLActiveExperiments : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *clientAlteringExperimentArray; // @dynamic clientAlteringExperimentArray;
@property(readonly, nonatomic) unsigned long long clientAlteringExperimentArray_Count; // @dynamic clientAlteringExperimentArray_Count;
@property(retain, nonatomic) GPBInt32Array *gwsExperimentArray; // @dynamic gwsExperimentArray;
@property(readonly, nonatomic) unsigned long long gwsExperimentArray_Count; // @dynamic gwsExperimentArray_Count;
@property(nonatomic) _Bool hasPhenotypeRegularExperimentIds; // @dynamic hasPhenotypeRegularExperimentIds;
@property(nonatomic) _Bool hasPhenotypeStableExperimentIds; // @dynamic hasPhenotypeStableExperimentIds;
@property(retain, nonatomic) NSMutableArray *otherExperimentArray; // @dynamic otherExperimentArray;
@property(readonly, nonatomic) unsigned long long otherExperimentArray_Count; // @dynamic otherExperimentArray_Count;
@property(retain, nonatomic) ExperimentIds *phenotypeRegularExperimentIds; // @dynamic phenotypeRegularExperimentIds;
@property(retain, nonatomic) ExperimentIds *phenotypeStableExperimentIds; // @dynamic phenotypeStableExperimentIds;
@property(retain, nonatomic) GPBInt64Array *playExperimentArray; // @dynamic playExperimentArray;
@property(readonly, nonatomic) unsigned long long playExperimentArray_Count; // @dynamic playExperimentArray_Count;
@property(retain, nonatomic) GPBInt64Array *unsupportedPlayExperimentArray; // @dynamic unsupportedPlayExperimentArray;
@property(readonly, nonatomic) unsigned long long unsupportedPlayExperimentArray_Count; // @dynamic unsupportedPlayExperimentArray_Count;

@end

