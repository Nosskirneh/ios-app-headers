//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTICommand, YTIElementData;

@interface YTISetModelAction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIElementData *elementData; // @dynamic elementData;
@property(nonatomic) _Bool hasElementData; // @dynamic hasElementData;
@property(nonatomic) _Bool hasServiceEndpoint; // @dynamic hasServiceEndpoint;
@property(retain, nonatomic) YTICommand *serviceEndpoint; // @dynamic serviceEndpoint;

@end

