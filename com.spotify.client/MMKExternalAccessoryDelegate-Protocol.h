//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class MMKExternalAccessoryConnection, MMKExternalAccessoryManager;

@protocol MMKExternalAccessoryDelegate
- (void)accessoryManager:(MMKExternalAccessoryManager *)arg1 didDisconnectFromConnection:(MMKExternalAccessoryConnection *)arg2;
- (void)accessoryManager:(MMKExternalAccessoryManager *)arg1 didCreateConnection:(MMKExternalAccessoryConnection *)arg2;
@end
