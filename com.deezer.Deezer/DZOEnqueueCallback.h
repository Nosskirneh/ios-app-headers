//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DZOEnqueueCallback : NSObject
{
    CDUnknownBlockType _completionBlock;
}

+ (id)enqueueCallbackWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (_Bool)isCancelled;
- (void)cancel;
- (void)dealloc;

@end

