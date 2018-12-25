//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBStreamOptions, NSString;

@interface GPBStreamDescriptorProto : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *clientMessageType; // @dynamic clientMessageType;
@property(nonatomic) _Bool hasClientMessageType; // @dynamic hasClientMessageType;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasOptions; // @dynamic hasOptions;
@property(nonatomic) _Bool hasServerMessageType; // @dynamic hasServerMessageType;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) GPBStreamOptions *options; // @dynamic options;
@property(copy, nonatomic) NSString *serverMessageType; // @dynamic serverMessageType;

@end
