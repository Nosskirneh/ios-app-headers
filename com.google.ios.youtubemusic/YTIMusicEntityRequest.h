//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIInnerTubeContext;

@interface YTIMusicEntityRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(retain, nonatomic) NSMutableArray *entityRefsArray; // @dynamic entityRefsArray;
@property(readonly, nonatomic) unsigned long long entityRefsArray_Count; // @dynamic entityRefsArray_Count;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;

@end

