//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MDXChannelMessage, MDXWebSocketServer, NSError;

@protocol MDXWebSocketServerDelegate <NSObject>
- (void)webSocketServer:(MDXWebSocketServer *)arg1 didEncounterError:(NSError *)arg2;
- (void)webSocketServer:(MDXWebSocketServer *)arg1 didReceiveMessage:(MDXChannelMessage *)arg2;
@end

