//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol RHMIDIConnectionDelegate <NSObject>
- (void)handleSysExMMCCommand:(unsigned char)arg1 withData:(NSData *)arg2 ofLength:(unsigned char)arg3 timeInterval:(double)arg4;
@end

