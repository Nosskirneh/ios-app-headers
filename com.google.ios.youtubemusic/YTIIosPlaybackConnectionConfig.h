//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface YTIIosPlaybackConnectionConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasPrewarmHTTPConnectionCount; // @dynamic hasPrewarmHTTPConnectionCount;
@property(nonatomic) _Bool hasPrewarmHTTPConnectionURL; // @dynamic hasPrewarmHTTPConnectionURL;
@property(nonatomic) int prewarmHTTPConnectionCount; // @dynamic prewarmHTTPConnectionCount;
@property(copy, nonatomic) NSString *prewarmHTTPConnectionURL; // @dynamic prewarmHTTPConnectionURL;

@end

