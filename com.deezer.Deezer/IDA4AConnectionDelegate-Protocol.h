//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IDA4AConnection, IDA4APacket, NSError;

@protocol IDA4AConnectionDelegate <NSObject>
- (void)connectionDidCloseUnderlyingStreams:(IDA4AConnection *)arg1;
- (void)connection:(IDA4AConnection *)arg1 errorOccured:(NSError *)arg2;
- (void)connection:(IDA4AConnection *)arg1 didReceivePacket:(IDA4APacket *)arg2;

@optional
- (void)connection:(IDA4AConnection *)arg1 didSendBytes:(unsigned long long)arg2;
- (void)connection:(IDA4AConnection *)arg1 willSendBytes:(unsigned long long)arg2;
@end

