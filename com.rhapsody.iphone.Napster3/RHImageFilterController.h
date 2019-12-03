//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RHOperationQueue;
@protocol OS_dispatch_queue;

@interface RHImageFilterController : NSObject
{
    RHOperationQueue *_imageOperationQueue;
    NSObject<OS_dispatch_queue> *_imageModifierQueue;
}

+ (id)convertColor:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *imageModifierQueue; // @synthesize imageModifierQueue=_imageModifierQueue;
@property(retain, nonatomic) RHOperationQueue *imageOperationQueue; // @synthesize imageOperationQueue=_imageOperationQueue;
- (void).cxx_destruct;
- (id)deferredBlurWithBlurRadius:(unsigned long long)arg1 maxSize:(struct CGSize)arg2 backgroundColor:(id)arg3 overlayColor:(id)arg4;
@property(nonatomic) long long numberOfConcurrentOperations;
- (id)init;

@end
