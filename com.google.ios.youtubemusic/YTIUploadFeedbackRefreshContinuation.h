//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString;

@interface YTIUploadFeedbackRefreshContinuation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *clickTrackingParams; // @dynamic clickTrackingParams;
@property(copy, nonatomic) NSString *continuation; // @dynamic continuation;
@property(nonatomic) unsigned int continueInMs; // @dynamic continueInMs;
@property(nonatomic) _Bool hasClickTrackingParams; // @dynamic hasClickTrackingParams;
@property(nonatomic) _Bool hasContinuation; // @dynamic hasContinuation;
@property(nonatomic) _Bool hasContinueInMs; // @dynamic hasContinueInMs;

@end

