//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Protobuf/GPBMessage.h>

@class GtalkExtension, NSString;

@interface GtalkErrorInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int code; // @dynamic code;
@property(retain, nonatomic) GtalkExtension *extension; // @dynamic extension;
@property(nonatomic) _Bool hasCode; // @dynamic hasCode;
@property(nonatomic) _Bool hasExtension; // @dynamic hasExtension;
@property(nonatomic) _Bool hasMessage; // @dynamic hasMessage;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(copy, nonatomic) NSString *message; // @dynamic message;
@property(copy, nonatomic) NSString *type; // @dynamic type;

@end
