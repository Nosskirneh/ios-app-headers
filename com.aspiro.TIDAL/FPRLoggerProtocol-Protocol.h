//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class FIRTrace, NSString;

@protocol FPRLoggerProtocol
- (void)forceUploadWithCompletionHandler:(void (^)(_Bool))arg1;
- (void)logTrace:(FIRTrace *)arg1;
- (void)startWithAppID:(NSString *)arg1;
@end
