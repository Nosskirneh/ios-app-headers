//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BTransmitting-Protocol.h"

@class NSString;
@protocol BTTransport;

@interface BTTransmitter : NSObject <BTransmitting>
{
    NSString *_protocol;
    NSString *_host;
    id <BTTransport> _transport;
}

+ (id)transmitterWithProtocol:(id)arg1 host:(id)arg2 transport:(id)arg3;
- (void).cxx_destruct;
- (void)sendFragmentOfType:(id)arg1 withParameters:(id)arg2;
- (id)initWithProtocol:(id)arg1 host:(id)arg2 transport:(id)arg3;

@end

