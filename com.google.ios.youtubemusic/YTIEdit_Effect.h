//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIEdit_Effect_Parameters;

@interface YTIEdit_Effect : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasParameters; // @dynamic hasParameters;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(retain, nonatomic) YTIEdit_Effect_Parameters *parameters; // @dynamic parameters;
@property(nonatomic) int type; // @dynamic type;

@end
