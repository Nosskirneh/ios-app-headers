//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, VXBassStreamServer;

@protocol VXBassStreamServerDelegate <NSObject>
- (void)streamServer:(VXBassStreamServer *)arg1 didFinishWithReason:(NSString *)arg2;

@optional
- (void)streamServer:(VXBassStreamServer *)arg1 failedWithError:(unsigned int)arg2;
- (void)streamServer:(VXBassStreamServer *)arg1 didDisconnectClient:(NSString *)arg2;
- (void)streamServer:(VXBassStreamServer *)arg1 didConnectClient:(NSString *)arg2;
@end

