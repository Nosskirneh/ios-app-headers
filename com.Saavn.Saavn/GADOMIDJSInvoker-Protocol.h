//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JSValue, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol GADOMIDJSInvoker <NSObject>
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
- (void)invokeScript:(NSString *)arg1;
- (void)invokeCallback:(JSValue *)arg1 argument:(id)arg2;
- (void)invokeCallback:(JSValue *)arg1;
@end

