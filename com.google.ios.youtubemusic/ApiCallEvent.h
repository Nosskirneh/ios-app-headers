//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ApiCallRequestUploadParameters;

@interface ApiCallEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int apiCall; // @dynamic apiCall;
@property(nonatomic) int caller; // @dynamic caller;
@property(nonatomic) _Bool delegating; // @dynamic delegating;
@property(nonatomic) int delegatingCaller; // @dynamic delegatingCaller;
@property(nonatomic) _Bool hasApiCall; // @dynamic hasApiCall;
@property(nonatomic) _Bool hasCaller; // @dynamic hasCaller;
@property(nonatomic) _Bool hasDelegating; // @dynamic hasDelegating;
@property(nonatomic) _Bool hasDelegatingCaller; // @dynamic hasDelegatingCaller;
@property(nonatomic) _Bool hasResultCode; // @dynamic hasResultCode;
@property(nonatomic) _Bool hasUnknownCallerHashcode; // @dynamic hasUnknownCallerHashcode;
@property(nonatomic) _Bool hasUnknownDelegatingCallerHashcode; // @dynamic hasUnknownDelegatingCallerHashcode;
@property(readonly, nonatomic) int parametersOneOfCase; // @dynamic parametersOneOfCase;
@property(retain, nonatomic) ApiCallRequestUploadParameters *requestUploadParameters; // @dynamic requestUploadParameters;
@property(nonatomic) int resultCode; // @dynamic resultCode;
@property(nonatomic) int unknownCallerHashcode; // @dynamic unknownCallerHashcode;
@property(nonatomic) int unknownDelegatingCallerHashcode; // @dynamic unknownDelegatingCallerHashcode;

@end

