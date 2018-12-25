//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, YTIRenderer;

@interface YTIMetadataCollectionRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *collectionId; // @dynamic collectionId;
@property(retain, nonatomic) NSMutableArray *contentsArray; // @dynamic contentsArray;
@property(readonly, nonatomic) unsigned long long contentsArray_Count; // @dynamic contentsArray_Count;
@property(nonatomic) _Bool hasCollectionId; // @dynamic hasCollectionId;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(retain, nonatomic) YTIRenderer *header; // @dynamic header;

@end

