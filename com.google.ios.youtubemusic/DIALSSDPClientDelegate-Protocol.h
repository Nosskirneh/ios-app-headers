//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DIALSSDPClient, NSString;

@protocol DIALSSDPClientDelegate
- (void)onSSDPClientDisconnected:(DIALSSDPClient *)arg1;
- (void)onSSDPClientDidFinishMSearch:(DIALSSDPClient *)arg1;
- (void)onSSDPClient:(DIALSSDPClient *)arg1 response:(NSString *)arg2;
- (void)onSSDPClientWillSendMSearch:(DIALSSDPClient *)arg1;
@end

