//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTWazeTransportManager, SPTWazeTransportMessage;

@protocol SPTWazeTransportManagerDelegate <NSObject>
- (void)transportManager:(SPTWazeTransportManager *)arg1 didReceiveMessage:(SPTWazeTransportMessage *)arg2;
- (void)transportManager:(SPTWazeTransportManager *)arg1 didUpdateConnectionStatus:(_Bool)arg2;
@end

