//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ELMPBImageProcessor, NSMutableArray;

@interface ELMPBImage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int contentMode; // @dynamic contentMode;
@property(nonatomic) _Bool hasContentMode; // @dynamic hasContentMode;
@property(nonatomic) _Bool hasProcessor; // @dynamic hasProcessor;
@property(retain, nonatomic) ELMPBImageProcessor *processor; // @dynamic processor;
@property(retain, nonatomic) NSMutableArray *sourcesArray; // @dynamic sourcesArray;
@property(readonly, nonatomic) unsigned long long sourcesArray_Count; // @dynamic sourcesArray_Count;

@end

