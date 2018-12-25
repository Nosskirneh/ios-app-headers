//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class MessageSet, NSString;

@interface AFRErrorInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int HTTPStatus; // @dynamic HTTPStatus;
@property(nonatomic) int canonicalCode; // @dynamic canonicalCode;
@property(copy, nonatomic) NSString *data_p; // @dynamic data_p;
@property(nonatomic) int errorCode; // @dynamic errorCode;
@property(copy, nonatomic) NSString *errorMessage; // @dynamic errorMessage;
@property(copy, nonatomic) NSString *errorSpace; // @dynamic errorSpace;
@property(nonatomic) _Bool hasCanonicalCode; // @dynamic hasCanonicalCode;
@property(nonatomic) _Bool hasData_p; // @dynamic hasData_p;
@property(nonatomic) _Bool hasErrorCode; // @dynamic hasErrorCode;
@property(nonatomic) _Bool hasErrorMessage; // @dynamic hasErrorMessage;
@property(nonatomic) _Bool hasErrorSpace; // @dynamic hasErrorSpace;
@property(nonatomic) _Bool hasHTTPStatus; // @dynamic hasHTTPStatus;
@property(nonatomic) _Bool hasLegacyErrorCode; // @dynamic hasLegacyErrorCode;
@property(nonatomic) _Bool hasMessageSet; // @dynamic hasMessageSet;
@property(nonatomic) _Bool hasProtoMessageId; // @dynamic hasProtoMessageId;
@property(copy, nonatomic) NSString *legacyErrorCode; // @dynamic legacyErrorCode;
@property(retain, nonatomic) MessageSet *messageSet; // @dynamic messageSet;
@property(copy, nonatomic) NSString *protoMessageId; // @dynamic protoMessageId;

@end

