//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol INSMessageProtocol;

@protocol INSEventMessageNode <NSObject>
@property(readonly, nonatomic) long long sequenceNumber;
@property(readonly, nonatomic) id <INSMessageProtocol> message;
@end
