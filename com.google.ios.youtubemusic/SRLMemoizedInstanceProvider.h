//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface SRLMemoizedInstanceProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_ivarQueue;
    id _instance;
}

- (void).cxx_destruct;
- (id)memoizedInstanceWithFactoryBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

