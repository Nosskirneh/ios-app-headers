//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray;

@interface YTIOnesiePlayerResponse : GPBMessage
{
}

+ (id)descriptor;
- (id)urlResponse;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *HTTPHeadersArray; // @dynamic HTTPHeadersArray;
@property(readonly, nonatomic) unsigned long long HTTPHeadersArray_Count; // @dynamic HTTPHeadersArray_Count;
@property(nonatomic) int HTTPStatus; // @dynamic HTTPStatus;
@property(copy, nonatomic) NSData *body; // @dynamic body;
@property(nonatomic) _Bool hasBody; // @dynamic hasBody;
@property(nonatomic) _Bool hasHTTPStatus; // @dynamic hasHTTPStatus;
@property(nonatomic) _Bool hasOnesieProxyStatus; // @dynamic hasOnesieProxyStatus;
@property(nonatomic) int onesieProxyStatus; // @dynamic onesieProxyStatus;

@end
