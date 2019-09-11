//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageAbbaResponseTime1 : SPTLogMessage
{
    _Bool _hasCacheValue;
    double _responseTimeValue;
    long long _payloadSizeValue;
    NSString *_connectionTypeValue;
}

+ (id)messageWithResponseTime:(double)arg1 payloadSize:(long long)arg2 hasCache:(_Bool)arg3 connectionType:(id)arg4;
@property(copy, nonatomic) NSString *connectionTypeValue; // @synthesize connectionTypeValue=_connectionTypeValue;
@property(nonatomic) _Bool hasCacheValue; // @synthesize hasCacheValue=_hasCacheValue;
@property(nonatomic) long long payloadSizeValue; // @synthesize payloadSizeValue=_payloadSizeValue;
@property(nonatomic) double responseTimeValue; // @synthesize responseTimeValue=_responseTimeValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

