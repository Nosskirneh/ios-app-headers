//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCKPB_PBGeneratedMessage.h"

@class GCKPB_PBStreamOptions, NSString;

__attribute__((visibility("hidden")))
@interface GCKPB_PBStreamDescriptorProto : GCKPB_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSString *clientMessageType; // @dynamic clientMessageType;
@property(nonatomic) _Bool hasClientMessageType; // @dynamic hasClientMessageType;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasOptions; // @dynamic hasOptions;
@property(nonatomic) _Bool hasServerMessageType; // @dynamic hasServerMessageType;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) GCKPB_PBStreamOptions *options; // @dynamic options;
@property(retain, nonatomic) NSString *serverMessageType; // @dynamic serverMessageType;

@end

