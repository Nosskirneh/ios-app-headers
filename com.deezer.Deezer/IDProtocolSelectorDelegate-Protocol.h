//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IDA4AProtocol, IDProtocolSelector;

@protocol IDProtocolSelectorDelegate <NSObject>
- (void)protocolSelectorDidFailToSelectProtocol:(IDProtocolSelector *)arg1;
- (void)protocolSelector:(IDProtocolSelector *)arg1 willSelectProtocol:(IDA4AProtocol *)arg2;
- (void)protocolSelector:(IDProtocolSelector *)arg1 didSelectProtocol:(IDA4AProtocol *)arg2;
@end

