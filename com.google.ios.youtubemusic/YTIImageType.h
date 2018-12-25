//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTElementNodeType-Protocol.h"

@class NSMutableArray, NSString, YTIClientResource, YTIImageProcessor;

@interface YTIImageType : GPBMessage <YTElementNodeType>
{
}

+ (id)descriptor;
- (Class)nodeClass;
- (id)buildWithElement:(id)arg1 context:(id)arg2;

// Remaining properties
@property(nonatomic) int contentMode; // @dynamic contentMode;
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) YTIClientResource *defaultImage; // @dynamic defaultImage;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) YTIClientResource *errorImage; // @dynamic errorImage;
@property(nonatomic) _Bool hasContentMode; // @dynamic hasContentMode;
@property(nonatomic) _Bool hasDefaultImage; // @dynamic hasDefaultImage;
@property(nonatomic) _Bool hasErrorImage; // @dynamic hasErrorImage;
@property(nonatomic) _Bool hasProcessor; // @dynamic hasProcessor;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTIImageProcessor *processor; // @dynamic processor;
@property(retain, nonatomic) NSMutableArray *sourcesArray; // @dynamic sourcesArray;
@property(readonly, nonatomic) unsigned long long sourcesArray_Count; // @dynamic sourcesArray_Count;
@property(readonly) Class superclass;

@end

