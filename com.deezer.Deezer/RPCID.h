//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_source;

@interface RPCID : NSObject
{
    NSString *rpcID;
    NSObject<OS_dispatch_source> *timer;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer;
@property(readonly, nonatomic) NSString *rpcID; // @synthesize rpcID;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelTimer;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithRpcID:(id)arg1 timer:(id)arg2;

@end

