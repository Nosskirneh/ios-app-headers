//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface YTIDataSyncOperation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *deletedNodePathsArray; // @dynamic deletedNodePathsArray;
@property(readonly, nonatomic) unsigned long long deletedNodePathsArray_Count; // @dynamic deletedNodePathsArray_Count;
@property(retain, nonatomic) NSMutableArray *invalidatedNodePathsArray; // @dynamic invalidatedNodePathsArray;
@property(readonly, nonatomic) unsigned long long invalidatedNodePathsArray_Count; // @dynamic invalidatedNodePathsArray_Count;
@property(retain, nonatomic) NSMutableArray *updatedNodesArray; // @dynamic updatedNodesArray;
@property(readonly, nonatomic) unsigned long long updatedNodesArray_Count; // @dynamic updatedNodesArray_Count;

@end
