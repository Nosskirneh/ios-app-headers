//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SGWPPTargetGroupMetadata, SGWPPTargetGroupName, SGWPPTargetGroupPhoto;

@interface POEMLiteTargetGroupLite : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *groupId; // @dynamic groupId;
@property(nonatomic) _Bool hasGroupId; // @dynamic hasGroupId;
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasPhoto; // @dynamic hasPhoto;
@property(retain, nonatomic) NSMutableArray *memberArray; // @dynamic memberArray;
@property(readonly, nonatomic) unsigned long long memberArray_Count; // @dynamic memberArray_Count;
@property(retain, nonatomic) SGWPPTargetGroupMetadata *metadata; // @dynamic metadata;
@property(retain, nonatomic) SGWPPTargetGroupName *name; // @dynamic name;
@property(retain, nonatomic) NSMutableArray *originArray; // @dynamic originArray;
@property(readonly, nonatomic) unsigned long long originArray_Count; // @dynamic originArray_Count;
@property(retain, nonatomic) SGWPPTargetGroupPhoto *photo; // @dynamic photo;

@end
