//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class MMKMessage, MMKMessageEnvelope, NSData;

@protocol MMKMessageCoding
- (MMKMessage *)decodeMessage:(NSData *)arg1;
- (MMKMessageEnvelope *)decode:(NSData *)arg1;
- (NSData *)encodeMessage:(MMKMessage *)arg1;
- (NSData *)encode:(MMKMessageEnvelope *)arg1;
@end
